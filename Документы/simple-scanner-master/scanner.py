#!/usr/bin/python
from sys import argv
from os import system
import zbar
import Image
import cv

SEPARATOR = ' '
TERMINATOR = ' '

# obtain image data
#pil = Image.open(argv[1]).convert('L')
#width, height = pil.size
#raw = pil.tostring()

# Take a picture
capture = cv.CaptureFromCAM(0)
cv_img_color = cv.QueryFrame(capture)
width = cv_img_color.width
height = cv_img_color.height
cv_img = cv.CreateImage((width, height), cv.IPL_DEPTH_8U, 1)
cv.CvtColor(cv_img_color, cv_img, cv.CV_RGB2GRAY)
cv.SaveImage("capture.jpg", cv_img)
raw = cv_img.tostring()

# configure the reader
scanner = zbar.ImageScanner()
scanner.parse_config('enable')

# wrap image data
image = zbar.Image(width, height, 'Y800', raw)

# scan the image for barcodes
scanner.scan(image)

# extract results
print len(image.symbols), "symbols found."
strings = [symbol.data for symbol in image.symbols]
output = SEPARATOR.join(strings) + TERMINATOR

# send the results using xte
system('xte "str %s"' % output)

# clean up
del(image)

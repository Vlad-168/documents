#! /usr/bin/env python
# -*- coding: utf-8 -*-
from qrtools import QR
my_QR =QR("/home/vladislav/Документы/ASLServerDjango/ASLServerDjango/mysite/polls/templates/qr-books/30.png")
 
# decodes the QR code and returns True if successful
my_QR.decode()
my_QR.data_to_string() 
# prints the data
print (my_QR.data)
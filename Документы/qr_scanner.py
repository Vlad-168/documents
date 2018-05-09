# -*- coding: utf-8 -*-
from qrtools import QR
b = QR(filename="/home/vladislav/Документы/ASLServerDjango/ASLServerDjango/mysite/polls/templates/qr-books/30.png")
c=b.encode("utf-8")
c.decode()
c.data  # prints u'NULL'
c.data_type 
print (c) # prints u'text'
c.data_to_string()  # pr
print (c)
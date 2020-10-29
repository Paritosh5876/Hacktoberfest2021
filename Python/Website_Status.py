#!/usr/bin/env python
import os, time, httplib
from termcolor import colored

SITES = [
	"www.meesters-id.nl",
	"www.carolsingers.nl",	
]

while 1:
	for site in SITES:
		conn = httplib.HTTPConnection(site, timeout=10)
		conn.request("HEAD", "/")
		response = conn.getresponse()
		
		if response.status != 200:
			print "\a"
			response.status = colored(response.status, 'red')
					
		print "{0:30} {1:10} {2:10}".format(site, response.status, response.reason)
		conn.close()
	
	time.sleep(2)
	os.system("clear")

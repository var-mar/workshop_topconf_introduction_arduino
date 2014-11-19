import serial 
from time import sleep

ser = serial.Serial('/dev/tty.usbmodem1411', 9600)
while True:
	ser.write('0')
	sleep(5.0)
	ser.write('1')
	sleep(5.0)
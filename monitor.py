import serial

arduino = serial.Serial('/dev/ttyUSB0',9600)

def led():
	arduino.write('1')

def led1():
	arduino.write('0')

t=0
while(t<300000):
	t = t+1
led()

print("done")
# python script showing battery details
import psutil

# function returning time in hh:mm:ss
def convertTime(seconds):
	minutes, seconds = divmod(seconds, 60)
	hours, minutes = divmod(minutes, 60)
	return "%d:%02d:%02d" % (hours, minutes, seconds)

# returns a tuple
battery = psutil.sensors_battery()

print("Battery percentage : ", battery.percent)
print("Power plugged in : ", battery.power_plugged)

# converting seconds to hh:mm:ss
print("Battery left : ", convertTime(battery.secsleft))

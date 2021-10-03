# importing the module
import screen_brightness_control as sbc

# get current brightness value
current_brightness = sbc.get_brightness()
print(current_brightness)

# get the brightness of the primary display
primary_brightness = sbc.get_brightness(display=0)
print(primary_brightness)

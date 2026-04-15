from machine import Pin, SoftI2C, ADC
import time
from ssd1306 import SSD1306_I2C
import dht

i2c = SoftI2C(scl=Pin(14), sda=Pin(12))
width = 128
height = 64
oled = SSD1306_I2C(width, height, i2c)

sensor_pin = Pin(13, Pin.IN)
light_sensor = ADC(sensor_pin)

sensor = dht.DHT22(Pin(15))

while 1:
    signal = 65535 - light_sensor.read_u16()
    signal_percent = int(signal * (100 / 65535))

    oled.text('light ' + str(signal_percent) + '%', 0, 0)
    oled.show()
    time.sleep_ms(60)
    oled.fill(0)

    time.sleep_ms(30)

    sensor.measure()
    temp = sensor.temperature()

    oled.text('temperature ' + str(temp), 0, 20)
    oled.show()
    time.sleep_ms(100)
    oled.fill(0)

    time.sleep_ms(50)

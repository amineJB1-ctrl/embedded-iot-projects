from machine import Pin, ADC
import time

push_button1 = Pin(34, Pin.IN)
relay1 = Pin(32, Pin.OUT)
NTC1 = Pin(33, Pin.IN)
ntc1 = ADC(NTC1)

push_button2 = Pin(21, Pin.IN)
relay2 = Pin(19, Pin.OUT)
NTC2 = Pin(15, Pin.IN)
ntc2 = ADC(NTC2)

push_button3 = Pin(4, Pin.IN)
relay3 = Pin(16, Pin.OUT)
NTC3 = Pin(0, Pin.IN)
ntc3 = ADC(NTC3)

ledR1 = Pin(23, Pin.OUT)
ledV1 = Pin(22, Pin.OUT)
ledR2 = Pin(5, Pin.OUT)
ledV2 = Pin(18, Pin.OUT)
ledR3 = Pin(2, Pin.OUT)
ledV3 = Pin(17, Pin.OUT)

while 1:
    button1value = push_button1.value()
    button2value = push_button2.value()
    button3value = push_button3.value()

    Temperature1_signal = 65535 - ntc1.read_u16()
    Temperature2_signal = 65535 - ntc2.read_u16()
    Temperature3_signal = 65535 - ntc3.read_u16()

    if button1value == 1 and Temperature1_signal < 52525:
        relay1.on()
        ledR1.off()
        ledV1.on()
    elif button1value == 1 and Temperature1_signal > 52525:
        relay1.off()
        ledR1.on()
        ledV1.off()

    if button2value == 1 and Temperature2_signal < 52525:
        relay2.on()
        ledR2.off()
        ledV2.on()
    elif button2value == 1 and Temperature2_signal > 52525:
        relay2.off()
        ledR2.on()
        ledV2.off()

    if button3value == 1 and Temperature3_signal < 52525:
        relay3.on()
        ledR3.off()
        ledV3.on()
    elif button3value == 1 and Temperature3_signal > 52525:
        relay3.off()
        ledR3.on()
        ledV3.off()

    time.sleep(0.1)

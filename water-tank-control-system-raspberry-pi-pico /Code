from machine import Pin
import utime

trig = Pin(0, Pin.OUT, value=0)
echo = Pin(1, Pin.IN)
relayIn = Pin(12, Pin.OUT, value=0)
relayOut = Pin(13, Pin.OUT, value=0)
switch = Pin(18, Pin.IN, Pin.PULL_UP)

D = 320
h = 0

def ultrason():
    global h
    t = 0
    distance = 0
    Toff = 0
    Ton = 0

    trig.on()
    utime.sleep_us(10)
    trig.off()

    while echo.value() == 0:
        Toff = utime.ticks_us()

    while echo.value() == 1:
        Ton = utime.ticks_us()

    t = (Ton - Toff) / 2
    distance = int(t * 0.034)

    h = 320 - distance
    hpercent = int(h * (100 / 300))

    print(hpercent)

    if 210 < h < 270:
        relayIn.on()
        relayOut.on()
    elif h < 210:
        relayIn.on()
        relayOut.off()
    else:
        relayIn.off()
        relayOut.on()

while True:
    if switch.value() == 0:
        ultrason()
        utime.sleep_us(100)
    else:
        pass

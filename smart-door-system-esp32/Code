from machine import Pin
import time

Pir_Sensor = Pin(14, Pin.IN)
Step = Pin(0, Pin.OUT, value=0)
Dir = Pin(2, Pin.OUT, value=0)

ms1 = Pin(21, Pin.OUT, value=0)
ms2 = Pin(19, Pin.OUT, value=0)
ms3 = Pin(18, Pin.OUT, value=0)

ena = Pin(22, Pin.OUT, value=0)

def rotate(DIR, steps, speed, mode, temps):
    if mode == 1:  # 1 step
        ena.off()
        ms1.off()
        ms2.off()
        ms3.off()
    elif mode == 2:  # 1/2 step
        ena.off()
        ms1.on()
        ms2.off()
        ms3.off()
    elif mode == 3:  # 1/4 step
        ena.off()
        ms1.off()
        ms2.on()
        ms3.off()
    elif mode == 4:  # 1/8 step
        ena.off()
        ms1.on()
        ms2.on()
        ms3.off()
    elif mode == 5:  # 1/16 step
        ena.off()
        ms1.on()
        ms2.on()
        ms3.on()
    else:
        ena.on()
        print("erreur")

    Dir.value(DIR)

    for i in range(1, steps + 1):
        Step.on()
        time.sleep_ms(speed)
        Step.off()
        time.sleep_ms(speed)

    time.sleep(temps)

while 1:
    reading = Pir_Sensor.value()

    if reading == 1:
        rotate(1, 200, 50, 1, 4)
        rotate(0, 200, 20, 1, 4)
    else:
        rotate(0, 0, 0, 0, 0)

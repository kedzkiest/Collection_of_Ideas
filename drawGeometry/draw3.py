from turtle import *
import random
import time

pendown()
ht()
begin = time.time()
t = 100
speed(0)
while True:
    end = time.time()
    if(end-begin > 100):
        break
    
    num = random.uniform(-300, 300)
    num2 = random.uniform(-300, 300)
    
    goto(num, num2)

penup()
done()
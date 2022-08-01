from turtle import *
import time
import random

pendown()
ht()
speed(0)
begin = time.time()

while True:
    end = time.time()
    if end-begin > 30:
        break
        
    num = random.random()
    if(num < 0.5):
        left(90)
        color('red')
    else:
        right(90)
        color('blue')
        
    forward(10)
    
penup()
done()
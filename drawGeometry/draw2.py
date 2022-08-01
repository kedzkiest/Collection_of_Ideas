from turtle import *
import math

ht()
penup()
setx(-300)
sety(-300)
pendown()
speed(10)
t = 0
while True:
    t = t + 1
    if t > 150:
        break
    
    forward(40)
    left(math.sin(t/360) * 180)
    
    
penup()
done()
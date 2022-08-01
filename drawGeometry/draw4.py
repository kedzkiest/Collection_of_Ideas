from turtle import *

pendown()
ht()
speed(0)
for i in range(500):
    if i % 2 == 0:
        left(i)
    else:
        right(i)
        
    if i % 4 == 0:
        left(180)
        
    forward(i)
    
penup()
done()
    
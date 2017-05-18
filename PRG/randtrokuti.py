from random import randint as random
from random import random as randfloat
import turtle as t

## funkcija koja provjerava je li trokut pravokutan
def pravi(a,b,c):

    ## racunanje linija izmedu dvije tocke
    Da = ((b[0]-c[0])**2*(b[1]-c[1])**2)**(1/2)
    Db = ((a[0]-c[0])**2*(a[1]-c[1])**2)**(1/2)
    Dc = ((b[0]-a[0])**2*(b[1]-a[1])**2)**(1/2)

    ## provjera je li trokut pravokutan
    if Da**2+Db**2==Dc**2 or Da**2+Dc**2==Db**2 or Dc**2+Db**2==Da**2:
        return True
    else:
        return False

## funkcija koja crta trokut
def trokut(i):
    t.pu()

    ## randomizirano generiranje tocaka
    a = random(-400,400),random(-400,400)
    b = random(-400,400),random(-400,400)
    c = random(-400,400),random(-400,400)

    ## nasumicno generiranje boje
    clr = randfloat(),randfloat(),randfloat()
    t.color(clr)
    t.width(5)

    ## provjera je li pravi trokut i crtanje ako je
    if pravi(a,b,c):
        lista.append(i)
        n+=1

        t.goto(a)
        t.pd()
        t.goto(b)
        t.goto(c)
        t.goto(a)

t.hideturtle()

lista = []
n = 0

for i in range(10):
    trokut(i)

print("Ima",n,"pravokutnih trokuta")
print("Pravokutni su:",lista)



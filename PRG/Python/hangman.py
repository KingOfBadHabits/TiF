from random import choice

rjecnik = ['abeceda','godina','riječ','škola']

rijec = choice(rjecnik)

n = 0
nP = 0

pogodak=[]

for i in range(0,len(rijec)):
    pogodak.append('_')

while True:
    print(' '.join(pogodak))
    pokusaj=str(input("Unesite slovo kao pogodak: "))
    for i in range(0,len(rijec)):
        if pokusaj == rijec[i]:
            pogodak[i]=rijec[i]
            n+=1
    nP+=1
    if n==len(pogodak):
        break
print(' '.join(pogodak))

print("BRAVO!!! Riječ je bila ",rijec,".")
print("Trebalo ti je ",nP," pokušaja da ju pogodiš.")

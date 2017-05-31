from random import shuffle

rjecnik = ['abeceda','godina','riječ','škola']

shuffle(rjecnik)

rijec = rjecnik[1]

pogodak = "_" * len(rijec)

while True:
    print(pogodak)
    pokusaj=str(input(print("Unesite slovo kao pogodak: ")))
    for i in range(0,rijec.len()+1):
        if pokusaj == rijec[i]:
            pogodak[i]=rijec[i]
        
    

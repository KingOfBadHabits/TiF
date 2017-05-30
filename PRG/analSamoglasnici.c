#include <stdio.h>

int main()
{
    char odlomak[20000];
    int i = 0;
    int brA=0,brE=0,brI=0,brO=0,brU=0;

    printf("\nUtipkaj odlomak teksta...\n");
    gets(odlomak);
    // Koliko smo teksta upisali
    while(odlomak[i]!='\0')
    {
        switch(odlomak[i])
        {
        case 'A':
        case 'a':
            brA++;
            break;
        case 'E':
        case 'e':
            brE++;
            break;
        case 'I':
        case 'i':
            brI++;
            break;
        case 'O':
        case 'o':
            brO++;
            break;
        case 'U':
        case 'u':
            brU++;
            break;
        }
        i++;
    }
    printf("\nUpisano je %i znakova.",i);
    printf("\nDuljina stringa je %i.",i+1);
    printf("\nIma %i znakova a, %i znakova e, %i znakova i, %i znakova o i %i znakova u.",brA,brE,brI,brO,brU);

    return 0;
}

#include <stdio.h>
#include "lib.h"

int myStrLen(char *nome)
{
    int i = 0;
    while (nome[i] != '\0')
    {
        i++;
    }
    return i;
}

char *myStrUpper(char *nome)
{
    int comp;
    for (int i = 0; i < myStrLen(nome); i++)
    {
        comp = (int)nome[i];
        if (comp > 96 && comp < 123)
        {
            nome[i] = (char)(comp - 32);
        }
    }
}

char *myStrLower(char *nome)
{
    int comp;
    for (int i = 0; i < myStrLen(nome); i++)
    {
        comp = (int)nome[i];
        if (comp < 91 && comp > 64)
        {
            nome[i] = (char)(comp + 32);
        }
    }
}

int myStrComp(char *nome1, char *nome2)
{
    int cont1 = myStrLen(nome1);
    int cont2 = myStrLen(nome2);
    if (cont1 == cont2)
    {
        for (int i = 0; i < cont1; i++)
        {   
            printf("\n\n%d, %c\n\n", cont1, nome2[4]);
            if(nome1[i] != nome2[i]){
                return 0;
            }
        }
        return 1;
    }
}
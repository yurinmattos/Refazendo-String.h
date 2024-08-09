#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(){
    char nome[50];

    printf("Digite algo:");
    fgets(nome, sizeof(nome), stdin);

    int i = myStrLen(nome);

    printf("\nStrlen:%d\n\n", i);
    
    myStrLower(nome);
    printf("\nmyStrLower:%s\n\n", nome);
    
    myStrUpper(nome);
    printf("\nmyStrUpper:%s\n\n", nome);

    if(!myStrComp(nome, "Yuri")){
        printf("É igual!");
    }
    else{
        printf("É diferente");
    }


return 0;
}
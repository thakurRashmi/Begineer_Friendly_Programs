#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void){
    int num, numComparaFixo, numComparaAltera, numCopia, cont = 0;

    printf("\n\n Insira um número inteiro positivo: ");
    scanf("%d", &num);

    if(num >= 1){
        while(num != 0){
            numComparaFixo = num % 10;
            num = num / 10;
            numCopia = num;

            while(numCopia != 0){
                numComparaAltera = numCopia % 10;
                numCopia = numCopia / 10;
                if(numComparaFixo == numComparaAltera){
                    cont++;
                    numComparaAltera = 0;
                    num = 0;
                }
            }

        }

        if(cont != 0)
            printf("\n\n Existem dois algarismos iguais no número inserido!\n\n");
        else
            printf("\n\n NÃO existem dois algarismos iguais no número inserido!\n\n");


    }else
        printf("\n\n Erro nos dados de entrada! \n\n");


    system("Pause");
    return(0);
}

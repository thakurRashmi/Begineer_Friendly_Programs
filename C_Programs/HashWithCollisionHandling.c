//Collision handling using static linked list + overflow area
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
#define MAX2 5

struct No
{
    int info;
    int next;
};

struct tabelaHash
{
    int disp;
    struct No Vet[MAX];
    struct No Overf[MAX2];
};

void inicializaTabela(struct tabelaHash *T)
{
    int i;
    for(i=0 ; i<MAX ; i++)
    {
        T->Vet[i].info = -1;
        T->Vet[i].next = -1;
    }
    for(i=0 ; i<MAX2-1 ; i++)
    {
        T->Overf[i].next = i+1;
    }
    T->Overf[i].next = -1;
    T->disp=0;
}

int hash(int chave)
{
    int i, soma=0, lim;
    char s[10];
    itoa(chave, s, 10);
    lim = strlen(s);
    for ( i=0 ; i<lim ; i++)
    {
        soma = soma + (i+1)*s[i];
    }
    return (soma%MAX);
}

short inserir(struct tabelaHash *T, int elemento)
{
    int pos, p, ant, aux;
    pos = hash(elemento);
    if(T->disp==-1)
        return(0);
    if(T->Vet[pos].next == -1 && T->Vet[pos].info == -1)
        T->Vet[pos].info = elemento;
    else    //Insere na atria de overflow
    {
        if(T->Vet[pos].next==-1)
        {
            T->Vet[pos].next = T->disp;
        }
        else //Collision
        {
            for(p=T->Vet[pos].next ; T->Overf[p].next!=-1 ; p=T->Overf[p].next);
            T->Overf[p].next = T->disp;
        }
        aux=T->Overf[T->disp].next;
        T->Overf[T->disp].info = elemento;
        T->Overf[T->disp].next = -1;
        T->disp=aux;
    }
    return(1);
}

short remover(struct tabelaHash *T, int elemento)
{
    int pos, p, ant=-1, ind;
    pos = hash(elemento);
    if(T->Vet[pos].next== -1 && T->Vet[pos].info==-1)
        return(0);
    if(T->Vet[pos].info == elemento)
    {
        if(T->Vet[pos].next==-1)
            T->Vet[pos].info=-1;
        else
        {
            ind = T->Vet[pos].next;
            T->Vet[pos].info = T->Overf[ind].info;
            T->Vet[pos].next = T->Overf[ind].next;
            T->Overf[ind].next = T->disp;
            T->disp=ind;
        }
    }
    else
    {
        for(p=T->Vet[pos].next ; p!=-1 && T->Overf[p].info != elemento ; p=T->Overf[p].next);
            ant = p;
        if(p==-1)
            return(0);
        if(ant==-1)
            T->Vet[pos].next=T->Overf[p].next;
        else
            T->Overf[ant].next= T->Overf[p].next;
        T->Overf[p].next = T->disp;
        T->disp=p;
    }
    return(1);
}

short buscar(struct tabelaHash *T, int elemento)
{
    int pos, p;
    pos = hash(elemento);
    if(T->Vet[p].next== -1 && T->Vet[p].info==-1)
        return(0);
    if(T->Vet[p].info == elemento)
        return(1);
    for(p=T->Vet[pos].next ; p!=-1 ; p=T->Overf[p].next);
    {
        if(T->Overf[p].info == elemento)
            return 1;
    }
    return 0;
}

void imprimir(struct tabelaHash T)
{
    int i;
    for(i=0 ; i<MAX ; i++)
    {
        printf("\n Vet[%d]: ", i);
        printf("%d          %d", T.Vet[i].info, T.Vet[i].next);
    }
    printf("\n\n");
    for(i=0 ; i<MAX2 ; i++)
    {
        printf("\n Overf[%d]: ", i);
        printf("%d          %d", T.Overf[i].info, T.Overf[i].next);
    }
}

int main (void)
{
    struct tabelaHash T1;
    inicializaTabela(&T1);
    inserir(&T1, 82);
    inserir(&T1, 8);
    inserir(&T1, 44);
    inserir(&T1, 25);

    //remover(&T1, 82);
    //remover(&T1, 44);

    /*inserir(&T1, 901);
    inserir(&T1, 5);
    inserir(&T1, 441);
    inserir(&T1, 24);
    inserir(&T1, 24);
    inserir(&T1, 96);
    inserir(&T1, 7);
    inserir(&T1, 8);
    inserir(&T1, 30);
    inserir(&T1, 45);*/
    //if(buscar(&T1, 1))
    //    printf("\n Found");
    //else
    //    printf("\n Not found");
    imprimir(T1);
}

//Crie em C o algoritmo da Busca Linear para strings.

#include <stdio.h>
#include <string.h>
#define TAM 5 
#define strig 15
//definindo variavel global
char nome[TAM][strig];

//função de buscador linear de nomes
int buscalinear( char nome[TAM][strig], int t, char *key){
    int i;
    for (i = 0; i < t; i++)
    {
        if (*key == *nome[i])
            return i;
    }
    return -1;  
}

//comando principal
int main()
{
    char busca[15];
    int resultado, tamanho, i;
    for ( i = 0; i < TAM; i++)
    {
        printf("digite o nome %i: ", i);
        scanf("%s", &nome[i]);
    }

//digite o nome para busca
    printf("Digite o nome que procura: ");
    scanf("%s", &busca);

//função
    resultado = buscalinear(&nome, TAM, &busca);

//condição se encontrou ou não
    if (resultado == -1)
    {
        printf("não foi encontrado esse nome na lista.%i", resultado);
    }else{
        printf("o nome esta no vetor %i", resultado);
    }
}

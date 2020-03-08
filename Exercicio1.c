#include <stdio.h>
#include <stdlib.h>
int quantidade;
int numero;
int numeroArray[20];
int soma;

int i;

int main()
{
    printf("introduza q quantidade de numeros\n");
    scanf(" %d", &quantidade);

    for ( i = 0; i < quantidade; i++)
    {
        printf("Diga um numero 0 a 10\n");
        scanf(" %d", &numero);
        if (numero >= 0 || numero <= 10)
        {
            numeroArray[i] = numero;
        }
        else
        {
            printf("Erro");
        }
    }
do {
    for ( i = 0; i < quantidade; i++)
    {
        soma = soma + numeroArray[i];
        
    }
} while ( soma <= 100);
printf(" %d", numeroArray[i]);



    if (soma > 50)
    {
        for ( i = 0; i < quantidade; i++)
        {
            printf(" %d", numeroArray[i]);
            
        }
        printf("\n %d", soma);
    }
    else if (soma > 50 || soma < 100)
    {
        for ( i = 0; i < quantidade; i++)
        {
            printf(" %d", numeroArray[i]);  
        }
        printf("\n %d", soma);
    }
    else if (soma > 100)
    {
        printf("Arrebentou a escala\n");

    }
    
    
}

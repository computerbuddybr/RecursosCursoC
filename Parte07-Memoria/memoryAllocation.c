#include <stdio.h>
#include <stdlib.h>

void main()
{
    // Crio o ponteiro
    int *ponteiro;
    
    // Número de elementos
    int elementos = 10;

    // Calculo o quanto de memória vou precisar para cada eelemento do meu array
    int bytes = sizeof(int);

    // Aloco a memória para o meu ponteiro
    ponteiro = (int *) calloc(elementos, bytes);
    printf("\nTestando: %p\n", ponteiro);
    if (ponteiro == NULL)
    {
        printf("A memória não foi alocada\n");
    }
    else
    {

        printf("\nAntes de popular\n");

        for (int i = 0; i < elementos; i++)
        {
            printf("%d\t", ponteiro[i]);
        }

        // Populando
        for (int i = 0; i < elementos; i++)
        {
            ponteiro[i] = i;
        }
        printf("\nDepois de popular\n");
        for (int i = 0; i < elementos; i++)
        {
            printf("%d\t", ponteiro[i]);
        }

        printf("\nVendo o que tem depois da minha alocação\n");
        for (int i = 0; i < (elementos + 10); i++)
        {
            printf("%d\t", ponteiro[i]);
        }

        elementos += 10;
        // O realloc recebe como primeiro argumento o ponteiro e segundo o tamanho total da memória a ser reservada para o ponteiro
        ponteiro = (int *) realloc(ponteiro, (elementos * bytes));
        printf("\nTestando: %p\n", ponteiro);
        if (ponteiro == NULL)
        {
            printf("A memória não foi alocada\n");
        }
        else
        {
            printf("\nVendo o que tem depois da minha realocação\n");
            for (int i = 0; i < elementos; i++)
            {
                printf("%d\t", ponteiro[i]);
            }

            // Manutenção
            free(ponteiro);
            printf("\nTestando: %p\n", ponteiro);
            for(int i = 0; i < elementos; i++){
                printf("%d\t", *(ponteiro + i));
            }
        }
    }
}
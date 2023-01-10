#include <stdio.h>

//Posso omitir o tamanho do Array porque ao fornecer o array ele já vai calcular o tamanho
void funcaoQueRecebeArray(int meuArray[]){
    printf("\nO primeiro valor do meu array é %d\n", meuArray[0]);

}
void main(){
    //Array lijear, vetor
    int meuArray[5] = {1,2,3,4,5}; 
    int meuArrayNovo[5];
    meuArrayNovo[0] = 1;
    
    

    

    printf("******\nArray linear/Vetor, já declarada\n*****\n");
    for(int i = 0; i < 5; i++){
        if(i !=0) {
            printf("...");
        } 
        printf("%d", meuArray[i]);
    }
    printf("\n");

    int meuArray2[5];

    meuArray2[0] = 1;
    meuArray2[2] = 2;
    printf("******\nArray linear/Vetor, atribuindo depois\n*****\n");
    for(int i = 0; i < 5; i++){
        if(i !=0) {
            printf("...");
        } 
        printf("%d", meuArray2[i]);
    }
    printf("\n");
    int soma = 0;
     for(int i = 0; i < 5; i++){
        soma += meuArray2[i];
        if(i !=0) {
            printf("...");
        } 
        printf("%d", meuArray2[i]);
    }
    printf("\nSoma: %d \n", soma);



    //Array multidimensional, matriz
    int meuArrayMulti[2][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10}
    };
    printf("Meu elemento: %d\n",meuArrayMulti[0][1]);

    printf("******\nArray multidimensional/Matriz\n*****\n");
    for(int i = 0; i < 2; i++){
        printf("[%d]->", i);
        for(int j = 0; j < 5; j++){
            if(j !=0) {
                printf("...");
            } 
            printf("%d", meuArrayMulti[i][j]);
    }
    printf("\n");
    }

    //Array multidimensional, matriz
    int meuArrayMulti2[2][3][5] = {
        {
           {1,2,3,4,5},
           {6,7,8,9,10},
           {11,12,13,14,55}
        },
        {  
           {1,2,3,4,5},
           {6,7,8,9,10},
           {11,12,13,14,55}
        }
        
    };

    printf("******\nArray multidimensional/Matriz 3\n*****\n");
    for(int i = 0; i < 2; i++){
        printf("[%d]:\n", i);
        for(int j = 0; j < 3; j++){
            printf("[%d]->", j);
            for(int h = 0; h < 5; h++){
                if(h !=0) {
                 printf("...");
                } 
                printf("%d", meuArrayMulti2[i][j][h]);
            }
           printf("\n"); 
        }
        printf("*****\n");
        
    }


    //Strings
    printf("******\nTestando Strings\n*****\n");
    char meuString[8] = "adriana";
    printf(meuString);
    printf("\n");
    meuString[0] = 'A';
    printf(meuString);

    // printf("******\nTestando printf outro Array\n*****\n");
    //printf(meuArray);
    funcaoQueRecebeArray(meuArray);
   




}
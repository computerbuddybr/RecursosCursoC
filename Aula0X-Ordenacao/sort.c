#include <stdio.h>
typedef struct Data{
 int index;
 int value;

} DATA;



void main(){


    
    int numbers[10] = {5,87,98,50,32,4,59,8,10,6};
    DATA newNumbers[10];

    //Primeiro colocando tudo na nova array multi
    for(int a = 0; a < 10; a++){
        newNumbers[a].index = a;
        newNumbers[a].value = numbers[a];
        
    }
    //Sorting
    DATA tempData;

    for (int i = 0; i < 10; i++) {

        for(int j=0; j < 10; j++){

            if(newNumbers[j].value > newNumbers[i].value){
                //Guardando temporariamente um valor pra fazer o swap
                tempData.index = newNumbers[i].index;
                tempData.value = newNumbers[i].value;

                //Fazendo o swap
                newNumbers[i].index = newNumbers[j].index;
                newNumbers[i].value = newNumbers[j].value;

                newNumbers[j].index = tempData.index;
                newNumbers[j].value = tempData.value;
                //printf("Swapped %d for %d\n",newNumbers[j].value,newNumbers[i].value);
                
            }
        }

        
    }

    for(int b = 0; b < 10; b++){
            printf("Na posição %d o índice é %d e o valor %d\n",b, newNumbers[b].index, newNumbers[b].value);
    }

}
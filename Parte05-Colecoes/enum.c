#include <stdio.h>
typedef enum {
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo

} SEMANA;

void main(){
    SEMANA dia = segunda;
    printf("Meu dia é %d\n", dia);
    for(int i = 1; i < 10; i++){
        switch (dia){
        case segunda:
            printf("Segunda\n");
            break;
        case terca:
            printf("Terça\n");
            break;
        case quarta:
            printf("Quarta\n");
            break;
        case quinta:
            printf("Quinta\n");
            break;
        case sexta:
            printf("Sexta\n");
            break;
        case sabado:
            printf("Sábado\n");
            break;
        case domingo:
            printf("Domingo\n");
            break;
        default:
            printf("Esse não é um dia da semana\n");
        }
        dia++;
}
}
#include <stdio.h>
typedef enum Semana
{
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo

} SEMANA;
enum Mes
{
    janeiro,
    fevereiro,
    marco,
    abril,
    maio,
    junho,
    julho,
    agosto,
    setembro,
    novembro,
    dezembro
};

void main()
{
    SEMANA dia = segunda;
    enum Mes meuMes = junho;
    printf("Meu dia é %d\n", dia);
    printf("Meu Mês é %d\n", meuMes);
    for (int i = 0; i < 10; i++)
    {
        switch (dia)
        {
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
    printf("Meu dia é %d\n", dia);
}
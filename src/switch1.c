#include <stdio.h>
// Vamos incluir uma nova biblioteca de sistema
// que possui o comando clear
#include <stdlib.h>

int main(){
    //Vamos chamar a função de sistemas para executar
    //o comando clear(limpa a tela do etrminal)
    system("clear");
    int nummes;
    printf("=============== Programa mês ===============\n");
    printf("\nPergunte ao programa. Qual é o mês número:");
    scanf("%d",&nummes);
    printf("\n\n=========================================\n");

    switch (nummes){
        case 1:
        printf("Janeiro\n");
        break;
        case 2:
        printf("Fevereiro\n");
        break;
        case 3:
        printf("Março\n");
        break;
        case 4:
        printf("Abril\n");
        break;
        case 5:
        printf("Maio\n");
        break;
        case 6:
        printf("Junho\n");
        break;
        case 7:
        printf("Julho\n");
        break;
        case 8:
        printf:("Agosto\n");
        break;
        case 9:
        printf("Setembro\n");
        break;
        case 10:
        printf("Outubro\n");
        break;
        case 11:
        printf("Novembro\n");
        break;
        case 12:
        printf("Dezembro\n");
        break;
        default:
        printf("Este mês nãp existe!\n");
    }
    return 0;
}
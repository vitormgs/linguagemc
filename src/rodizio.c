#include <stdio.h>

int main(){
    int placa;
    printf("Digite o número final da placa do seu veículo e tecle Enter\n");
    scanf("%d",&placa);

    if(placa == 1){
        printf("Rodizio de Segunda-Feira\n");
    }
    else if(placa == 2){
        printf("Rodizio de Segunda-Feita\n");
    }
    else if(placa == 3){
        printf("Rodizio Terça-Feira\n");
    }
    else if(placa == 4){
        printf("Rodizio Terça-Feira\n");
    }
    else if(placa == 5){
        printf("Rodizio Quarta-Feira\n");
    }
    else if(placa == 6){
        printf("Rodizio Quarta-Feira\n");
    }
    else if(placa == 7){
        printf("Rodizio Quinta-Feira\n");
    }
    else if(placa == 8){
        printf("Rodizio Quinta-Feira\n");
    }
    else if(placa == 9){
        printf("Rodizio Sexta- Feira");
    }
    else if(placa ==0){
        printf("Rodizio Sexta-Feira\n");
    }
    else{
        printf("Final de placa inválido!\n");
    }
    return 0;
    
}
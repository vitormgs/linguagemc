#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua idade e tecle Enter\n");
    scanf("%d",&idade);
    if(idade > 17){
        printf("Sua idade é %d Você tem acesso\n",idade);
    }
    else{
        printf("Sua idade é %d Você não tem acesso\n",idade);
    }
    return 0;
}
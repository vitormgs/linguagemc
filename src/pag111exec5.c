#include <stdio.h>
#include <stdlib.h>


int main(){
    system("clear");
     int i;
    int soma=0;
    for(i = 0; i <= 50; i++){
        if(i % 2 == 0){
            printf("%d + %d = ",soma,i);
            soma += i;
            printf("%d\n",soma);
        }
    }
    printf("O resultado da soma é %d\n",soma);
    return 0;
}
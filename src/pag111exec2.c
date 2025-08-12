#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
     int i , n;
    printf("Digite o número inteiro final\n");
    scanf("%d",&n);
    for(i = n; i >= 0; i--){
            printf("%d\n",i);
    }
    return 0;
}
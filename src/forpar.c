#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int i ,inicial, final;
    printf("Digite o número inicial\n");
    scanf("%d",&inicial);
    printf("Digite o número final\n");
    scanf("%d",&final);
    for(i = inicial; i <= final; i++){
        if(i % 2 == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}
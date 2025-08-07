#include <stdio.h>
#include <stdlib.h>
 
int main() {
    system("clear");
    int num, cont, rs;
    cont = 1;
    printf("Digite um número da tabuada que deseja fazer: \n");
    scanf("%d", &num);
    printf("Tabuada do %d:\n", num);
    while (cont <= 10) {
        rs = num * cont;
        printf("%d x %d = %d\n", num, cont, num * cont);
        cont++;
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    // chamar o comando  system ("clear") para limpar a tela do terminal
    system("clear");
    // criar uma variavel do tipo char para guardar a operação matemática
    // que  poderá ser: + - * ou /
    char ch;
    // criar variavel para guiardar dois números inteiros
    //matemáticas  
    int a, b;
    printf("Digite uma operação matemática (+, -, *, /): ");
    // Vamos capturar o sinal digitado pelo usuário e alocar na variável
    // ch. Usaremos comando getchar, que vem da bibliotecca stdio.h
    // caso
    // scanf ("%c", &ch)
    ch = getchar();
    printf("Digite dois números inteiros separados por virgula: \n");
    scanf("%d,%d",&a,&b);
    switch (ch){
        case '+':{
            int c = a + b;
            printf("O resultado da soma é: %d\n", c);
    }
        break;
        case '-':{
            int d = a - b;
            printf("O resultado da subtração é: %d\n", d);
    }
        break;
        case '*':{
            int e = a * b;
            printf("O resultado da multiplicação é: %d\n", e);
    }
        break;
        case '/':{
            int f = a / b;
            printf("O resultado da divisão é: %d\n", f);
    }
        break;
        default:
        printf("Operação inválida!\n");
    }
    return 0;
   
}
 
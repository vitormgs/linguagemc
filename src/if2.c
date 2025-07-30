#include <stdio.h>

int main() {
    int opcao;
    printf("Selecione uma opção:\n");
    printf("1. Ver Saldo\n");
    printf("2. Fazer Saque\n");
    printf("3. Fazer Depósito\n");
    printf("4. Sair\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao); // Lê a opção do usuário
    if (opcao == 1) {
        printf("Você sescolheu 'Ver Saldo'.\n");
        // Lógica para var saldo
    } else if (opcao == 2) {
        printf("Você escolheu 'Fazer Saque'.\n");
        // Lógica para fazer depósito
    } else if (opcao == 3) {
        printf("Você escolhe. 'Fazer Depósito'.\n");
        // Lógica para fazer depósito
    } else if (opcao == 4){
        printf("Saindo do programa. Até mais!\n");
    } else {
        printf("Opção inválida. Por favor escolha um número de 1 a 4.\n");
    }
    return 0;
}
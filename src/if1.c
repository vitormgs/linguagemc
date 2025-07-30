#include <stdio.h>
int main() {
    int pontuacao = 85;
    char conceito;
    if (pontuacao >= 90) { // Primeira condção
        conceito = 'A';
    } else if (pontuacao >= 80) { // Segunda condição, só avaliada se a primeira for falsa
        conceito = 'B';
    } else if (pontuacao >= 70) { // Terceira condição, só aviliada se as anteriores forem falsas
        conceito = 'C';
} else if (pontuacao >= 60) { // Quarta condição
    conceito = 'D';
} else { // Se nenhuma das condições acima for verdadeira
    conceito = 'F';
}
printf("Pontuação: %d -> Conceito: %c\n", pontuacao, conceito);
return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    //Vamos usar a variável que irá represetar
    //o arquivo em tempo de execução.
    //Esta variá deve ser declarada como
    //um CONSTANTE, pois o seu conteúdo NUNCA
    //poderá ser alterado. Uma vez alocado o
    //nome e caminho de arquivo, este não poderão
    //mudar em tempo de execução para não perder a
    //localização de arquivo e sua posição
    // em memória.

    FILE *arquivo;

    //Vamos definir onde o arquivo está ou será
    //criado. Para isso iremos usar o comando
    //fopen(f-file=arquivo | open=abrir )
    //Além disso iremos definir o aributo de
    //manipulação de arquivo, tais como:
    //r -> read(leitura) | w -> write(escrita)
    //a -> append(adição de texto) | pipe
    arquivo = fopen("files/texto.txt","a");

    //Vamos escrever no arquivo
    fprintf(arquivo,"Sexta-Feira\n");

    //Fechar o arquivo
    fclose(arquivo);
    printf("O arquivo foi criado\n");
    return 0;
}
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

char *criar(char *nomeArquivo, char *conteudo){
    FILE *arquivo;

    arquivo=fopen(nomeArquivo,"a");

    //fprintf(arquivo,conteudo);
    fputs(conteudo,arquivo);

    fclose(arquivo);
    return "Arquivo Criado\n";
}

float jurosSimples(float preco, float taxa){
    return preco * (taxa  / 100);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/criararquivo.h"

//Vamos criar uma estrutura(struct) que
//representa o cliente, com seus respectivos
//dados.
struct Cliente{
    char nome[100];
    char email[100];
    int idade;
};

int main(){

    system("clear");
    //Vamos definir uma variavel do tipo struct de Cliente
    //assim podemos acessar as propriedades da estrutura do cliente
    struct Cliente cli;
    //scanf("%s",cli.nome);
    printf("Digite o nome do cliente: \n");
    fgets(cli.nome,sizeof(cli.nome),stdin);

    printf("Digite o email da cliente: \n");
    fgets(cli.email,sizeof(cli.email),stdin);

    printf("Digite a idade do cliente: \n");
    scanf("%d",&cli.idade);

    printf("-----------------------\n%s - %s - %danos\n",cli.nome, cli.email, cli.idade);
    //Realizar a concatenação(junção de elementos distintos) para
    //gravaros dados de uma só vez
    char dados_cliente[100];
    char nome[30] = {"Nome: "};
    strcat(nome, cli.nome);
    strcat(dados_cliente,cli.nome);

    char email[30] = {"Email "};
    strcat(email, cli.email);
    strcat(dados_cliente,cli.email);

    /*Vamos converter a idade, que é o valor inteiro()int, para String
    Assim será possível concatenar o texto Idade com o valor real da 
    idade dados do Cliente.
    Ultilizamos um nova array de char que irá guardar os números, agora no
    formato de String. E, também usaremos o comando springf(String Print Format)
    o inicio comando pede o array de char para guardar o resultado 
    da conversão, neste caso %d decimal. E, o últimos valor é o número
    que será convertido (cli.idade)*/
    
    char idade[30];
    char idadecli[20];
    char id = sprintf(idadecli,"%d",cli.idade);
    strcat(idade, idadecli);
    strcat(dados_cliente,idade);


    char *resultado = criar("files/cadastro.txt",dados_cliente);
    printf("%s-----------------------\n",resultado);

    return 0;

}
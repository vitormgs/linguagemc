#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/arquivojs.h"

struct Funcionario{
    char nome[100];
    float salario;
    float convenio;
    float premio;
    float salarioliquido;
};

int main(){
    system("clear");
    struct Funcionario fun;
    printf("Digite o nome do funcionário: \n");
    fgets(fun.nome,sizeof(fun.nome),stdin);

    printf("Digite o salário do funcionário: \n");
    scanf("%f",&fun.salario);

    printf("Digite o convênio do funcionário\n");
    scanf("%f",&fun.convenio);

    printf("Digite o prêmio do funcionário: \n");
    scanf("%f",&fun.premio);

    printf("O desconto do convênio é %.2f\n",jurosSimples(fun.salario,fun.convenio));
    printf("O prêmio é %.2f\n",jurosSimples(fun.salario,fun.premio));
   
    fun.salarioliquido = fun.salario + jurosSimples(fun.salario,fun.premio) - jurosSimples(fun.salario,fun.convenio);

    printf("O salário líquido é %.2f\n",fun.salarioliquido);
    
    //Vamos uma composição com textos literais e variáveis para guardar no arquivo de texto.
    char dados_funcionario[100];

    char nome[30] = {"Nome: "};
    strcat(nome,dados_funcionario);
    strcat(dados_funcionario,fun.nome);

    //Craimos o vetor salario para armazenarto o texto Salário com R$
    //e juntar(concatenar) com o valor do salário
    char salario[20] = {"Salário: R$ "};

    //Foi criado vetor c_salario para guardar o valor salário comvertido
    //em char. Somente assim, será concatenado com o texto Salário R$
    char c_salario[10];

    //Etamos usando o comando sprintf para converter o valor digitado
    //do salario, que vem do formato float, para o formato char.
    //Assim podemos juntar com o vetor salario, criado, então a
    //estrutura: Salário R$ 00000.00
    sprintf(c_salario,"%.2f",fun.salario);

    //Junção ou (concatenação) entre salaio(Salário R$) com
    //c_salario(O valor digitado do salario)
    strcat(salario, c_salario);

    //Depois de juntar os vetores relacionados ao salario, agora  iremos
    //adicionar ao vetor de dados_funcionario para, então, gravar no
    //arquivo de texto
    strcat(dados_funcionario,salario);
    

    char salario_liquido[30] = {"\nLíquido: R$ "};

    char c_salario_liquido[10];

    sprintf(c_salario_liquido,"%.2f",fun.salarioliquido);

    strcat(salario_liquido, c_salario_liquido);

    strcat(dados_funcionario,salario_liquido);

    char *resposta = criar("files/funcionarios.txt",dados_funcionario);
    printf("%s\n",resposta);
  
    return 0;
}
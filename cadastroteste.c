#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];
//Digitar e ler Idade
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
//Digitar e ler Altura
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
//Digitar e ler Nome
    printf("Digite o seu nome: \n");
    scanf("%s", nome);
//Digitar e ler matricula
    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);
//Imprimir Nome, Matricula
//Imprimir Idade, Altura
    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade %d - Altura %.2f\n", idade, altura);

    return 0;
}

/*
T2 - Escreva um programa em C/C++ que leia a nota de três provas feitas por um aluno, calcule e imprima a média aritmética e o desvio padrão.

Observação: É sua tarefa pesquisar como calcular o desvio padrão.
*/

#include <stdio.h> //inclusão da biblioteca padrão do C.
#include <math.h> //inclusão da biblioteca que conta com a função de raiz quadrada.

int main() {
    float nota1, nota2, nota3; //declaração das variáveis que guardarão as notas.

    //solicitando as notas para o usuário e guardando nas variáveis acima declaradas:
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3) / 3; //calculando as médias das notas.
    printf("Média: %.2f\n", media); //imprimindo a média, o %.2f define a quantidade de casas decimais.

    //processo de cálculo do desvio padrão:
    //subtraindo da média cada valor individualmente e elevando ao quadrado:
    float desvio1 = (media - nota1) * (media - nota1);
    float desvio2 = (media - nota2) * (media - nota2);
    float desvio3 = (media - nota3) * (media - nota3);

    float somaDesvio = desvio1 + desvio2 + desvio3;   //somando os quadrados.

    float desvioPadrao = sqrt(somaDesvio / 3); //dividindo a soma dos quadrados pelo número de notas e calculando a raiz quadrada do resultado.
    
    printf("Desvio Padrão: %.2f\n", desvioPadrao); //imprimindo o resultado do desvio padrão.

};
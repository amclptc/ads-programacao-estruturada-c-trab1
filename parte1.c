/*
T1 - Escreva um programa em C/C++ que leia um número natural de 4 algarismos. Imprima este número de trás pra frente. 
Sugestão: isole os algarismos de unidade, dezena,  centena e milhar, depois imprima separadamente. Exemplo: Se for digitado o número 4638 seu programa deverá imprimir: 8364.
*/

#include <stdio.h>

int main(){ //início padrão com a estrutura básica de um programa em C.
    int numero; //declaração da variável numero.

    printf("Digite um número inteiro com 4 algarismos:"); //solicitação do número para o usuário.
    scanf("%d", &numero); //atribuição do número inserido pelo usuário na variável numero.

    printf("O número digitado foi %d\n", numero); //impressão que diz qual foi o número inserido pelo usuário.

    int unidade, dezena, centena, milhar; //declaração das variáveis que vão guardar as contas pra isolar cada algarismo

    unidade = numero % 10; //conta pra isolar o algarismo de unidade.
    dezena = (numero / 10) % 10; //conta pra isolar o algarismo de dezena.
    centena = (numero / 100) % 10; //conta pra isolar o algarismo de centena.
    milhar = (numero / 1000) % 10; //conta pra isolar o algarismo de milhar.

    printf("%d%d%d%d\n", unidade, dezena, centena, milhar); //imprimindo o número digitado pelo usuário de trás pra frente.
};


//o operador % (módulo) retorna o resto da divisão de um número, no caso, na divisão por 10 será o resto da unidade.

//(numero / 10) serve para eliminar, do número o algarismo da unidade.

//(numero / 100) elimina as dezes e assim sucessivamente.
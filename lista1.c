#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("kenner alves!");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2() {
    printf("30*27 = %d" , 30*27);
}
//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3() {
    float media =(5+8+12) /3.0 ;
    printf("Media de 5,8,12 e igual a: %.1f \n" , media );
}
//4. Faça um programa que leia e imprima um número inteiro.
void q4() {
    int num = 0;
    printf("digite valor inteiro:" );
       scanf("%d", &num );
          printf("valor digitado foi: %d  ", num );
}
//5. Faça um programa que leia dois números reais e os imprima.
void q5() {
    float num1,num2;
    printf("digite o primeiro numero:" );
    scanf("%f",&num1);
    printf("digite o segundo numero:" );
    scanf("%f",&num2);
    printf("numero digitado foi: %.2f e %.2f\n", num1, num2);
    
     
}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q6() {
    int num, antecessor, sucessor;
    printf("digite um numero:" );
    scanf("%d", &num);
    antecessor = num -1;
    sucessor = num + 1;
    printf("antecessor: %d\n", antecessor);
    printf("sucessor: %d\n", sucessor); 
}
//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q7 () {
    char nome[50], endereco[50], telefone[15];
    printf("nome: ");
    scanf(" %50[^\n]", nome );
    printf("endereço: ");
    scanf(" %50[^\n]", endereco );
    printf("telefone: ");
    scanf(" %15[^\n]", telefone );
    printf("%s\n %s\n %s\n",nome,endereco,telefone);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.

void q8() {
    int num1, num2, resultado;

    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    
    resultado = num1 - num2;
    
    printf("A subtração de %d e %d é: %d\n", num1, num2, resultado);

    
}

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.

void q9() {
    float numero, um_quarto;

    printf("Digite um número real: ");
    scanf("%f", &numero);

    um_quarto = numero / 4;

    printf("Um quarto de %.2f é: %.2f\n", numero, um_quarto);

}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10 () {
    
    float num1, num2, num3, media;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3;
    
    printf("A média aritmética dos números %.2f, %.2f e %.2f é: %.2f\n", num1, num2, num3, media);


}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
    void q11() {
    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;

    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    
    if (num2 != 0) {
        divisao = num1 / num2;
        printf("Divisão: %.2f\n", divisao);
    } else {
        printf("Divisão: Indefinida (divisão por zero)\n");
    }

    
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);


}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q11();
    return EXIT_SUCCESS;
}
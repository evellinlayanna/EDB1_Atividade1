// // Lista de Exercıcios - Revisao de C para Estruturas de Dados
// // Questao 5: Ponteiros e Manipulacao de Variaveis
// // Escreva um programa em C que declare duas variaveis inteiras, utilize
// // ponteiros para modificar os valores dessas variaveis e exiba os valores
// antes
// // e depois da modificacao.

// #include <stdio.h>

// int main() {

//   // Defiindo variaveis e os valores
//   int num1 = 10, num2 = 20;

//   printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);

//   // Definindo ponteiros
//   int *ponteiro1 = &num1;
//   int *ponteiro2 = &num2;

//   // Trocando os valores
//   *ponteiro1 = 20; // num1 = 20
//   *ponteiro2 = 10; // num2 = 10

//   printf("Depois da troca:  num1 = %d, num2 = %d\n", num1);

//   return 0;
// }
// // Lista de Exercıcios - Revisao de C para Estruturas de Dados
// // Questao 2: Funcoes e Passagem por Referencia
// // Escreva uma funcao em C que receba dois numeros inteiros como parametros
// por
// // referencia (usando ponteiros) e troque seus valores. Implemente um
// programa
// // que chame essa funcao e exiba os valores antes e depois da troca.

// #include <stdio.h>

// // Funcao que troca numeros inteiros
// // Defino duas variaveis inteiras (a e b) e uma variavel auxiliar (aux)
// tambem
// // inteira A variavel aux recebe o valor de a e b recebe o valor de aux As
// // variaveis com * indicam que sao ponteiros, os ponteiros sao variaveis que
// // armazenam enderecos de memoria Nessa funcao, a e b sao ponteiros, ou seja,
// // elas armazenam endereco de memoria de outras variaveis
// void troca(int *a, int *b) {
//   int aux = *a;
//   *a = *b;
//   *b = aux;
// }

// // Funcao principal recebe dois numeros inteiros
// int main(void) {
//   int num1 = 10, num2 = 20;

//   // Antes da troca ele mostra os valores de num1 e num2
//   printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);

//   // Chama a funcao troca e passa os enderecos de num1 e num2
//   // A funcao troca recebe os enderecos de num1 e num2, ou seja, eles sao
//   // ponteiros?
//   troca(&num1, &num2);

//   // Depois da troca ele mostra os valores de num1 e num2
//   printf("Depois da troca:  num1 = %d, num2 = %d\n", num1, num2);

//   return 0;
// }
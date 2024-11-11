// Lista de Exercıcios - Revisao de C para Estruturas de Dado
// Questao 6: Ponteiros e Alocacao Dinamica de Memoria
// Escreva um programa em C que aloque dinamicamente memoria para armazenar 5
// numeros inteiros, leia os numeros do usuario, calcule a soma e exiba o
// resultado. Nao se esqueca de liberar a memoria alocada ao final

#include <stdio.h>
// Biblioteca necessaria para usar a funcao malloc que aloca memoria dinamicamente
#include <stdlib.h>

int main() {

  // Declarando variaveis e ponteiros
  int *numeros;
  int soma = 0;

  // Alocando memoria para armazenar 5 numeros inteiros
  numeros = (int *)malloc(5 * sizeof(int));

  // Verifica se a alocacao de memoria foi bem sucedida
  if (numeros == NULL) {
    printf("Erro ao alocar memoria");
    return 1; // Retorna 1 para indicar erro
  }

  // Loop para ler os 5 numeros do vetor
  printf("Insira 5 numeros inteiros:\n");

  for (int i = 0; i < 5; i++) {
    // Armazena o valor lido na posicao i do vetor
    scanf("%d", &numeros[i]);
  }

  for (int i = 0; i < 5; i++) {
    // Adiciona o valor lido ao ponteiro soma
    soma += numeros[i];
  }

  // Exibe o resultado da soma
  printf("Soma dos numeros inseridos: %d\n", soma);

  // Libera a memoria alocada
  free(numeros);

  return 0;
}

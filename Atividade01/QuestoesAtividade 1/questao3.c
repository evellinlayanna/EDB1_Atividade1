// Lista de Exercıcios - Revisao de C para Estruturas de Dados
// Questao 3: Vetores em C
// Escreva um programa em C que leia 5 numeros inteiros em um vetor, calcule
// a soma de todos os elementos e exiba o resultado. Utilize funcoes

#include <stdio.h>

// Funcao que calcula a soma de todos os elementos de um vetor
int soma_vetor(int vetor[], int tamanho) {
  int soma = 0;
  for (int i = 0; i < tamanho; i++) {
    soma += vetor[i];
  }
  return soma;
}

// Funcao principal que recebe um vetor de inteiros e seu tamanho 5
// O tamanho do vetor eh passado como parametro para a funcao soma_vetor
int main() {
  int numeros[5];

  // Loop para ler os numeros do vetor
  printf("Insira 5 numeros inteiros:\n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &numeros[i]);
  }
  // Chama a funcao soma_vetor e passa o vetor numeros e seu tamanho 5 para somar os 5 elementos
  int soma = soma_vetor(numeros, 5);

  // Mostra o resultado da soma
  printf("A soma dos numeros inseridos eh: %d\n", soma);

  return 0;
}

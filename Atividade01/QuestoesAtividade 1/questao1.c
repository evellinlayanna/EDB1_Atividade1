// Lista de Exercıcios - Revisao de C para Estruturas de Dados
// Questao 1: Funcoes e Passagem por Valor
// Escreva uma funcao em C que receba dois numeros inteiros como parametros
// (passagem por valor) e troque seus valores dentro da funcao. Implemente um
// programa que chame essa funcao e exiba os valores antes e depois da
tentativa
// de troca

#include <stdio.h>

// Funcao que troca numeros inteiros
// As variaveis inteiras (a e b) sao passadas por valor, ou seja, elas sao
// copias A variavel auxiliar recebe o valor de a e b recebe o valor de aux
void troca(int a, int b) {
  int aux = a;
  a = b;
  b = aux;
}

// Funcao principal recebe dois numeros inteiros
int main(void) {
  int num1 = 30, num2 = 50;

  // Antes da troca ele mostra os valores de num1 e num2
  printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);

  // Chama a funcao troca e passa os enderecos de num1 e num2
  troca(num1, num2);

  // Depois da troca ele mostra os valores de num1 e num2
  printf("Depois da troca:  num1 = %d, num2 = %d\n", num1, num2);

  return 0;
}

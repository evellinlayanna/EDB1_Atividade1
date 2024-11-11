// Lista de Exercıcios - Revisao de C para Estruturas de Dado
// Questao 8: Estruturas e Ponteiros
// Escreva um programa em C que defina uma estrutura chamada Retangulo,
// contendo os campos largura e altura. O programa deve criar uma funcao
// que receba um ponteiro para essa estrutura e calcule a area do retangulo.

#include <stdio.h>

// Definindo a estrutura Retangulo
struct Retangulo {
  float largura;
  float altura;
};

// Funcao que calcula a area do retangulo
float calcular_area(struct Retangulo *retangulo) {
  return retangulo->largura * retangulo->altura;
}

int main() {

  // Declarando uma variavel do tipo Retangulo
  struct Retangulo retangulo_teste;

  printf("Insira a largura do retangulo: ");
  scanf("%f", &retangulo_teste.largura);

  printf("Insira a altura do retangulo: ");
  scanf("%f", &retangulo_teste.altura);

  // Chama a funcao calcular_area e passa o endereco da variavel
  retangulo_teste float areatotal = calcular_area(&retangulo_teste);
  printf("A area do retangulo eh: %.2f\n", areatotal);

  return 0;
}

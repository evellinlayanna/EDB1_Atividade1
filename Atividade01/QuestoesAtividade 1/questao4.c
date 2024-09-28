// // Lista de Exercıcios - Revisao de C para Estruturas de Dados
// // Questao 4: Matrizes em C
// // Escreva um programa em C que leia os elementos de uma matriz 3x3, calcule
// // a soma dos elementos da diagonal principal e exiba o resultado. Utilize
// // funcoes.

// #include <stdio.h>

// // Funcao que calcula a soma dos elementos da diagonal principal de uma
// matriz int soma_diagonal_principal_matriz(int matriz[3][3], int tamanho) {

//   int soma = 0;
//   for (int i = 0; i < tamanho; i++) {
//     soma += matriz[i][i]; // A diagonal principal é aquela onde i = j
//   }
//   return soma;
// }

// // Funcao principal que recebe uma matriz 3x3
// int main() {
//   int matriz[3][3];

//   // Loop para ler os elementos da matriz
//   printf("Insira os elementos da matriz 3x3:\n");
//   for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 3; j++) {
//       scanf("%d", &matriz[i][j]);
//     }
//   }

//   // Chama a funcao soma_diagonal_principal_matriz e passa a matriz e seu
//   // tamanho A variavel soma_diagonal recebe o valor da soma dos elementos da
//   // diagonal
//   int soma_diagonal = soma_diagonal_principal_matriz(matriz, 3);

//   // Retorna o valor da soma da diagonal principal
//   printf("Soma da diagonal principal: %d\n", soma_diagonal);

//   return 0;
// }
// // // Lista de Exercıcios - Revisao de C para Estruturas de Dado
// // Questao 7: Estruturas em C
// // Escreva um programa em C que defina uma estrutura chamada Pessoa,
// // contendo os campos nome, idade e altura. O programa deve ler os dados
// // de uma pessoa, armazena-los na estrutura e exibir as informacoes na tela.

// #include <stdio.h>
// #include <string.h> // Biblioteca necessaria para usar a funcao strcpy. Essa
// funcao copia o conteudo de uma string para outra

// // Definindo a estrutura Pessoa
// struct Pessoa {
//   char nome[50]; // Campo para armazenar o nome da pessoa
//   int idade;     // Campo para armazenar a idade da pessoa
//   float altura;  // Campo para armazenar a altura da pessoa
// };

// int main() {
//   struct Pessoa pessoa; // Declarando uma variavel do tipo Pessoa

//   // Lendo os dados da pessoa
//   printf("Insira o nome da pessoa: ");

//   // Armazena o nome da pessoa na variavel pessoa.nome
//   fgets(pessoa.nome, 50, stdin);

//   // Removendo o caractere de nova linha do fgets
//   pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';

//   printf("Insira a idade da pessoa: ");
//   scanf("%d", &pessoa.idade);

//   // Usar o ponto como separador decimal
//   printf("Insira a altura da pessoa: ");
//   scanf("%f", &pessoa.altura);

//   // Exibindo os dados da pessoa
//   printf("\nInformações Pessoais:\n");
//   printf("Nome: %s\n", pessoa.nome);
//   printf("Idade: %d\n", pessoa.idade);
//   printf("Altura: %.2f\n",
//          pessoa.altura); // %.2f para exibir apenas 2 casas decimais

//   return 0;
// }
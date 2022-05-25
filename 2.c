/*
Um parque de diversão está começando a investir em tecnologia e a realizar automatização de alguns brinquedos, por meio do uso de inteligência artificial e tecnologias de escâner, a fim de verificar a altura dos clientes, e definir se eles estão aptos a entrar ou não em um brinquedo, sem precisar utilizar réguas ou medidor físico. Você foi contratado para desenvolver um protótipo de algoritmo para realizar essa verificação.

Sendo assim, é necessário descrever a importância de fazer uma análise de um problema, aplicando as estruturas de repetição e o conceito na prática para verificar se três pessoas, medindo 1,73, 1,81 e 1,85 m podem entrar em um brinquedo que aceita somente maiores de 1,80 m. O algoritmo deve medir a altura das pessoas e efetuar uma avaliação, constatando se a altura é maior ou igual a 1,80 m, para possam entrar. Se menor do que 1,80 m, o programa apresenta a mensagem “Entrada Não Permitida”.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int tamanho;

  printf("Escolha o número que representa uma das alturas das três pessoas \n1 - PRIMEIRA PESSOA 1,73m \n2 - SEGUNDA PESSOA 1,81m \n3 - TERCEIRA PESSOA 1,85m \n");
  scanf("%d", &tamanho);

  if (tamanho == 1)
  {
    printf('Entrada no brinquedo proibida pois o tamanho da pessoa não é maior que 1.80m');
  }
  else if (tamanho == 2)
  {
    printf('Entrada no brinquedo permitida pois o tamanho da pessoa é maior que 1.80m');
  }
  else if (tamanho == 3)
  {
    printf('Entrada no brinquedo permitida pois o tamanho da pessoa é maior que 1.80m');
  }
  else
  {
    printf("Escolha uma opção válida");
  }

  return 0;
}
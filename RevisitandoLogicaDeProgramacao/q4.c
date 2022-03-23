// Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas sem utilizar variável auxiliar

#include <stdio.h>

int main(){

  int a, b;

  printf("Informe o valor de a: ");
  scanf("%d", &a);
  printf("Informe o valor de b: ");
  scanf("%d", &b);

  printf("Os valores de a e b foram invertido.\n");
  printf("O valor de a = %d e b = %d", b, a);

  return 0;
  
}
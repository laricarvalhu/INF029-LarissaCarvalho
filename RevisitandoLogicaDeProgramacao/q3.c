//Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas

#include <stdio.h>

int main(){

  int a, b, c;

  printf("Insira o valor de a: ");
  scanf("%d", &a);
  printf("Insira o valor de b: ");
  scanf("%d", &b);

  c = a; // a é armazenado na variável auxiliar c
  a = b; // b é armazenado em a
  b = c; // c é armazenado em b -> b = c = a

  printf("Os valores foram invertidos\n");
  printf("a = %d e b = %d", a, b);

  return 0;
  
}
// Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou menor de idade

#include <stdio.h>

int main(){

  int idade;
  printf("Informe sua idade: ");
  scanf("%d", &idade);

  if (idade < 0)
    printf("ERRO\n");
  else if (idade < 18)
    printf("Vocé é menor de idade\n");
  else
    printf("Você é maior de idade\n");
    
  return 0;
  
}
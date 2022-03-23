// Faça um programa que leia a idade de uma pessoa e informe se ela é de maior ou de menor. O programa deve repetir essa ação até que uma idade negativa seja informada.

#include <stdio.h>

int main(){

  int idade;
    
  do {
      
    printf("\nInforme sua idade: ");
    scanf("%d", &idade);

    if(idade >= 0){
      if (idade >= 18)
        printf("Você é maior de idade.\n");
      else
        printf("Você é menor de idade.\n");
    }else 
      printf("Idade inválida. Finalizando programa.");
    
    
  } while (idade >= 0);

  return 0;
}
// Faça um programa que verifique se um número é primo

#include <stdio.h>

int main(){

  int numPrimo; // entrada do usuário
  int numDivisores = 0; // variável contadora
  
  printf("\nInforme um número: ");
  scanf("%d", &numPrimo);
      
  for (int i = 1; i <= numPrimo; i++){
    if(numPrimo % i == 0)
      numDivisores++;
  }
  
  if (numDivisores == 2)
    printf("%d é um número primo", numPrimo);
  else
    printf("%d não é um número primo", numPrimo);
  
  return 0;
}


// variáveis contadoras precisam ser inicializadas com um valor, pois inicialmente elas estãos nulas.
  // para saber se um número é primo, ele precisa ser divisível apenas por dois números, 1 e ele mesmo.
  // número de divisores = 2
  // lógica: o usuário entrará com o número que será dividido por 1, 2, 3... até o valor do próprio número de entrada.
  // caso o resto da divisão seja igual a zero, foi efetuada uma divisão inteira e acrescentamos +1 no número de divisores do respectivo número
  // se numDivisores = 2, o num é primo, senão, não é primo
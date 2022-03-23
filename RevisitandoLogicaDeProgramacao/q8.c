// Faça um programa que calcula o fatorial de um número

#include <stdio.h>

int main(){

  int num, fat = 1;
  int c = num;

  printf("Informe um número: ");
  scanf("%d", &num);

  if(c == 0 || c == 1)
    fat = 1;
  
  while (c > 1){
    fat = fat * c;
    c = c - 1;
  }
  
  printf("%d! = %d", num, fat);
  
}

// lógica: fatorial de um número n = n * (n-1) * (n-2)
// 4! = 4 * 3 * 2 * 1
//
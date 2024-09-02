#include <stdio.h>

// Fazendo a multiplicacao de dois numeros
int main(void) {
  // Declarando as variaveis
  float num1, num2, multiplicacao;

  printf("Digite o primeiro numero:");
  scanf("%f", &num1);

  printf("Digite o segundo numero:");
  scanf("%f", &num2);

  // Calculo de multicacao
  multiplicacao = num1 * num2;

  // Saida do resultado
  printf("0 resultado e: %f\n", multiplicacao);
  ;
  return 0;
}
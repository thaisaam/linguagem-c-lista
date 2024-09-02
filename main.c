#include <stdio.h>

int main() {
  // Declarando as variaveis
  int numeros[5]; // Array de inteiros com 5 elementos
  int soma = 0;   // Variavel que recebe a soma dos inteiros
  int i;          // Indicador do for

  // Entrada de dados: Processando o array
  printf("Digite os 5 numeros do Array: \n");
  for (i = 0; i < 5; i++) {
    printf("numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  // Calculo dos elementos do Array
  for (i = 0; i < 5; i++) {
    soma += numeros[i];
  }

  // Exibindo o resultado
  printf("A soma dos numeros e: %d\n", soma);

  return 0;
}
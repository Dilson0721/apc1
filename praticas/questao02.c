#include <stdio.h>

int main() {
  int base, altura;
  float area;

  printf("Digite a base do triângulo (inteiro maior que 0): ");
  scanf("%d", &base);

  printf("Digite a altura do triângulo (inteiro maior que 0): ");
  scanf("%d", &altura);

  if (base > 0 && altura > 0) {
    
  area = (float)(base * altura) / 2;

    
  printf("A área do triângulo é: %.2f\n", area);
    
  } else {
    
  printf("Valores inválidos. Certifique-se de inserir inteiros maiores que 0.\n");
    }

    return 0;
}


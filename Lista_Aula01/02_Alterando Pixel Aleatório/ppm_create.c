#include <stdio.h>

// Função que imprime o pixel: se for a posição (x, y) escolhida, imprime a cor desejada
void set_pixel(int i, int j, int x, int y, int r, int g, int b) {
  if (i == y && j == x) {
    // Altera o pixel da posição (x, y) para a cor (r, g, b)
    printf("%d %d %d\n", r, g, b);
  } else {
    // Caso contrário, imprime preto
    printf("0 0 0\n");
  }
}

int main() {
  int width = 100;
  int height = 100;

  // Coordenadas do pixel a ser alterado
  int x = 10;  // Width
  int y = 20;  // Height

  // Verde
  int r = 0;
  int g = 255;
  int b = 0;

  // Cabeçalho do PPM
  printf("P3\n%d \t %d\n 255\n", width, height);

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      set_pixel(i, j, x, y, r, g, b);
    }
  }

  return 0;
}


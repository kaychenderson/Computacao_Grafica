#include <stdio.h>

int main() {
  int width = 100;
  int height = 100;

  // Parâmetros da letra T
  int altura_T = 15;
  int largura_T = 11;

  // Centro da imagem
  int centro_x = width / 2;
  int centro_y = height / 2;

  // Coordenadas da barra horizontal
  int inicio_horizontal = centro_x - largura_T / 2;
  int fim_horizontal = centro_x + largura_T / 2;

  // Coordenadas da barra vertical
  int inicio_vertical = centro_y - altura_T / 2;
  int fim_vertical = centro_y + altura_T / 2;

  // Cabeçalho do PPM
  printf("P3\n%d \t %d\n255\n", width, height);

  // Geração da imagem
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      // Condições para desenhar a letra T
      if (
        (i == inicio_vertical && j >= inicio_horizontal && j <= fim_horizontal) ||  // barra horizontal
        (j == centro_x && i >= inicio_vertical && i <= fim_vertical)                // barra vertical
      ) {
        printf("255 255 255\n"); // branco 
      } else {
        printf("0 0 0\n"); // fundo preto
      }
    }
  }

  return 0;
}

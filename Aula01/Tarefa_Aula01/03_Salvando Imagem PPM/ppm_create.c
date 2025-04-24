#include <stdio.h>
#include <stdlib.h>

// Função para salvar a imagem no formato PPM
void salvar_imagem_ppm(const char *nome_arq, int width, int height, int x, int y, int r, int g, int b) {
  FILE *arquivo = fopen(nome_arq, "w");
  if (arquivo == NULL) {
    printf("Erro ao criar o arquivo!\n");
    exit(1);
  }

  // Cabeçalho do PPM
  fprintf(arquivo, "P3\n%d \t %d\n 255\n", width, height);

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (i == y && j == x) {
        fprintf(arquivo, "%d %d %d\n", r, g, b);
      } else {
        fprintf(arquivo, "0 0 0\n");
      }
    }
  }

  fclose(arquivo);
}

int main() {
  int width = 100;
  int height = 100;

  int x = 30;
  int y = 40;

  int r = 0;
  int g = 0;
  int b = 255;

  // Chamada da função para salvar a imagem
  salvar_imagem_ppm("imagem.ppm", width, height, x, y, r, g, b);

  return 0;
}


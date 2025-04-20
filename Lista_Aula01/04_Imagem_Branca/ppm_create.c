#include <stdio.h>
#include <stdlib.h>

// Função que inicializa uma imagem totalmente branca e salva no arquivo
void imagem_branca(const char *nome_arq, int width, int height) {
  FILE *arquivo = fopen(nome_arq, "w");
  if (arquivo == NULL) {
    printf("Erro ao criar o arquivo!\n");
    exit(1);
  }

  // Cabeçalho do formato PPM
  fprintf(arquivo, "P3\n%d \t %d\n255\n", width, height);

  // Deixando todos os pixels brancos
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      fprintf(arquivo, "255 255 255\n");
    }
  }

  fclose(arquivo);
}

int main() {
  int height = 100;
  int width = 100;

  imagem_branca("imagem_branca.ppm", width, height);

  return 0;
}

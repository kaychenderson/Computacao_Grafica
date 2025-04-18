#include <stdio.h>

int main(){

  // dimensoes da imagem
  int width = 256;
  int height = 256;

  // Configurando o header do formato PPM
  printf("P3\n %d \t %d\n 255\n", width, height);

  for (int i = 0; i < height; i++){ 
    for (int j = 0; j < width; j++){
      if(i == height / 2 && j == width / 2){
        printf("%d \t %d \t %d \n", 255, 0, 0);
      } else {
        printf("%d \t %d \t %d \n", 0, 0, 0);
      }
    }
  }

  return 0;
}


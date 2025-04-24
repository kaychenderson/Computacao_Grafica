#include <stdio.h>

#define h 256
#define w 256

unsigned char img[h][w][3];
void setPixel( int x, int y, unsigned char r, unsigned char g, unsigned char b){
    img[x][y][0] = r;
    img[x][y][1] = g;
    img[x][y][2] = b;
}

void clearImg(){
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            for(int c = 0; c < 3; c++){
                img[i][j][c] = 255;
            }
        }
    }
}

void saveImg(){
    printf("P3\n %d \t %d\n 255\n", h, w);

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            for(int c = 0; c < 3; c++){
                printf("%d \t", img[i][j][c]);
            }
            printf("\n");
        }
    }
}

void drawLine(int x1, int y1, int x2, int y2, unsigned char r, unsigned char g, unsigned char b){
    for(float t = 0.0; t < 1; t = t + 0.0001){
        setPixel((int)(x2 - x1)*t + x1, (int)(y2- y1)*t + y1, r, g, b);
    }
}

int main(){
    clearImg();

    // setPixel((int) h/2, (int) w/2, 250, 0, 0);
    
    drawLine((int) h/2, (int) w/2, h-1, w-1, 255, 0, 0);

    saveImg();

    return 0;
}
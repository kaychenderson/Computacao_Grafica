#ifndef TGEOMETRICAS_H
#define TGEOMETRICAS_H

#include <math.h>
#include <stdio.h>

// Vetor entre dois pontos 2D
void vetor_entre_pontos2D(int ax, int ay, int bx, int by, int *vx, int *vy);

// Vetor entre dois pontos 3D
void vetor_entre_pontos3D(int ax, int ay, int az, int bx, int by, int bz, 
                         int *vx, int *vy, int *vz);

// Norma de vetor 
double norma_vetor2D(int vx, int vy);
double norma_vetor3D(int vx, int vy, int vz);

// Deslocar ponto com vetor
void deslocar_ponto2D(int px, int py, int vx, int vy, int *rx, int *ry);
void deslocar_ponto3D(int px, int py, int pz, int vx, int vy, int vz, 
                      int *rx, int *ry, int *rz);

// Soma e subtração de vetores
void soma_vetores2D(int v1x, int v1y, int v2x, int v2y, int *rx, int *ry);
void subtrai_vetores2D(int v1x, int v1y, int v2x, int v2y, int *rx, int *ry);
void soma_vetores3D(int v1x, int v1y, int v1z, int v2x, int v2y, int v2z,
                   int *rx, int *ry, int *rz);
void subtrai_vetores3D(int v1x, int v1y, int v1z, int v2x, int v2y, int v2z,
                      int *rx, int *ry, int *rz);

// Multiplicação de vetor por escalar
void multiplica_escalar2D(int vx, int vy, int escalar, int *rx, int *ry);
void multiplica_escalar3D(int vx, int vy, int vz, int escalar, 
                         int *rx, int *ry, int *rz);

// Normalização 
void normalizar_vetor2D(int vx, int vy, double *rx, double *ry);
void normalizar_vetor3D(int vx, int vy, int vz, double *rx, double *ry, double *rz);

// Produto interno 
int produto_interno2D(int v1x, int v1y, int v2x, int v2y);
int produto_interno3D(int v1x, int v1y, int v1z, int v2x, int v2y, int v2z);

// Produto vetorial
void produto_vetorial3D(int v1x, int v1y, int v1z, int v2x, int v2y, int v2z,
                       int *rx, int *ry, int *rz);

// Função de resolução dos exercícios
void resolver_exercicios();

#endif 
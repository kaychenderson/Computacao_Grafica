#include "TGeometricas.h"

void vetor_entre_pontos2D(int ax, int ay, int bx, int by, int *vx, int *vy) {
    *vx = bx - ax;
    *vy = by - ay;
}

void vetor_entre_pontos3D(int ax, int ay, int az, int bx, int by, int bz, 
                         int *vx, int *vy, int *vz) {
    *vx = bx - ax;
    *vy = by - ay;
    *vz = bz - az;
}

double norma_vetor2D(int vx, int vy) {
    return sqrt(vx * vx + vy * vy);
}

double norma_vetor3D(int vx, int vy, int vz) {
    return sqrt(vx * vx + vy * vy + vz * vz);
}

void deslocar_ponto2D(int px, int py, int vx, int vy, int *rx, int *ry) {
    *rx = px + vx;
    *ry = py + vy;
}

void deslocar_ponto3D(int px, int py, int pz, int vx, int vy, int vz, 
                     int *rx, int *ry, int *rz) {
    *rx = px + vx;
    *ry = py + vy;
    *rz = pz + vz;
}

void soma_vetores2D(int v1x, int v1y, int v2x, int v2y, int *rx, int *ry) {
    *rx = v1x + v2x;
    *ry = v1y + v2y;
}

void subtrai_vetores2D(int v1x, int v1y, int v2x, int v2y, int *rx, int *ry) {
    *rx = v1x - v2x;
    *ry = v1y - v2y;
}

void soma_vetores3D(int v1x, int v1y, int v1z, int v2x, int v2y, int v2z,
                   int *rx, int *ry, int *rz) {
    *rx = v1x + v2x;
    *ry = v1y + v2y;
    *rz = v1z + v2z;
}

void subtrai_vetores3D(int v1x, int v1y, int v1z, int v2x, int v2y, int v2z,
                      int *rx, int *ry, int *rz) {
    *rx = v1x - v2x;
    *ry = v1y - v2y;
    *rz = v1z - v2z;
}

void multiplica_escalar2D(int vx, int vy, int escalar, int *rx, int *ry) {
    *rx = vx * escalar;
    *ry = vy * escalar;
}

void multiplica_escalar3D(int vx, int vy, int vz, int escalar, 
                         int *rx, int *ry, int *rz) {
    *rx = vx * escalar;
    *ry = vy * escalar;
    *rz = vz * escalar;
}

void normalizar_vetor2D(int vx, int vy, double *rx, double *ry) {
    double norma = norma_vetor2D(vx, vy);
    *rx = vx / norma;
    *ry = vy / norma;
}

void normalizar_vetor3D(int vx, int vy, int vz, double *rx, double *ry, double *rz) {
    double norma = norma_vetor3D(vx, vy, vz);
    *rx = vx / norma;
    *ry = vy / norma;
    *rz = vz / norma;
}

int produto_interno2D(int v1x, int v1y, int v2x, int v2y) {
    return v1x * v2x + v1y * v2y;
}

int produto_interno3D(int v1x, int v1y, int v1z, int v2x, int v2y, int v2z) {
    return v1x * v2x + v1y * v2y + v1z * v2z;
}

void produto_vetorial3D(int v1x, int v1y, int v1z, int v2x, int v2y, int v2z,
                       int *rx, int *ry, int *rz) {
    *rx = v1y * v2z - v1z * v2y;
    *ry = v1z * v2x - v1x * v2z;
    *rz = v1x * v2y - v1y * v2x;
}

void resolver_exercicios() {
  printf("Exercicio: Vetor entre dois pontos\n");
  int v1x, v1y;
  vetor_entre_pontos2D(2, 4, 6, 2, &v1x, &v1y);
  printf("(2,4) e (6,2): (%d, %d)\n", v1x, v1y);

  int v2x, v2y;
  vetor_entre_pontos2D(6, 7, -1, -2, &v2x, &v2y);
  printf("(6,7) e (-1,-2): (%d, %d)\n", v2x, v2y);

  int v3x, v3y, v3z;
  vetor_entre_pontos3D(2, 2, 4, 1, 1, 1, &v3x, &v3y, &v3z);
  printf("(2,2,4) e (1,1,1): (%d, %d, %d)\n", v3x, v3y, v3z);

  int v4x, v4y, v4z;
  vetor_entre_pontos3D(-2, 4, -5, 5, 2, -5, &v4x, &v4y, &v4z);
  printf("(-2,4,-5) e (5,2,-5): (%d, %d, %d)\n\n", v4x, v4y, v4z);

  printf("Exercicio: Norma dos vetores\n");
  printf("Norma (2,-5): %.2f\n", norma_vetor2D(2, -5));
  printf("Norma (4,2): %.2f\n", norma_vetor2D(4, 2));
  printf("Norma (3,5,-6): %.2f\n", norma_vetor3D(3, 5, -6));
  printf("Norma (6,-2,1): %.2f\n\n", norma_vetor3D(6, -2, 1));

  printf("Exercicio: Deslocamento de ponto\n");
  int dx1, dy1;
  deslocar_ponto2D(2, -5, 2, 4, &dx1, &dy1);
  printf("(2,-5) + (2,4): (%d, %d)\n", dx1, dy1);

  int dx2, dy2, dz2;
  deslocar_ponto3D(3, 5, -6, -3, 2, -3, &dx2, &dy2, &dz2);
  printf("(3,5,-6) + (-3,2,-3): (%d, %d, %d)\n\n", dx2, dy2, dz2);

  printf("Exercicio: Soma e Subtracao\n");
  int sx1, sy1;
  soma_vetores2D(2, -5, 2, 4, &sx1, &sy1);
  printf("(2,-5) + (2,4): (%d, %d)\n", sx1, sy1);

  int subx1, suby1;
  subtrai_vetores2D(3, 2, 1, 7, &subx1, &suby1);
  printf("(3,2) - (1,7): (%d, %d)\n", subx1, suby1);

  int sx2, sy2, sz2;
  soma_vetores3D(3, 5, -6, -3, 2, -3, &sx2, &sy2, &sz2);
  printf("(3,5,-6) + (-3,2,-3): (%d, %d, %d)\n", sx2, sy2, sz2);

  int subx2, suby2, subz2;
  subtrai_vetores3D(5, 5, 1, 3, 1, 7, &subx2, &suby2, &subz2);
  printf("(5,5,1) - (3,1,7): (%d, %d, %d)\n\n", subx2, suby2, subz2);

  printf("Exercicio: Multiplicacao por escalar e Normalizacao de vetores\n");
  int mx1, my1;
  multiplica_escalar2D(2, 4, 3, &mx1, &my1);
  printf("(2,4) * 3: (%d, %d)\n", mx1, my1);

  int mx2, my2, mz2;
  multiplica_escalar3D(1, 7, 5, -5, &mx2, &my2, &mz2);
  printf("(1,7,5) * -5: (%d, %d, %d)\n", mx2, my2, mz2);

  double nx1, ny1;
  normalizar_vetor2D(12, 3, &nx1, &ny1);
  printf("Normalizar (12,3): (%.2f, %.2f)\n", nx1, ny1);

  double nx2, ny2, nz2;
  normalizar_vetor3D(-3, 4, -5, &nx2, &ny2, &nz2);
  printf("Normalizar (-3,4,-5): (%.2f, %.2f, %.2f)\n\n", nx2, ny2, nz2);

  printf("Exercicio: Produto interno e Vetores unitarios\n");
  printf("Produto interno (2,-4) . (5,3): %d\n", produto_interno2D(2, -4, 5, 3));
  printf("Produto interno (1,7,5) . (2,4,5): %d\n", produto_interno3D(1, 7, 5, 2, 4, 5));

  double ux1, uy1;
  normalizar_vetor2D(12, 3, &ux1, &uy1);
  printf("Unitario (12,3): (%.2f, %.2f)\n", ux1, uy1);
  double ux2, uy2, uz2;
  normalizar_vetor3D(-3, 4, -5, &ux2, &uy2, &uz2);
  printf("Unitario (-3,4,-5): (%.2f, %.2f, %.2f)\n\n", ux2, uy2, uz2);

  printf("Exercicio: Produto vetorial\n");
  int pvx1, pvy1, pvz1;
  produto_vetorial3D(2, -4, 0, 5, 3, 0, &pvx1, &pvy1, &pvz1);
  printf("Produto vetorial (2,-4,0) x (5,3,0): (%d, %d, %d)\n", pvx1, pvy1, pvz1);

  int pvx2, pvy2, pvz2;
  produto_vetorial3D(1, 7, 5, 2, 4, 5, &pvx2, &pvy2, &pvz2);
  printf("Produto vetorial (1,7,5) x (2,4,5): (%d, %d, %d)\n", pvx2, pvy2, pvz2);
}
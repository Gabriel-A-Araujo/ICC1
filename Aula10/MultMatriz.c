/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void popule(int n, int m, int mat[][m]);
void multiplique(int n1, int m1, int n2, int m2, int mat1[][m1], int mat2[][m2], int mat3[][m2]);

int main()
{
    int n1, m1, n2, m2;
    scanf("%d %d %d %d", &n1, &m1, &n2, &m2);
    
    int mat1[n1][m1], mat2[n2][m2], mat3[n1][m2];
    
    popule(n1, m1, mat1);
    popule(n2, m2, mat2);
    multiplique(n1, m1, n2, m2, mat1, mat2, mat3);
    
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < m2; j++) {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}

void popule(int n, int m, int mat[][m]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void multiplique(int n1, int m1, int n2, int m2, int mat1[][m1], int mat2[][m2], int mat3[][m2]) {
    int mult = 0; 
    
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < m2; j++) {
            for
            mat3[i][j] = (mat1[i][j]) * (mat2[j][i]);
        }
    }
}
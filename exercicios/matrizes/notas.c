#include <stdio.h>

int main(){
    int i, j, M, N;
    // Definindo numero de linhas M e colunas N (incluindo a ultima para media)
    M = 3; 
    N = 4; 
    float notas[M][N];
    
    // Primeiro loop para entrada de dados
    for(i = 0; i < M; i++){
        notas[i][N-1] = 0; // inicializando a coluna de medias em 0
        for(j = 0; j < N-1; j++){
            scanf("%f", &notas[i][j]);
            notas[i][N-1] = notas[i][N-1] + notas [i][j]; // acumulando as notas de cada coluna na ultima para posterior calculo da media
        }
    }
    
    // Loop para calculo da media na ultima coluna
    for(i = 0; i < M; i++){
        for(j = N-1; j < N; j++){
            notas[i][N-1] = notas[i][N-1] / (N-1);
        }
    }
    
    // Loop para print de todas as linhas e colunas
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("%3.2f ", notas[i][j]);
        }
        printf("\n");
    }
    return 0;
}
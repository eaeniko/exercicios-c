#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
void popularMatriz(int n, int m, int m[][]);
void escreverMatriz(int n, int m, int matriz[][]);
void main () {
	int M1[5][4];
	int M2[5][4];
	
	popularMatriz(5,4,M1);
	popularMatriz(5,4,M2);
	escrevaMatriz(5,4,M1);
	escrevaMatriz(5,4,M2);
	system("PAUSE");
}


void popularMatriz(int n, int m, int matriz[][]){
int linha, coluna;
for(linha=0; linha< n; linha++)
	for(coluna=0; coluna<m; coluna++){
		printf("M[%d][%d] =",linha,coluna);
		scanf("%d",&matriz[linha][coluna]);
	}
}
void escrevaMatriz(int n, int m, int matriz[][]){
	int linha,coluna;
for(linha=0; linha<= n; linha++)
	for(coluna=0; coluna <=m; coluna++){
	 	printf("\nMatriz[%d][%d] = %d",linha, coluna,Matriz[linha][coluna]);
 	}
}



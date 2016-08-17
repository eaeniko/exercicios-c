#include <stdio.h>
#include <stdlib.h>

int main () {
	int linha=0,coluna=0,Matriz[3][6];
   //trecho de codigo p/ popular matriz
 for(linha=0; linha <=2; linha++)
 	for(coluna=0; coluna <=5; coluna++) {
 		printf("\nMatriz[%d][%d] =", linha, coluna);
 		scanf("%d", &Matriz[linha][coluna]);
 	}
//exibir dados
 for(linha=0; linha<=2; linha++) 
 	for(coluna=0; coluna <=5; coluna++){
 		printf("\nMatriz[%d][%d] = %d",linha, coluna,Matriz[linha][coluna]);
	 }
	 
 system("PAUSE"); 
 }


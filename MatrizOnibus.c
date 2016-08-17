#include <stdio.h>
#include <stdlib.h>

int main () {
	int Matriz[11][4], Matriz[0][0]=-1, Matriz[0][1]=-1;
	int passagemQT, i,coluna;
	char passagem;
	do{
		printf("Gostaria de comprar uma passagem? [S/N] "); scanf("%s",&passagem);
		printf("Quantas passagens gostaria de comprar? "); 	scanf("%d",&passagemQT);	
	for(i=0; i<=10; i++)
		for(coluna=0; coluna<=3; coluna++){
			Matriz[i][coluna] =0;
		}
	for(i=0; i<=passagemQT; i++ ){
		printf("Em qual linha voce quer seu acento? ");		scanf("%d",&Matriz[i]);
		printf("Em qual coluna voce quer seu acento? ");	scanf("%d",&Matriz[coluna]);
	if((Matriz[i] == Matriz[0]) && (Matriz[coluna] == Matriz[0])) || ((Matriz[i] == Matriz[0]) && (Matriz[coluna] == Matriz[1])) 
		printf("O local que voce deseja já esta reservado para PDE");
	else if ((Matriz[i] == Matriz[2]) && (Matriz[coluna] == Matriz[0])) || ((Matriz[i] == Matriz[3]) && (Matriz[coluna] == Matriz[0]))
		printf("O local que voce deseja ja esta reservadop para idosos");
	else if (Matriz[i] == Matriz[])
	
	}	
Void VerificarAcento(int Matriz[][])

	} while(passagem<>'S'); 	
	system("PAUSE");
}

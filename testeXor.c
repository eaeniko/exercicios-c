//Operador Xor (Ou exclusivo) - (S1 == 1 xor S2 == 1) 

#include <stdio.h>
void main (){
	int S1, S2, resp;
	do {
		printf("Entre com o sexo do 1o.\n [1] = M \n [0] = F:\n"); scanf("%d", &S1);
	printf("\nEntre com o sexo do 2o.\n [1] = M\n [0] = F:\n"); scanf("%d", &S2);
		if ((S1 == 1 && (!S2 == 1)) || ((!S1 == 1) && S2 == 1))
			printf("O 1o. pode dancar com o 2o.\n\n==================\n\n");
		else
			printf("O 1o. nao pode dancar com o 2o.\n\n==============\n\n");
			printf("Deseja continuar? [S/N] : "); scanf("%d", &resp);
			printf("==========================");
	}
	while (resp == "S" );
return 0;	
}

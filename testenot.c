// Operador NOT - ! 
#include <stdio.h>
void main (){
	int valor;
	printf("\n Entre um valor inteiro positivo\n"); scanf("%d", &valor);
		if (!(valor >= 0))
			printf("Valor invalido");
		else
			printf("valor valido, voce informou %d\n",valor);
		
	return 0;
}

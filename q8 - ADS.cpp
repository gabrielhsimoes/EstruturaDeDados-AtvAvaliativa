//Gabriel Henrique - ADS 3° Periodo Noturno
//8° Questão

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int n, cont=0, op;
	
	do{
		printf("\nDigite um numero: ");
		scanf("%d", &n);
		
		if(n > 5){
			cont+= 1;
		}
		printf("\n\n");
		
		printf("Deseja continuar? \n");
		printf("1- Sim ou 2- Nao: ");
		scanf("%d", &op);
		
	}while(op == 1);
	
	printf("Quantidade de numeros maiores que 5: %d", cont);
}

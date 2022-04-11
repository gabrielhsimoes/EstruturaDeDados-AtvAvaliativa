//Gabriel Henrique - ADS 3° Periodo Noturno
//1° Questão

#include<stdio.h>
#include<stdlib.h>

main(){
	int op;
	float p, h, pesoIdeal=0; 
	
	do{
		
	printf("## CALCULO DO IMC - INDICE DE MASSA CORPORAL ##\n");
	printf("Digite o seu peso: ");
	scanf("%f", &p);
	
	printf("Digite a sua altura: ");
	scanf("%f", &h);
	
	pesoIdeal = p / (h * h);
	
	if(pesoIdeal > 30){
		printf("Obeso!");
	}
	else if(pesoIdeal > 25 && pesoIdeal < 30){
		printf("Acima do peso!");
	}
	else if(pesoIdeal > 18.5 && pesoIdeal < 25){
		printf("Peso Normal!");
	}
	else{
		printf("Abaixo do peso!");
	}
	
	printf("\nDeseja realizar o calculo novamente?\n");
	printf("1- Sim ou 2- Nao: ");
	scanf("%d", &op);
	
	}while(op == 1);
	
	printf("Programa Finalizado!");
	
}



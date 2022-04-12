//Gabriel Henrique - ADS 3° Periodo Noturno
//5° Questão

#include<stdio.h>
#include<stdlib.h>

main(){
	int dia=0;
	float metros=0, totalMetros=0, cmPorDia=0;
	
	do{
	
	cmPorDia = 20 - 11;
	metros = cmPorDia / 100;
	
	totalMetros = totalMetros + metros;
	
		dia = dia + 1;	
		
	}while(totalMetros <= 18);
	
	printf("Para a aranha chegar ao topo de 18 metros seria %d dias", dia);
}

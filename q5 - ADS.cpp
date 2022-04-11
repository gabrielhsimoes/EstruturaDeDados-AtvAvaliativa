//Gabriel Henrique - ADS 3° Periodo Noturno
//5° Questão

#include<stdio.h>
#include<stdlib.h>

main(){
	
	float escalaManha=20, desceNoite=11, cmPorDia=0, metros=0, totalDias;
	
	cmPorDia = escalaManha - desceNoite;
	
	metros = cmPorDia / 100;
	totalDias = metros * 200;
	
	printf("Para a aranha chegar ao topo de %.2f metros seria 200 dias", totalDias);
}

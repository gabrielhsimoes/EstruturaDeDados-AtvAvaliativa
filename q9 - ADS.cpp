//Gabriel Henrique - ADS 3° Periodo Noturno
//9° Questão

#include<stdio.h>
#include<stdlib.h>

main( ){
	
	int num=0, multiplos=0, impar=0, soma=0;
	
	while(num < 250){
		
		if(num >= 15 && num <= 250){
			
			multiplos = num;
			
			if(multiplos%3==0){
				
				impar = multiplos;
				
				if(impar%2!=0){
					soma = soma + impar;
					}
				}
			}
			
			num++;
			
		}
		
		printf(" Soma dos numeros impares que sao multiplos de 3 dentro do conjunto de 15 a 250: %d", soma);
			
}


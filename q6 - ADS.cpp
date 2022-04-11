//Gabriel Henrique - ADS 3° Periodo Noturno
//6° Questão

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int num, cont=0, cont2=0, cont3=0, cont4=0;
	
	do{
		printf("Digite um numero: ");
		scanf("%i", &num);
		
		if(num > 0 && num < 25){
			cont = cont + 1;
		}
		else if(num >= 26 && num < 50){
			cont2 = cont2 + 1;
		}
		else if(num >= 51 && num < 75){
			cont3 = cont3 + 1;
		}
		else if(num >= 76 && num < 100){
			cont4 = cont4 + 1;
		}
		
		
	}while(num > 0);
	
	printf("Quantidade de numeros digitados no intervalo de 0 a 25: %d\n", cont);
	printf("Quantidade de numeros digitados no intervalo de 26 a 50: %d\n", cont2);
	printf("Quantidade de numeros digitados no intervalo de 51 a 75: %d\n", cont3);
	printf("Quantidade de numeros digitados no intervalo de 76 a 100: %d", cont4);
}

//Gabriel Henrique - ADS 3° Periodo Noturno
//10° Questão
//Faça uma função que receba por parametro 2 Atividades(Parcial N1 e Institucional N1) - valendo 10 pontos cada
//Calcular e mostrar a media N1
//Uma função que receba por parametro 2 Atividades(Parcial N2(5,0), Atividades(5,0) e Institucional N2(10,0))
//Calcular e mostrar a media N2
//Ao final mostrar a media final junto com a n1 e n2 do aluno.

#include<stdio.h>
#include<stdlib.h>

float calcularMediaN1(float parcial, float inst){
	return (parcial + inst) /2;
}

float calcularMediaN2(float parcial, float atv, float inst){
	return (parcial + atv + inst) /2;
}

mostrarN1(float nota1){
	return printf("Sua N1 e: %.1f\n", nota1);
}

mostrarN2(float nota2){
	return printf("Sua N2 e: %.1f\n", nota2);
}

mostrarMedia(float media){
	return printf("Media Final: %.1f\n", media);
}


main(){
	
	float p1, p2, i1, i2, mediaN1=0, mediaN2=0, atv, mediaFinal=0;
	
	printf("\nDigite a nota da sua Parcial N1: ");
	scanf("%f", &p1);
	printf("Digite a nota da sua Institucional N1: ");
	scanf("%f", &i1);
	
	mediaN1 = calcularMediaN1(p1, i1);
	
	printf("\n\n");
	
	printf("Digite a nota da sua Parcial N2: ");
	scanf("%f", &p2);
	printf("Digite a nota das suas Atividades da N2: ");
	scanf("%f", &atv);
	printf("Digite a nota da sua Institucional N2: ");
	scanf("%f", &i2);
	
	mediaN2 = calcularMediaN2(p2, atv, i2);
	
	mediaFinal = (mediaN1 + mediaN2) /2;
	
	printf("\n\n");
	
	mostrarN1(mediaN1);
	mostrarN2(mediaN2);
	mostrarMedia(mediaFinal);
		
}











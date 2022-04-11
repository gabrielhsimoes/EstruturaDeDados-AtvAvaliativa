//Gabriel Henrique - ADS 3° Periodo Noturno
//3° Questão

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	int id;
	char nome[26], s[2];
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite o seu sexo, sendo M- Masculino e F- Feminino: ");
	scanf("%s", &s);
	
	printf("Digite sua idade: ");
	scanf("%d", &id);
	
	if(stricmp(s, "F")==0 && id < 25){
		printf("Nome: %s\n", nome);
		printf("ACEITA");
	}
	else{
		printf("Nome: %s\n", nome);
		printf("NAO ACEITA");
	}
}

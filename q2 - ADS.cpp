//Gabriel Henrique - ADS 3° Periodo Noturno
// 2° Questão

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	
	char sg[5];
	
	printf("Digite a sigla de um estado: ");
	scanf("%s", &sg);
	
	if(stricmp(sg, "AC")==0){
		printf("Acriano");
	}
	
	else if(stricmp(sg, "AL")==0){
		printf("Alagoense");
	}
	
	else if(stricmp(sg, "AM")==0){
		printf("Amazonense");
	}
	
	else if(stricmp(sg, "AP")==0){
		printf("Amapaense");
	}
	
	else if(stricmp(sg, "BA")==0){
		printf("Baiano");
	}
	
	else if(stricmp(sg, "CE")==0){
		printf("Cearense");
	}
	
	else if(stricmp(sg, "DF")==0){
		printf("Candango");
	}
	
	else if(stricmp(sg, "ES")==0){
		printf("Capixaba");
	}
	
	else if(stricmp(sg, "GO")==0){
		printf("Goiano");
	}
	
	else if(stricmp(sg, "MA")==0){
		printf("Maranhense");
	}
	
	else if(stricmp(sg, "MG")==0){
		printf("Mineiro");
	}
	
	else if(stricmp(sg, "MS")==0){
		printf("Mato Grossense do Sul");
	}
	
	else if(stricmp(sg, "MT")==0){
		printf("Mato Grossense");
	}
	
	else if(stricmp(sg, "PA")==0){
		printf("Paraense");
	}
	
	else if(stricmp(sg, "PB")==0){
		printf("Paraibano");
	}
	
	else if(stricmp(sg, "PE")==0){
		printf("Pernambucano");
	}
	
	else if(stricmp(sg, "PI")==0){
		printf("Piauiense");
	}
	
	else if(stricmp(sg, "PR")==0){
		printf("Paranaense");
	}
	
	else if(stricmp(sg, "RJ")==0){
		printf("Carioca");
	}
	
	else if(stricmp(sg, "RN")==0){
		printf("Potiguar");
	}
	
	else if(stricmp(sg, "RO")==0){
		printf("Rondoniano");
	}
	
	else if(stricmp(sg, "RR")==0){
		printf("Roraimense");
	}
	
	else if(stricmp(sg, "RS")==0){
		printf("Gaucho");
	}
	
	else if(stricmp(sg, "SC")==0){
		printf("Catarinense");
	}
	
	else if(stricmp(sg, "SE")==0){
		printf("Sergipano");
	}
	
	else if(stricmp(sg, "SP")==0){
		printf("Paulistano");
	}
	
	else if(stricmp(sg, "TO")==0){
		printf("Tocantinense");
	}
}

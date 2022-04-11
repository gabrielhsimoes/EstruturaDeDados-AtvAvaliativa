//Gabriel Henrique - ADS 3° Periodo Noturno
//4° Questão

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	char produtos[50][30];
	float valor[30], total=0, valorPagamento;
	int op, i, qtdP=0, escolha, compra, opcaoCompra;
	
	do{

	printf("---------------- SISTEMA DE CADASTRO E VENDA DE PRODUTOS ----------------\n");
	printf("Digite a opcao desejada:\n");
	printf("1- Cadastro de Produtos\n");
	printf("2- Venda de Produtos: ");
	scanf("%d", &op);
	
	if(op == 1){
		
		
		printf("###### BEM-VINDO ######\n\n");
		
		printf("Digite a quantidade de produtos que serao cadastrados: ");
		scanf("%d", &qtdP);
		
		qtdP = qtdP;
		
		for(i=0; i< qtdP; i++){
			
			printf("Digite o NOME do produto a ser cadastrado: \n");
			scanf("%s", &produtos[i]);
			
			printf("\nDigite o VALOR desse produto: \n");
			scanf("%f", &valor[i]);
				
		}
		printf("\n\n");
		
		printf("PRODUTOS CADASTRADOS COM SUCESSO!!");
//		for(i=0; i< qtdP; i++){
//		
//			printf("\nPRODUTO: %s | VALOR R$: %.2f ", produtos[i], valor[i]);
//		}
		
	}	
	
	else if(op == 2){
		
		printf("-------------------- SISTEMA DE COMPRAS --------------------\n\n");
		printf("Digite um numero para exibir a listagem de produtos");
		scanf("%d", &qtdP);
		
		qtdP = qtdP;

		do{
		
		for(i=0; i< qtdP; i++){
			printf("\n %d- PRODUTO: %s | VALOR R$: %.2f \n", i, produtos[i], valor[i]);
		}
				
		printf("\n\nQuais produtos deseja comprar? \n");
		printf("Digite de acordo com a POSICAO do produto: ");
		scanf("%d", &compra);
		
		printf("PRODUTO ESCOLHIDO: PRODUTO: %s | VALOR R$ %.2f\n", produtos[compra], valor[compra]);
		
		total = total + valor[compra];
		
		printf("\n\nDeseja adicionar mais algum produto em seu carrinho?\n");
		printf("1- Sim ou 2-Nao: ");
		scanf("%d", &opcaoCompra);
		}while(opcaoCompra == 1);
		
		printf("PRECO FINAL: %.2f\n", total);
		
		printf("\nDigite o valor para pagamento: ");
		scanf("%f", &valorPagamento);
		
		printf("TROCO: %.2f", valorPagamento - total);
		
		
	}
	
	printf("\n\n");
	
	printf("\nDeseja realizar uma outra operacao?\n");
	printf("1- Sim ou 2- Nao: ");
	scanf("%d", &escolha);
	
	}while(escolha == 1);
}

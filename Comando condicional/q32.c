#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Escrever um programa que leia o codigo do produto escolhido do cardápio de uma lan- ´
chonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execução somente ser  a calculado um pedido. O cardápio da lan- ´
chonete segue o padrao abaixo: ˜
Especificação	Código  Preço
Cachorro Quente 100 	1.20
Bauru Simples 	101 	1.30
Bauru com Ovo 	102 	1.50
Hamburguer 		103 	1.20
Cheeseburguer 	104 	1.70
Suco 			105 	2.20
Refrigerante    106 	1.00
 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	int codigo, quantidade;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o código:");
	printf("\n------------------------");
	printf("\n100 - Cachorro quente");
	printf("\n101 - Bauru simples");
	printf("\n102 - Bauru com ovo");
	printf("\n103 - Hamburguer");
	printf("\n104 - Cheeseburguer");
	printf("\n105 - Suco");
	printf("\n106 - Refrigerante");
	printf("\n------------------------\n");
	scanf("%d", &codigo);
	printf("Digite a quantidade:");
	scanf("%d", &quantidade);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Saida de dados */
	
	switch(codigo){
		
		case 100:
			
			printf("O preço a ser pago R$%.2f", quantidade * 1.20);
		
		break;
		
		case 101:
			
			printf("O preço a ser pago R$%.2f", quantidade * 1.30);
		
		break;
			
		case 102:
			
			printf("O preço a ser pago R$%.2f", quantidade * 1.50);
		
		break;

		case 103:
			
			printf("O preço a ser pago R$%.2f", quantidade * 1.20);
			
		break;
		
		case 104:
			
			printf("O preço a ser pago R$%.2f", quantidade * 1.70);
			
		break;
			
		case 105:
			
			printf("O preço a ser pago R$%.2f", quantidade * 2.20);
		
		break;
		
		case 106:
			
			printf("O preço a ser pago R$%.2f", quantidade * 1.00);
			
		break;
		
		default:
			
			printf("O código digitado é inválido");
		
		break;
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
   
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 

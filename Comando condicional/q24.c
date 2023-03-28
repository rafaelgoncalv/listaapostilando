#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#include <string.h> //Funções para manipular strings

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Fac¸a um programa em que o usuario entre com o valor e o estado destino do ´
produto e o programa retorne o prec¸o final do produto acrescido do imposto do estado
em que ele sera vendido. Se o estado digitado não for válido, mostrar uma mensagem ´
de erro.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	float preco, precofinal;
	int TAM;
	TAM = 3;
	char estado[TAM];
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor:");
	scanf("%f", &preco);
	printf("Digite o estado:");
	printf("============================");
	printf("\nMG - Minas gerais");
	printf("\nSP - São paulo");
	printf("\nRJ - Rio de janeiro");
	printf("\nMS - Mato grosso do sul");
	printf("\n============================\n");
	scanf(" %3[^\n]", estado);//O espaço antes do % dentro do scanf consome todos os espaços em branco (' '), tabs ('\x9'), avanco de linha ('\n') e retorno de cursor ('\r') que estiverem em sequência.

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if((estado[0] == 'm' && estado[1] == 'g') || (estado[0] == 'M' && estado[1] == 'G')){
		
			precofinal = preco + 0.07 * preco;
			
			printf("\nO preço final é R$%.2f", precofinal);
			
	}else{
		
		if((estado[0] == 's' && estado[1] == 'p') || (estado[0] == 'S' && estado[1] == 'P')){
			
			precofinal = preco + 0.12 * preco;
			
			printf("O preço final é R$%.2f", precofinal);
			
		}else{
			if((estado[0] == 'r' && estado[1] == 'j') || (estado[0] == 'R' && estado[1] == 'J')){
				
				precofinal = preco + 0.15 * preco;
			
				printf("O preço final é R$%.2f", precofinal);
				
			}else{
				
				if((estado[0] == 'm' && estado[1] == 's') || (estado[0] == 'M' && estado[1] == 'S')){

					precofinal = preco + 0.08 * preco;
					
					printf("O preço final é R$%.2f", precofinal);
					
				}else{
					
					printf("Erro");
				}
			}
		}
	}
	

	
	// Exibe mensagem na tela

	/* Fim */ 
	
	//system("PAUSE"); //Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 


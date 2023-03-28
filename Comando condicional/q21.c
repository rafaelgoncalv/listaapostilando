#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Escreva o menu de opcções abaixo. Leia a opção do usuário e execute a operação esco-
lhida. Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1- Soma de 2 n´umeros.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador n~ao pode ser zero).
Opção.

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	int a , b, opcao;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor de a:");
	scanf("%d", &a);
	printf("Digite o valor de b:");
	scanf("%d", &b);
	printf("Digite a operação desejada:");
	printf("\n===========================");
	printf("\n1 - Soma");
	printf("\n2 - Diferença");
	printf("\n3 - Produto");
	printf("\n4 - Divisão");
	printf("\n===========================\n");
	scanf("%d", &opcao);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	switch(opcao){
		
		case 1:
			
			printf("\n%d + %d = %d", a, b, a + b);
			
		break;
		
		case 2:
			
			if(a > b){
				
				printf("\n%d - %d = %d", a, b, a - b);
				
			}else{
				if(a < b){
					
					printf("%d - %d = %d", b, a, b - a);
					
				}else{
					
					printf("%d - %d = %d", a, b, a - b);
					
				}
			}
			
		break;
		
		case 3:
			
			printf("%d * %d = %d", a, b, a * b);
			
		break;
		
		case 4:
		
			if(b > 0){
				
				printf("%d / %d = %.2f", a, b, (float)a / b);
					
			}else{
				
				printf("Não é possível efetuar essa divisão!!!");
				
			}
		break;
		
		default: 
		
			printf("O número da opção digitado é inválido!!!");
			
		break;

	}
	
	// Exibe mensagem na tela

	/* Fim */ 
   
	//system("PAUSE"); //Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

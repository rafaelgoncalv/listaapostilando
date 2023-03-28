#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> //Funções matemáticas
#include <conio.h> //Função para a entrada e saída de programas que usam o console DOS
#include <locale.h> // Habilita o uso de acentuação em palavras


// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Fac¸a um programa que receba tres n ˆ umeros e mostre-os em ordem crescente.
 

*/

int main(){ // Função obrigatória

	/* Declaração de constantes ou variáveis */
	
	int n1, n2, n3;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite 1º valor:");
	scanf("%d", &n1);
	printf("Digite 2º valor:");
	scanf("%d", &n2);
	printf("Digite 3º valor:");
	scanf("%d", &n3);
	

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(n1 > n2 && n2 > n3){
		
		printf("\n%d", n3);
		printf("\n%d", n2);
		printf("\n%d", n1);	
		
	}else{
		
		if(n1 > n3 && n3 > n2){
			
			printf("\n%d", n2);
			printf("\n%d", n3);
			printf("\n%d", n1);
				
		}else{
			if(n2 > n1 && n1 > n3){
				
				printf("\n%d", n3);
				printf("\n%d", n1);
				printf("\n%d", n2);
					
			}else{
				
				if(n2 > n3 && n3 > n1){
					
					printf("\n%d", n1);
					printf("\n%d", n3);
					printf("\n%d", n2);
					
				}else{
					if(n3 > n1 && n1 > n2){
						
						printf("\n%d", n2);
						printf("\n%d", n1);
						printf("\n%d", n3);
						
					}else{
						if(n3 > n2 && n2 > n1){
							
							printf("\n%d", n1);
							printf("\n%d", n2);
							printf("\n%d", n3);
							
						}else{
							if(n1==n2 && n2==n3){
								
								printf("\n%d", n1);
								printf("\n%d", n2);
								printf("\n%d", n3);
							}
						}
					}
				}
			}
		}
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 

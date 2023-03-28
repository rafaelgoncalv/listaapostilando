#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Fac¸a um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
a seguir, verifique e mostra qual a classificac¸ao dessa pessoa. ˜
Altura 				Peso
				Ate 60 ´ Entre 60 e 90 (Inclusive) Acima de 90
Menor que 1,20     A 		D 							G
De 1,20 a 1,70     B 		E 							H
Maior que 1,70     C 		F 							I
 
 

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	float altura,peso;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
	printf("Digite a altura:");
	scanf("%f",&altura);
	printf("Digite o peso:");
	scanf("%f",&peso);
	
	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(altura<1.20){
		if(peso<60){
			
			printf("Classificação: A");
		}else{
			if(peso>=60 && peso<=90){
				
				printf("Classificação: D");
			}else{
				
				printf("Classificação: G");
			}
		}
		
	}else{
		if(altura>=1.20 && altura<=1.70){
			
			if(peso<60){
				
				printf("Classificação: B");
			}else{
				if(peso>=60 && peso<=90){
					
					printf("Classificação: E");
				}else{
					
					printf("Classificação: H");
				}
			}
			
			
		}else{
			
			if(altura>1.70){
				
				if(peso<60){
					
					printf("Classificação: C");
				}else{
					
					if(peso>=60 && peso<=90){
						
						printf("Classificação: F");
						
					}else{
						
						printf("Classificação: I");
					}
				}
				
			}else{
			}
		}
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

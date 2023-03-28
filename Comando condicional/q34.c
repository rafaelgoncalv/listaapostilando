#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

 Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a ´
tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.

NOTA 			CONCEITO (ATE 20 FALTAS) ´ CONCEITO (MAIS DE 20 FALTAS)
9.0 ate 10.0 ´		 A 							B
7.5 ate 8.9 ´ 		 B 							C
5.0 ate 7.4 ´ 		 C 							D
4.0 ate 4.9 ´ 		 D 							E
0.0 ate 3.9 ´ 		 E 							E 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	float nota;
	int faltas;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a nota:");
	scanf("%f", &nota);
	printf("Digite o número de faltas:");
	scanf("%d", &faltas);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(faltas <= 20){
		if(nota >= 9.0 && nota <= 10.0){
			
			printf("Conceito: A");
			
		}else{
			if(nota >= 7.5 && nota <= 8.9){
				
				printf("Conceito: B");
				
			}else{
				if(nota > 5.0 && nota <= 7.4){
					
					printf("Conceito: C");
					
				}else{
					if(nota >= 4.0 && nota <= 4.9){
						
						printf("Conceito: D");
					}else{
						
						printf("Conceito: E");
					}
				}
			}
		}
	}else{
		if(nota >= 9.0 && nota <= 10.0){
			
			printf("Conceito: B");
			
		}else{
			if(nota >= 7.5 && nota <= 8.9){
				
				printf("Conceito: C");
				
			}else{
				if(nota > 5.0 && nota <= 7.4){
					
					printf("Conceito: D");
					
				}else{
					if(nota >= 4.0 && nota <= 4.9){
						
						printf("Conceito: E");
					}else{
						
						printf("Conceito: E");
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

#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Leia uma data e determine se ela e v ´ alida. Ou seja, verifique se o m ´ es est ˆ a entre 1 e 12, ´
e se o dia existe naquele mes. Note que Fevereiro tem 29 dias em anos bissextos, e 28 ˆ
dias em anos nao bissextos. 
 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	int dia, mes, ano;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o dia:");
	scanf("%d", &dia);
	printf("Digite o mês:");
	scanf("%d", &mes);
	printf("Digite o ano:");
	scanf("%d", &ano);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if((ano % 400 == 0) && (ano % 4 == 0) && (ano % 100 == 0)){
		
		if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
			if(dia >= 1 && dia<= 31){
				
				printf("A data %d-%d-%d é válida", dia, mes, ano);
				
			}else{
				
				printf("O dia digitado é inválido");
			
			}
		}else{
			if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
				
				if(dia >= 1 && dia <= 30){
					
					printf("O dia %d-%d-%d é válida", dia, mes, ano);
					
				}else{
					
					printf("O dia digitado é inválido");
				
				}
			}else{
				if(mes == 2){
					if(dia >= 1 && dia <= 29){
						
						printf("A data %d-%d-%d é válida", dia, mes, ano);
						
					}else{
						
						printf("O dia digitado é inválido");
						
					}
					
				}else{
					
					printf("O mês digitado é inválido");
				
				}
			}
		}
	}else{

		if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
			if(dia >=1 && dia <= 31){
				
				printf("A data %d-%d-%d é válida", dia, mes, ano);
				
			}else{
				
				printf("O dia digitado é inválido");
			
			}
		}else{
			if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
				
				if(dia >= 1 && dia <= 30){
					
					printf("A data %d-%d-%d é válida", dia, mes, ano);
					
				}else{
					
					printf("O dia digitado é inválido");
				
				}
			}else{
				if(mes == 2){
					if(dia >= 1 && dia <= 28){
						
						printf("A data %d-%d-%d é válida", dia, mes, ano);
						
					}else{
						
						printf("O dia digitado é inválido");
						
					}
					
				}else{
					
					printf("O mês digitado é inválido");
				
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


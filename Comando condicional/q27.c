#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
Categoria Idade
Infantil A 5 a 7
Infantil B 8 a 10
Juvenil A 11 a 13
Juvenil B 14 a 17
Senior ˆ maiores de 18 anos

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	int idade;
	
	/* Fim */

	/* Entrada de dados */
	
	printf("Digite a idade do nadador:");
	scanf("%d", &idade);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Saida de dados */
	
	if(idade >= 5 && idade <= 7){
		
		printf("Categoria: Infantil A");
		
	}else{
		if(idade >= 8 && idade <= 10){
			
			printf("Categoria: Infantil B");
			
		}else{
			if(idade >= 11 && idade <= 13){
				
				printf("Categoria: Julvenil A");
			}else{
				if(idade >= 14 && idade <= 17){
					
					printf("Categoria: Juvenil B");
				}else{
					
					printf("Categoria: Senior");
				}
			}
		}
	}
	
	// Exibe mensagem na tela

	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 

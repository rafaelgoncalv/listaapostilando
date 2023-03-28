#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
 Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos.
 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	int n1, n2;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor de n1:");
	scanf("%d", &n1);
	printf("Digite o valor de n2:");
	scanf("%d", &n2);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(n1 > n2){
		
		printf("O maior número é n1 = %d",n1);
		printf("\nA diferença entre %d e %d é %d", n1, n2, n1-n2);
		
	}else{
			
		printf("O maior número é n2 = %d", n2);
		printf("\nA diferença entre %d e %d é %d", n2, n1, n2-n1);
			
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 


	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 

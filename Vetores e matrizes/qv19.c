#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define TAM 50

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 * i)%(i+ 1), sendo
i a posição do elemento no vetor. Em seguida imprima o vetor na tela.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int vetor[TAM], i;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	for(i = 0; i < TAM; i++){
		
		vetor[i] = (i + 5 * i)%(i + 1);
		
 	}

	// Solicita que o usuário que entre com algum dado qualquer
	
	/* Fim */ 

	/* Saida de dados */
	
	for(i = 0; i < TAM; i++){
		
		printf("\n%d", vetor[i]);
		
 	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

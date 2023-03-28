#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima ´
o vetor, o maior elemento e a posic¸ao que ele se encontra.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int vetor[TAM], i, maior, menor, posmaior, posmenor;
	
	/* Fim */

	/* Entrada de dados */
	
	for(i = 0;i < TAM; i++){
		
		printf("Digite o valor %d:",i + 1);
		scanf("%d",&vetor[i]);
		
	}

	// Solicita que o usuário que entre com algum dado qualquer
			
	//Encontrando o maior, menor no vetor e suas respectivas posições
	maior = vetor[0];
	posmaior = 0;
	menor = vetor[0];
	posmenor = 0;
	
	for(i = 1;i < TAM;i++){
			
		if(vetor[i] > maior){
				
			maior = vetor[i];
			posmaior = i;
				
		}
		
		if(vetor[i] < menor){
				
			menor = vetor[i];
			posmenor = i;
				
		}	
	}
	
	//Imprimindo o vetor após o seu preenchimento
	
	printf("\n");
	for(i = 0;i < TAM;i++){
	
		printf("%d ",vetor[i]);
		
	}

	/* Fim */ 

	/* Saida de dados */
	
	printf("\nO maior => vetor[%d] = %d", posmaior, maior);
	printf("\nO menor => vetor[%d] = %d", posmenor, menor);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
ser impresso o maior e o menor elemento do vetor.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int vetor[TAM], i, maior, menor;
	
	/* Fim */

	/* Entrada de dados */
	
	for(i = 0;i < TAM; i++){
		
		printf("Digite o valor %d:",i + 1);
		scanf("%d",&vetor[i]);
		
	}

	// Solicita que o usuário que entre com algum dado qualquer
		
	//Encontrando o maior valor
	
	maior = vetor[0];
	
	for(i = 1;i <TAM;i++){
	
	// i começa com 0 porque o valor da posição 0 já foi armazenada inicialmente na variável maior, assim a comparação pode começar com o valor da posição seguinte.
			
		if(vetor[i] > maior){
				
			maior = vetor[i];
				
		}	
	}
		
	//Encontrando o menor valor
	menor = vetor[0];
		
	for(i = 1;i < TAM;i++){
			
		if(vetor[i] < menor){
				
			menor = vetor[i];
				
		}	
	}
	
	//Imprimindo o vetor após seu preenchimento
	
	printf("\n");
	for(i = 0;i < TAM;i++){
	
		printf("%d ",vetor[i]);
		
	}

	/* Fim */ 

	/* Saida de dados */
	
	printf("\nO maior valor: %d", maior);
	printf("\nO menor valor: %d", menor);
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

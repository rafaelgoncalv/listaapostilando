#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
     Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos
que são primos e suas respectivas posições no vetor.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int vetor[TAM], i, div, qtdn, qtddiv;
	qtdn = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	printf("Preencha o vetor:\n\n");
	for(i = 0; i < TAM; i++){
		
		printf("Vetor[%d]:", i);
		scanf("%d",&vetor[i]);
		
	}
	// Solicita que o usuário que entre com algum dado qualquer
	
	printf("\nA posicao e o valor primo:\n");
	i = 0;
	while(qtdn < TAM){
		
		qtddiv = 0;
		
		//Contando os divisores do vetor na posição i 
		
		for(div = 1; div <= vetor[i]; div++){
		
			if(vetor[i] % div == 0){
				
				qtddiv++;
				
			}
		}
		
		/* Saida de dados */
		if(qtddiv == 2){//Testando se vetor na posição i é primo. Se for sua posição i e valores serão impressos na tela. Caso contrário nada irá acontecer.
			
			
			printf("\nVetor[%d] = %d", i, vetor[i]);
			
			qtdn++;//Contando a quantidade de vezes que o número primo apareceu no vetor
		}
		// Exibe mensagem na tela
		
		i++;
		
	}
	/* Fim */ 

	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

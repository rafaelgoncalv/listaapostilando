#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 tem no máximo 10 elementos, mas nem todos os elementos são
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int v[TAM], v1[TAM], v2[TAM], i, j, k;
	
	/* Fim */

	/* Entrada de dados */
	
	printf("Preencha o vetor v:\n\n");
	for(i = 0; i < TAM; i++){
		
		printf("V[%d]:", i);
		scanf("%d",&v[i]);
	}

	// Solicita que o usuário que entre com algum dado qualquer
	
	//Percorrendo o vetor v e copiando os valores ímpares para o vetor v1
	j = 0;
	k = TAM;
	for(i = 0; i < TAM; i++){
		
		if(v[i] % 2 == 1){
			
			v1[j] = v[i];
			j++;
			k--;//Diferença elementos do vetor v1 em relação ao vetor v
		}
	}
	
	printf("\nO vetor v1:\n");
	/* Saida de dados */
	
	for(i = 0; i < TAM - k; i++){
		
		printf("\nV1[%d] = %d", i, v1[i]);
	}
	
	// Exibe mensagem na tela
	
	//Percorrendo o vetor v e copiando os valores ímpares para o vetor v1
	j = 0;
	k = TAM;
	for(i = 0; i < TAM; i++){
		
		if(v[i] % 2 == 0){
			
			v2[j] = v[i];
			j++;
			k--;//Diferença elementos do vetor v2 em relação ao vetor v
		}
	}
	
	printf("\n\nO vetor v2:\n");
	/* Saida de dados */
	
	for(i = 0; i < TAM - k; i++){
		
		printf("\nV1[%d] = %d", i, v2[i]);
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim

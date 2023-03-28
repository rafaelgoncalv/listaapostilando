#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 6

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Faça um programa que leia um vetor de 15 posicões e o compacte, ou seja, elimine as
posiçõees com valor zero. Para isso, todos os elementos à frente do valor zero, devem ser
movidos uma posição para trás no vetor.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int vetor[TAM], i, j, k;
	
	/* Fim */

	/* Entrada de dados */
	
	printf("Preencha o vetor:\n\n");
	
	for(i = 0; i < TAM; i++){
		
		printf("Vetor[%d]:", i);
		scanf("%d",&vetor[i]);
		
	}

	// Solicita que o usuário que entre com algum dado qualquer
	
	/*
		Realizando uma varredura para encontrar a posição que tem valor igual a 0 e se assim acontecer deslocar o próximo da próxima posição diferente de 0 para essa posição repetindo
		este processo quantas vezes for necessário até que todo o vetor tenha sido percorrido
	*/
	
	//0,0,2,0,3,5
	j = 0;
	for(k = 0; k < TAM; k++){
		
		if(vetor[k] == 0){
		
			continue;
		
		}
			
		vetor[j] = vetor[k];//vetor[j] é o vetor pós copia e o vetor[i] é o vetor pós leitura
		//printf("\n%d", vetor[j]);
		j++;
			
	}

	/* Fim */ 

	/* Saida de dados */
	
	printf("\n\nO vetor sem os zeros:\n");
	
	for(i = 0; i < j; i++){
		
		printf("\nVetor[%d] = %d", i, vetor[i]);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	 
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim

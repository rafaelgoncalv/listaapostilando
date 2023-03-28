#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 6

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
na ordem inversa.
 
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int vetor[TAM], i, j, aux;
	/* Fim */

	/* Entrada de dados */
	
	for(i = 0;i < TAM; i++){
		
		printf("Digite um valor:");
		scanf("%d",&vetor[i]);
		
	}
	
	// Solicita que o usuário que entre com algum dado qualquer
	
	printf("\nO vetor original");
	
	for(i = 0;i < TAM; i++){
		
		printf("\n%d", vetor[i]);
		
	}
	
	/* O programa deve proceder da seguinte forma:
	
	Para números de elementos no vetor par:
	
	Entrada:
	6,5,4,3,2,1
	
	Trocas:
	
	(1)1,5,4,3,2,6
	(2)1,2,4,3,5,6
	(3)1,2,3,4,5,6
	
	Saída:
	1,2,3,4,5,6
	
	Para números de elementos no vetor ímpar:
	
	Entrada:
	
	7,6,5,4,3,2,1
	
	Trocas:
	
	(1)1,6,5,4,3,2,7
	(2)1,2,5,4,3,6,7
	(3)1,2,3,4,5,6,7
	
	Saída:
	
	1,2,3,4,5,6,7
	
	*/

	
	if((TAM - 1) % 2 == 1){//Testando se o resto da divisão é igual 1 ou a 0. Se for igual 1 este if será executado caso contrário cairá na condição estabelecida no else
		
		for(i = 0, j = TAM - 1;i < j; i++, j--){
			
			aux = vetor[i]; //Guarda uma cópia do valor armazenado no vetor na posição i
			/*
				--> Quando i = 0 => aux = 6
				--> Quando i = 1 => aux = 5
				--> Quando i = 2 => aux = 4
				--> Quando i = 3, ou seja, i > j irá sair automaticamente do laço
			*/
			
			vetor[i] = vetor[j]; // Troca o valor armazenado no vetor na posição i pelo o que está armazenado na posiçãao j
			/* 
			
				--> Quando i = 0, j = 5 => vetor[i] = 6, vetor[j] = 1 => vetor[i] = vetor[j] => vetor[i] = 1
				--> Quando i = 1, j = 4 => vetor[i] = 5, vetor[j] = 2 => vetor[i] = vetor[j] => vetor[i] = 2
				--> Quando i = 2, j = 3 => vetor[i] = 6, vetor[j] = 3 => vetor[i] = vetor[j] => vetor[i] = 3
				--> vetor[2]: 4 = vetor[3]:3 => vetor[2] = 3
				--> vetor[3]: 3 = vetor[2]:4 => vetor[3] = 4
	
			*/
			vetor[j] = aux; //No lugar do valor do vetor na posição j vamos armazenar o valor que copiamos do vetor na posição i inicialmente na variável auxiliar
			
			//Esses passos irão se repetir enquanto a condição que definimos no laço esteja sendo satisfeita
		}
				
	}else{
		
		/*1,2,3,4,5,6,7
		  | | | | | | |
		  0 1 2 3 4 5 6
		*/
		
		for(i = 0, j = TAM - 1; i < j + 1; i++, j--){
			
			aux = vetor[i]; 
			vetor[i] = vetor[j]; 
			vetor[j] = aux; 
		}
	}

	/* Fim */ 

	/* Saida de dados */
	
	printf("\nO vetor invertido");
	
	for(i = 0;i < TAM; i++){
		
		printf("\n%d", vetor[i]);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 6

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Crie um programa que lê 6 valores inteiros armazenando-os em um vetor, copie deste vetor apenas os valores pares para um segundo vetor e, em seguida, mostre na tela os valores lidos
na ordem inversa.
 
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int original[TAM], copia[TAM], i, j, qtde, dif, aux;
	//Inicializando a variável
	qtde = 0;
	j = 0;
	/* Fim */

	/* Entrada de dados */
	
	for(i = 0;i < TAM; i++){
		
		printf("Digite um valor:");
		scanf("%d",&original[i]);
		
	}
	
	// Solicita que o usuário que entre com algum dado qualquer
	
	printf("\nO vetor original:");
	
	for(i = 0;i < TAM; i++){
		
		printf("%d ", original[i]);
		
	}
	
	//Pegando os valores pares do vetor original e copiando para um outro vetor
	
	for(i = 0; i < TAM; i++){
		
		if(original[i] % 2 == 0){
			
			copia[j] = original[i];
			j++;
			qtde++;//quantidade de elementos do vetor copia
			
		}else{
			
		}
	}
	
	dif = TAM - qtde;

	printf("\nO vetor copia apenas com valores pares:");
	
	for(i = 0;i < TAM - dif; i++){
		
		printf("%d ", copia[i]);
		
	}
	
		/* O programa deve proceder da seguinte forma:
	
	Para números de elementos no vetor cópia par:
	
	Entrada:
	
	1,2,4,6,8,10
	
	Cópia dos pares:
	
	2,4,6,8,10
	
	Trocas:
	
	(1)10,4,6,8,2
	(2)10,8,6,4,2
	
	Saída:
	10,8,6,4,2
	
	Para números de elementos no vetor cópia ímpar:
	
	Entrada:
	
	2,4,6,8,10,12
	
	Cópia dos pares:
	
	2,4,6,8,10,12
	
	Trocas:

	(1)12,4,6,8,10,2
	(2)12,10,6,8,4,2
	(3)12,10,8,6,4,2
	
	Saída:
	
	12,10,8,6,4,2
	
	*/
	if((TAM - dif) % 2 == 1){//Testando se o resto da divisão é igual 1 ou a 0. Se for igual 1 este if será executado caso contrário cairá na condição estabelecida no else
		
		for(i = 0, j = TAM - dif - 1;i < j; i++, j--){
			
			aux = copia[i]; //Guarda uma cópia do valor armazenado no vetor na posição i
			
			copia[i] = copia[j]; // Troca o valor armazenado no vetor na posição i pelo o que está armazenado na posiçãao j

			copia[j] = aux; //No lugar do valor do vetor na posição j vamos armazenar o valor que copiamos do vetor na posição i inicialmente na variável auxiliar
			
			//Esses passos irão se repetir enquanto a condição que definimos no laço esteja sendo satisfeita
		}
	}else{
		
		for(i = 0, j = TAM - dif - 1;i < j + 1; i++, j--){
			
			aux = copia[i]; //Guarda uma cópia do valor armazenado no vetor na posição i
			
			copia[i] = copia[j]; // Troca o valor armazenado no vetor na posição i pelo o que está armazenado na posiçãao j

			copia[j] = aux; //No lugar do valor do vetor na posição j vamos armazenar o valor que copiamos do vetor na posição i inicialmente na variável auxiliar
			
			//Esses passos irão se repetir enquanto a condição que definimos no laço esteja sendo satisfeita
		}
	}

	/* Fim */ 

	/* Saida de dados */

	printf("\nO vetor copia invertido:");
	
	for(i = 0;i < TAM - dif; i++){
		
		printf("%d ", copia[i]);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

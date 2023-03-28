#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 6

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores ˆ
lidos na ordem inversa.
 
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int vetor[TAM], i, j, qtdp, aux;
	//Inicializando a variáve
	qtdp = 0;
	i = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	//Recebe o valor da posição 0
	printf("Digite o valor %d:", i + 1);
	scanf("%d",&vetor[0]);
	
	//Enquanto o valor digitado pelo usuário na posição 0 for ímpar ele vai pedir que usuário digite novamente o valor até que o valor digitado usuário seja par
	while(vetor[0] % 2 == 1){
		
		printf("Digite o valor %d:", i + 1);
		scanf("%d",&vetor[0]);
	}
	
	/*Para cada posição após i = 0 iremos verificar se o valor digitado e armazenado no vetor na posição i é par ou ímpar. Se ele for par
	vai ser perdido ao usuário que digite o valor da posição i seguinte. Caso contrário ele vai repetir a posição i novamente
	e pedir que o usuário digite novamente um valor para essa posição
	*/
	
	i = 1;
	j = 1;
	
	while(qtdp < TAM - 1){
		
		printf("Digite o valor %d:", j + 1);
		scanf("%d",&vetor[j]);	
			
		while(vetor[i] % 2 == 1){
				
			printf("Digite o valor %d:", i + 1);
			scanf("%d",&vetor[i]);
			
		}		
	
		if(vetor[i] % 2 == 0){
					
			qtdp++;//quantidade de valores pares digitados pelo usuário
			i++;
		}
		
		j++;
	}
	
	// Solicita que o usuário que entre com algum dado qualquer
	
	printf("\nO vetor original:");
	
	for(i = 0;i < TAM; i++){
		
		printf("%d ", vetor[i]);
		
	}
	
	//Invertendo os valores do vetor preenchido

	if((TAM - 1) % 2 == 1){//Testando se o resto da divisão é igual 1 ou a 0. Se for igual 1 este if será executado caso contrário cairá na condição estabelecida no else
		
		for(i = 0, j = TAM - 1;i < j; i++, j--){
			
			aux = vetor[i]; //Guarda uma cópia do valor armazenado no vetor na posição i
			
			vetor[i] = vetor[j]; // Troca o valor armazenado no vetor na posição i pelo o que está armazenado na posiçãao j

			vetor[j] = aux; //No lugar do valor do vetor na posição j vamos armazenar o valor que copiamos do vetor na posição i inicialmente na variável auxiliar
			
			//Esses passos irão se repetir enquanto a condição que definimos no laço esteja sendo satisfeita
		}
	}/*else{
		
		for(i = 0, j = TAM - 1;i < j + 1; i++, j--){
			
			aux = vetor[i]; //Guarda uma cópia do valor armazenado no vetor na posição i
			
			vetor[i] = vetor[j]; // Troca o valor armazenado no vetor na posição i pelo o que está armazenado na posiçãao j

			vetor[j] = aux; //No lugar do valor do vetor na posição j vamos armazenar o valor que copiamos do vetor na posição i inicialmente na variável auxiliar
			
			//Esses passos irão se repetir enquanto a condição que definimos no laço esteja sendo satisfeita
		}
	}*/
	
	
	/* Fim */ 

	/* Saída de dados */
	
	printf("\nO vetor invertido:");
	
	for(i = 0;i < TAM; i++){
		
		printf("%d ", vetor[i]);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

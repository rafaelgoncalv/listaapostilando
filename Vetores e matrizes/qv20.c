#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um
vetor com 10 posições. Preencha um segundo vetor apenas com os números ímpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int vetor[TAM], copia[TAM], i, j, k, z, qtdv;
	
	/* Fim */

	/* Entrada de dados */
	
	i = 0;
	printf("Digite o vetor[%d]:", i);
	scanf("%d",&vetor[i]);
	
	while(vetor[i] < 0 || vetor[i] > 50){
		
		printf("Digite o vetor[%d]:", i);
		scanf("%d",&vetor[i]);
		
	}
	
	i = 1;
	while(i < TAM){
		
		printf("Digite o vetor[%d]:", i);
		scanf("%d",&vetor[i]);
		
		while(vetor[i] < 0 || vetor[i] > 50){
	
			printf("Digite o vetor[%d]:", i);
			scanf("%d",&vetor[i]);
		}
		
		i++;
	}

	// Solicita que o usuário que entre com algum dado qualquer
	
	j = 0;
	k = 0;//conta a quantidade valores do vetor que eu imprimir
	printf("\nO vetor original:\n");
	for(i = 0; i < TAM; i++){
		
		qtdv = 0;//quantidade de vezes que vai imprimir o elemento por linha
		while(qtdv != 2 && k != TAM){
			
			printf("%d ", vetor[j]);
			
			qtdv++;
			k++;
			j++;	
		}
		printf("\n");
	}
	
	//Copiando os valores do vetor em um segundo vetor
	
	j = 0;
	k = TAM;
	for(i = 0; i < TAM; i++){
		
		if(vetor[i] % 2 == 1){
			
			copia[j] = vetor[i];
			
			j++;
			k--;/*Nesta parte eu estou usando a variável k para encontrar a diferença da quantidade de valores do vetor original em relação 
			ao vetor copia que guarda apenas os elementos ímpares.
			
			Se todos os elementos do vetor original forem ímpares então a diferença entre e o vetor copia vai ser zero
			*/
		}
	}

	/* Fim */ 

	/* Saida de dados */
	
	//Como k já foi usado para uma finalidade eu tive que criar uma nova variável para exercer o papel
	j = 0;
	z = 0;//conta a quantidade valores do vetor que eu imprimir
	
	printf("\nO vetor com apenas impares:\n");
	for(i = 0; i < TAM - k; i++){
		
		qtdv = 0;//quantidade de vezes que vai imprimir o elemento por linha
		while(qtdv != 2 && z != TAM - k){
			
			printf("%d ", copia[j]);
			
			qtdv++;
			z++;
			j++;
			
		}
		printf("\n");
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	  
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */

   } // Fim 


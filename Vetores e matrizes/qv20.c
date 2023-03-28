#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Escreva um programa que leia n�meros inteiros no intervalo [0,50] e os armazene em um
vetor com 10 posi��es. Preencha um segundo vetor apenas com os n�meros �mpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
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

	// Solicita que o usu�rio que entre com algum dado qualquer
	
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
			k--;/*Nesta parte eu estou usando a vari�vel k para encontrar a diferen�a da quantidade de valores do vetor original em rela��o 
			ao vetor copia que guarda apenas os elementos �mpares.
			
			Se todos os elementos do vetor original forem �mpares ent�o a diferen�a entre e o vetor copia vai ser zero
			*/
		}
	}

	/* Fim */ 

	/* Saida de dados */
	
	//Como k j� foi usado para uma finalidade eu tive que criar uma nova vari�vel para exercer o papel
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
	  
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */

   } // Fim 


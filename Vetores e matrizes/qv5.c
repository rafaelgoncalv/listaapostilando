#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
	Leia um vetor de 10 posi��es. Contar e escrever quantos valores pares ele possui.
 
*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	int vetor[TAM], i, qtdp, qtdi;
	//qtdp - quantidade de pares e qtdi - quantidade de �mpares
	//Inicializando  a vari�vel
	qtdp = 0;
	qtdi = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	//Preenchendo o vetor de tamanho TAM
	for(i = 0;i < TAM;i++){
		
		printf("Digite um valor:");
		scanf("%d",&vetor[i]);
		
		if(vetor[i] % 2 == 0){
			
			qtdp++;
			
		}else{
			
			qtdi++;
			
		}
	}

	// Solicita que o usu�rio que entre com algum dado qualquer
	

	/* Saida de dados */
	
	//Imprimindo os elementos do vetor
	printf("\n");
	for(i = 0;i < TAM;i++){
		
		printf("%d ",vetor[i]);
	}
	
	printf("\nA quantidade de pares: %d", qtdp);
	printf("\nA quantidade de �mpares: %d", qtdi);

	// Exibe mensagem na tela
   
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

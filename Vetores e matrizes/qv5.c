#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
	Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
 
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	int vetor[TAM], i, qtdp, qtdi;
	//qtdp - quantidade de pares e qtdi - quantidade de ímpares
	//Inicializando  a variável
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

	// Solicita que o usuário que entre com algum dado qualquer
	

	/* Saida de dados */
	
	//Imprimindo os elementos do vetor
	printf("\n");
	for(i = 0;i < TAM;i++){
		
		printf("%d ",vetor[i]);
	}
	
	printf("\nA quantidade de pares: %d", qtdp);
	printf("\nA quantidade de ímpares: %d", qtdi);

	// Exibe mensagem na tela
   
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> //Funções matemáticas
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Ler um numero inteiro. Se o n ´ umero lido for negativo, escreva a mensagem número inválido
inválido”. Se o número for positivo, calcular o logaritmo deste número.
 

*/

int main(){ // Função obrigatória

	/* Declaração de constantes ou variáveis */
	
	int num;
	float logaritmo;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite um número inteiro positivo qualquer:");
	scanf("%d", &num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(num > 0){
		
		logaritmo = log10(num);
		
		printf("O logaritmo de %d é %.2f", num, logaritmo);
		
	}else{
		
		printf("O número digitado é inválido!!!");
		
	}
	
	// Exibe mensagem na tela

	/* Fim */
	  
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 

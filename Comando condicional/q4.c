#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> //Funções matemáticas
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado ´
• A raiz quadrada do número digitado
 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	int num, potencia;
	float raiz;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite um número inteiro qualquer:");
	scanf("%d", &num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(num > 0){
		
		//Cálculo matemático
		raiz = sqrt(num);
		potencia = pow(num,2);
		
		printf("A raiz de %d é %f", num, raiz);
		printf("\n%d ao quaadrado é %d", num, potencia);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 


	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 

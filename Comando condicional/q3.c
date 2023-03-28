#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> //Funções matemáticas
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
	
	Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contr ´ ario, ´
imprima o numero ao quadrado. 
 

*/

int main(){ // Função obrigatória

	/* Declaração de constantes ou variáveis */
	
	float num, raiz, potencia;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite um número qualquer:");
	scanf("%f", &num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(num > 0){
		
		//Cálculo matemático
		raiz = sqrt(num);
		printf("A raiz de %f é %f", num, raiz);
		
	}else{
		if(num < 0){
			
			//Cálculo matemático
			potencia = pow(num,2);
			
			printf("%f ao quadrado é %f", num, potencia);
		}
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 


	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 

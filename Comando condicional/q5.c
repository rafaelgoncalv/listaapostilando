#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	 Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou
�mpar

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int num;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite um n�mero inteiro qualquer:");
	scanf("%d", &num);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */

	/* Saida de dados */
	
	if(num % 2 == 0){
		
		printf("%d � par", num);
		
	}else{
		
		printf("%d � �mpar", num);
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
 
	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 


	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da execu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

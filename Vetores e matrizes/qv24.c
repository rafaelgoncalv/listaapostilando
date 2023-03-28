#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Fac�a um programa que leia dez conjuntos de dois valores, o primeiro representando o
numero do aluno e o segundo representando a sua altura em metros. Encontre o aluno �
mais baixo e o mais alto. Mostre o numero do aluno mais baixo e do mais alto, juntamente �
com suas alturas.


*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	int naluno[TAM], i, nbaixo, nalto;
	float altura[TAM], alturabaixo, alturaalto;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	printf("--------------------------------\n");
	printf("Cadastrando dados dos estudantes\n");
	printf("--------------------------------\n\n");
	
	for(i = 0; i < TAM; i++){
		
		printf("Digite o n�mero do aluno %d:", i + 1);
		scanf("%d",&naluno[i]);
		
		printf("Digite a altura:");
		scanf("%f",&altura[i]);;
	}
	
	// Solicita que o usu�rio que entre com algum dado qualquer
	
	//Encontrando o aluno mais baixo, aluno mais alto e a suas respectivas alturas
	
	nbaixo = naluno[0];
	alturabaixo = altura[0];//Altura do mais baixo
	nalto = naluno[0];
	alturaalto = altura[0];//Altura do mais alto
	
	for(i = 1; i < TAM - 1; i++){
		
		if(altura[i] > alturaalto){
			
			alturaalto = altura[i];
			nalto = naluno[i];
			
		}
		
		if(altura[i] < alturabaixo){
			
			alturabaixo = altura[i];
			nbaixo = naluno[i];
			
		}
	}

	/* Fim */ 

	/* Saida de dados */
	
	printf("\nAluno mais baixo:\nN�mero do aluno = %d\nA altura = %.2f metros\n\n", nbaixo, alturabaixo);
	printf("\nAluno mais alto:\nN�mero do aluno = %d\nA altura = %.2f metros\n\n", nalto, alturaalto);
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 


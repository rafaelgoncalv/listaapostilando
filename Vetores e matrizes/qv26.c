#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <math.h> //Fun��es matem�ticas
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

  Fa�a um programa que calcule o desvio padrao de um vetor v contendo n = 10 n�meros, �
onde m e a media do vetor.

*/ 


int main(){// Fun��o obrigat�ria 
  
	/* Declara��o de constantes ou vari�veis */
  
  int v[TAM], i, n, soma;
  n = 10;
  soma = 0;
  float m, somatorio, desviop;
  somatorio = 0.0;
	/* Fim */

	/* Entrada de dados */

  printf("Preencha o vetor a seguir\n\n");
  for(i = 0; i < TAM; i++){

    printf("V[%d]:", i);
    scanf("%d",&v[i]);
  }

	// Solicita que o usu�rio que entre com algum dado qualquer

  for(i = 0; i < TAM; i++){

    soma = soma + v[i];
    
  }

  //Encontrando a m�dia do vetor

  m = 1.0 * soma/n;

  //Somat�rio do (vetor[i] - m)^2 de i at� n
  
  for(i = 0; i < TAM; i++){

    somatorio = somatorio + pow((v[i] - m),2);
    
  }

	/* Fim */ 

	/* C�lculos matem�ticos */

  //Desvio padr�o de um vetor

  desviop = sqrt(somatorio/(n - 1));
  
	/* Saida de dados */

  printf("\nO desvio padrao do vetor eh %.2f", desviop);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	return 0; 

  } // Fim

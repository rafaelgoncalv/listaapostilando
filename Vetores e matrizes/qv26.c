#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> //Funções matemáticas
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

  Faça um programa que calcule o desvio padrao de um vetor v contendo n = 10 números, ´
onde m e a media do vetor.

*/ 


int main(){// Função obrigatória 
  
	/* Declaração de constantes ou variáveis */
  
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

	// Solicita que o usuário que entre com algum dado qualquer

  for(i = 0; i < TAM; i++){

    soma = soma + v[i];
    
  }

  //Encontrando a média do vetor

  m = 1.0 * soma/n;

  //Somatório do (vetor[i] - m)^2 de i até n
  
  for(i = 0; i < TAM; i++){

    somatorio = somatorio + pow((v[i] - m),2);
    
  }

	/* Fim */ 

	/* Cálculos matemáticos */

  //Desvio padrão de um vetor

  desviop = sqrt(somatorio/(n - 1));
  
	/* Saida de dados */

  printf("\nO desvio padrao do vetor eh %.2f", desviop);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	return 0; 

  } // Fim

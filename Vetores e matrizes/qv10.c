#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#define TAM 15

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Fa�a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	int i , j, qtdn;
	float notas[TAM], soma, media;
	//Inicializando a vari�vel
	i = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a nota do aluno %d:", i + 1);
	scanf("%f",&notas[0]);
	
	while(notas[0] < 0 || notas[0] > 10){

		printf("Digite a nota do aluno %d:", i + 1);
		scanf("%f",&notas[0]);
	}
	
	qtdn = 1;
	soma = notas[0];
	i = 1;
	j = 1;
	while(qtdn < TAM ){
	
		printf("Digite a nota do aluno %d:", j + 1);
		scanf("%f",&notas[j]);
		
		while(notas[i] < 0 || notas[i] > 10){
	
			printf("Digite a nota do aluno %d:", i + 1);
			scanf("%f",&notas[i]);
		}
		
		if(notas[i] >= 0 && notas[i] <= 10){
			
			qtdn++;
			i++;
		}
		j++;
	}
	
	for(i = 1; i < qtdn + 1; i++){
		
		soma = soma + notas[i];
		
	}
	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* C�lculos matem�ticos */
	
	media = soma/qtdn;

	/* Saida de dados */
	printf("\n%.2f",soma);
	printf("\n%d",qtdn);
	printf("\n-------------------------------");
	printf("\n		A m�dia geral          ");
	printf("\n-------------------------------");
	printf("\nA m�dia = %.2f pontos", media);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

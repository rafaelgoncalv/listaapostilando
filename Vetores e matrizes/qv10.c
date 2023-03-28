#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define TAM 15

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista
    
    Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int i , j, qtdn;
	float notas[TAM], soma, media;
	//Inicializando a variável
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
	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */
	
	media = soma/qtdn;

	/* Saida de dados */
	printf("\n%.2f",soma);
	printf("\n%d",qtdn);
	printf("\n-------------------------------");
	printf("\n		A média geral          ");
	printf("\n-------------------------------");
	printf("\nA média = %.2f pontos", media);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

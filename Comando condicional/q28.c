#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> //Funções matemáticas
#include <conio.h> //Função para a entrada e saída de programas que usam o console DOS
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

Fac¸a um programa que leia tres n ˆ umeros inteiros positivos e efetue o c ´ alculo de uma das ´
seguintes medias de acordo com um valor num ´ erico digitado pelo usu ´ ario: ´
3
(a) Geometrica: ´
raiz cúbica de x * y * z
(b) Ponderada: x+2*y+3*z/6
(c) Harmonica: ˆ
1/1/x + 1/y + 1/z
(d) Aritmetica: ´
x+y+z/3

*/

int main(){ // Função obrigatória

	/* Declaração de constantes ou variáveis */
	
	float x, y, z, media;
	char tipo;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor de x:");
	scanf("%f", &x);
	printf("Digite o valor de y:");
	scanf("%f", &y);
	printf("Digite o valor de z:");
	scanf("%f", &z);
	printf("Digite o tipo de media desejada:");
	printf("\n============================");
	printf("\na - Média geométrica");
	printf("\nb - Média ponderada");
	printf("\nc - Média harmônica");
	printf("\nd - Média aritmética");
	printf("\n============================\n");
	scanf(" %c", &tipo);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	switch(tipo){
		
		case 'a':
			
			media = pow((x+y+z),1.0/3.0);
			
			printf("\nA média geométrica é %.2f", media);
			
		break;
		
		case 'b':
			
			media = (x + 2*y + 3*z)/6;
			
			printf("\nA média ponderada é %.2f", media);
			
		break;
		
		case 'c':
			
			media = 1/(1/x + 1/y + 1/z);
			
			printf("\nA média harmônica é %.2f", media);
			
		break;
		
		case 'd':
			
			media = (x+y+z)/3;
			
			printf("\nA média aritmética é %.2f", media);
			
		break;
		
		default:
			
			printf("\nO tipo digitado é inválido!!!");
			
		break;
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("PAUSE"); // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da execução
		    do programa não fechar instantaneamente */
	


   } // Fim 

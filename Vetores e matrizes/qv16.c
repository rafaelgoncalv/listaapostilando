#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#define TAM 5

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Fa�a um programa que leia um vetor de 5 posi��es para n�meros reais e, depois, um
c�digo inteiro. Se o c�digo for zero, finalize o programa; se for 1, mostre o vetor na ordem
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2 �
escreva uma mensagem informando que o c�digo e inv�lido.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	int vetor[TAM], i, j, codigo, aux;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	
	for(i = 0; i < TAM; i++){
		
		printf("Digite o vetor[%d]:", i);
		scanf("%d",&vetor[i]);
		
	}
	
	printf("Digite o c�digo:");
	scanf("%d",&codigo);
	
	// Solicita que o usu�rio que entre com algum dado qualquer
	
	while(codigo != 0){
		
		switch(codigo){
			
			case 1: //Imprimir na ordem direta 
				for(i = 0; i < TAM; i++){
			
				printf("%d ", vetor[i]);
			
				}
			break;
			
			case 2:
				//Invertendo os n�meros de posi��o
				if((TAM - 1) % 2 == 1){//Testando se o resto da divis�o � igual 1 ou a 0. Se for igual 1 este if ser� executado caso contr�rio cair� na condi��o estabelecida no else
						
						for(i = 0, j = TAM - 1;i < j; i++, j--){
							
							aux = vetor[i]; //Guarda uma c�pia do valor armazenado no vetor na posi��o i
							
							vetor[i] = vetor[j]; // Troca o valor armazenado no vetor na posi��o i pelo o que est� armazenado na posi��ao j
				
							vetor[j] = aux; //No lugar do valor do vetor na posi��o j vamos armazenar o valor que copiamos do vetor na posi��o i inicialmente na vari�vel auxiliar
							
							//Esses passos ir�o se repetir enquanto a condi��o que definimos no la�o esteja sendo satisfeita
						}
					}else{
						
						for(i = 0, j = TAM - 1;i < j + 1; i++, j--){
							
							aux = vetor[i]; //Guarda uma c�pia do valor armazenado no vetor na posi��o i
							
							vetor[i] = vetor[j]; // Troca o valor armazenado no vetor na posi��o i pelo o que est� armazenado na posi��ao j
				
							vetor[j] = aux; //No lugar do valor do vetor na posi��o j vamos armazenar o valor que copiamos do vetor na posi��o i inicialmente na vari�vel auxiliar
							
							//Esses passos ir�o se repetir enquanto a condi��o que definimos no la�o esteja sendo satisfeita
						}
					}
					
					//Imprimindo na ordem inversa

					for(i = 0; i < TAM; i++){
				
					printf("%d ", vetor[i]);
				
					}
			
			break;
			
			default:
				printf("O c�digo digitado � inv�lido!!");
			break;
		}
		
		printf("\nDigite o c�digo:");
		scanf("%d",&codigo);
	}

	/* Fim */ 

	/* C�lculos matem�ticos */

	/* Saida de dados */
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

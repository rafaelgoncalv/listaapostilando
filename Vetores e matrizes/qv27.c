#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 10

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
     Leia 10 n�meros inteiros e armazene em um vetor. Em seguida escreva os elementos
que s�o primos e suas respectivas posi��es no vetor.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	int vetor[TAM], i, div, qtdn, qtddiv;
	qtdn = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	printf("Preencha o vetor:\n\n");
	for(i = 0; i < TAM; i++){
		
		printf("Vetor[%d]:", i);
		scanf("%d",&vetor[i]);
		
	}
	// Solicita que o usu�rio que entre com algum dado qualquer
	
	printf("\nA posicao e o valor primo:\n");
	i = 0;
	while(qtdn < TAM){
		
		qtddiv = 0;
		
		//Contando os divisores do vetor na posi��o i 
		
		for(div = 1; div <= vetor[i]; div++){
		
			if(vetor[i] % div == 0){
				
				qtddiv++;
				
			}
		}
		
		/* Saida de dados */
		if(qtddiv == 2){//Testando se vetor na posi��o i � primo. Se for sua posi��o i e valores ser�o impressos na tela. Caso contr�rio nada ir� acontecer.
			
			
			printf("\nVetor[%d] = %d", i, vetor[i]);
			
			qtdn++;//Contando a quantidade de vezes que o n�mero primo apareceu no vetor
		}
		// Exibe mensagem na tela
		
		i++;
		
	}
	/* Fim */ 

	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

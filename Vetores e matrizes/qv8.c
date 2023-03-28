#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 6

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Crie um programa que l� 6 valores inteiros e, em seguida, mostre na tela os valores lidos �
na ordem inversa.
 
*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	int vetor[TAM], i, j, aux;
	/* Fim */

	/* Entrada de dados */
	
	for(i = 0;i < TAM; i++){
		
		printf("Digite um valor:");
		scanf("%d",&vetor[i]);
		
	}
	
	// Solicita que o usu�rio que entre com algum dado qualquer
	
	printf("\nO vetor original");
	
	for(i = 0;i < TAM; i++){
		
		printf("\n%d", vetor[i]);
		
	}
	
	/* O programa deve proceder da seguinte forma:
	
	Para n�meros de elementos no vetor par:
	
	Entrada:
	6,5,4,3,2,1
	
	Trocas:
	
	(1)1,5,4,3,2,6
	(2)1,2,4,3,5,6
	(3)1,2,3,4,5,6
	
	Sa�da:
	1,2,3,4,5,6
	
	Para n�meros de elementos no vetor �mpar:
	
	Entrada:
	
	7,6,5,4,3,2,1
	
	Trocas:
	
	(1)1,6,5,4,3,2,7
	(2)1,2,5,4,3,6,7
	(3)1,2,3,4,5,6,7
	
	Sa�da:
	
	1,2,3,4,5,6,7
	
	*/

	
	if((TAM - 1) % 2 == 1){//Testando se o resto da divis�o � igual 1 ou a 0. Se for igual 1 este if ser� executado caso contr�rio cair� na condi��o estabelecida no else
		
		for(i = 0, j = TAM - 1;i < j; i++, j--){
			
			aux = vetor[i]; //Guarda uma c�pia do valor armazenado no vetor na posi��o i
			/*
				--> Quando i = 0 => aux = 6
				--> Quando i = 1 => aux = 5
				--> Quando i = 2 => aux = 4
				--> Quando i = 3, ou seja, i > j ir� sair automaticamente do la�o
			*/
			
			vetor[i] = vetor[j]; // Troca o valor armazenado no vetor na posi��o i pelo o que est� armazenado na posi��ao j
			/* 
			
				--> Quando i = 0, j = 5 => vetor[i] = 6, vetor[j] = 1 => vetor[i] = vetor[j] => vetor[i] = 1
				--> Quando i = 1, j = 4 => vetor[i] = 5, vetor[j] = 2 => vetor[i] = vetor[j] => vetor[i] = 2
				--> Quando i = 2, j = 3 => vetor[i] = 6, vetor[j] = 3 => vetor[i] = vetor[j] => vetor[i] = 3
				--> vetor[2]: 4 = vetor[3]:3 => vetor[2] = 3
				--> vetor[3]: 3 = vetor[2]:4 => vetor[3] = 4
	
			*/
			vetor[j] = aux; //No lugar do valor do vetor na posi��o j vamos armazenar o valor que copiamos do vetor na posi��o i inicialmente na vari�vel auxiliar
			
			//Esses passos ir�o se repetir enquanto a condi��o que definimos no la�o esteja sendo satisfeita
		}
				
	}else{
		
		/*1,2,3,4,5,6,7
		  | | | | | | |
		  0 1 2 3 4 5 6
		*/
		
		for(i = 0, j = TAM - 1; i < j + 1; i++, j--){
			
			aux = vetor[i]; 
			vetor[i] = vetor[j]; 
			vetor[j] = aux; 
		}
	}

	/* Fim */ 

	/* Saida de dados */
	
	printf("\nO vetor invertido");
	
	for(i = 0;i < TAM; i++){
		
		printf("\n%d", vetor[i]);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 6

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Crie um programa que l� 6 valores inteiros armazenando-os em um vetor, copie deste vetor apenas os valores pares para um segundo vetor e, em seguida, mostre na tela os valores lidos
na ordem inversa.
 
*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	int original[TAM], copia[TAM], i, j, qtde, dif, aux;
	//Inicializando a vari�vel
	qtde = 0;
	j = 0;
	/* Fim */

	/* Entrada de dados */
	
	for(i = 0;i < TAM; i++){
		
		printf("Digite um valor:");
		scanf("%d",&original[i]);
		
	}
	
	// Solicita que o usu�rio que entre com algum dado qualquer
	
	printf("\nO vetor original:");
	
	for(i = 0;i < TAM; i++){
		
		printf("%d ", original[i]);
		
	}
	
	//Pegando os valores pares do vetor original e copiando para um outro vetor
	
	for(i = 0; i < TAM; i++){
		
		if(original[i] % 2 == 0){
			
			copia[j] = original[i];
			j++;
			qtde++;//quantidade de elementos do vetor copia
			
		}else{
			
		}
	}
	
	dif = TAM - qtde;

	printf("\nO vetor copia apenas com valores pares:");
	
	for(i = 0;i < TAM - dif; i++){
		
		printf("%d ", copia[i]);
		
	}
	
		/* O programa deve proceder da seguinte forma:
	
	Para n�meros de elementos no vetor c�pia par:
	
	Entrada:
	
	1,2,4,6,8,10
	
	C�pia dos pares:
	
	2,4,6,8,10
	
	Trocas:
	
	(1)10,4,6,8,2
	(2)10,8,6,4,2
	
	Sa�da:
	10,8,6,4,2
	
	Para n�meros de elementos no vetor c�pia �mpar:
	
	Entrada:
	
	2,4,6,8,10,12
	
	C�pia dos pares:
	
	2,4,6,8,10,12
	
	Trocas:

	(1)12,4,6,8,10,2
	(2)12,10,6,8,4,2
	(3)12,10,8,6,4,2
	
	Sa�da:
	
	12,10,8,6,4,2
	
	*/
	if((TAM - dif) % 2 == 1){//Testando se o resto da divis�o � igual 1 ou a 0. Se for igual 1 este if ser� executado caso contr�rio cair� na condi��o estabelecida no else
		
		for(i = 0, j = TAM - dif - 1;i < j; i++, j--){
			
			aux = copia[i]; //Guarda uma c�pia do valor armazenado no vetor na posi��o i
			
			copia[i] = copia[j]; // Troca o valor armazenado no vetor na posi��o i pelo o que est� armazenado na posi��ao j

			copia[j] = aux; //No lugar do valor do vetor na posi��o j vamos armazenar o valor que copiamos do vetor na posi��o i inicialmente na vari�vel auxiliar
			
			//Esses passos ir�o se repetir enquanto a condi��o que definimos no la�o esteja sendo satisfeita
		}
	}else{
		
		for(i = 0, j = TAM - dif - 1;i < j + 1; i++, j--){
			
			aux = copia[i]; //Guarda uma c�pia do valor armazenado no vetor na posi��o i
			
			copia[i] = copia[j]; // Troca o valor armazenado no vetor na posi��o i pelo o que est� armazenado na posi��ao j

			copia[j] = aux; //No lugar do valor do vetor na posi��o j vamos armazenar o valor que copiamos do vetor na posi��o i inicialmente na vari�vel auxiliar
			
			//Esses passos ir�o se repetir enquanto a condi��o que definimos no la�o esteja sendo satisfeita
		}
	}

	/* Fim */ 

	/* Saida de dados */

	printf("\nO vetor copia invertido:");
	
	for(i = 0;i < TAM - dif; i++){
		
		printf("%d ", copia[i]);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

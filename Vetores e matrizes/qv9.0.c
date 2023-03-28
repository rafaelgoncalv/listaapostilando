#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#define TAM 6

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
    Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores �
lidos na ordem inversa.
 
*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	int vetor[TAM], i, j, qtdp, aux;
	//Inicializando a vari�ve
	qtdp = 0;
	i = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	//Recebe o valor da posi��o 0
	printf("Digite o valor %d:", i + 1);
	scanf("%d",&vetor[0]);
	
	//Enquanto o valor digitado pelo usu�rio na posi��o 0 for �mpar ele vai pedir que usu�rio digite novamente o valor at� que o valor digitado usu�rio seja par
	while(vetor[0] % 2 == 1){
		
		printf("Digite o valor %d:", i + 1);
		scanf("%d",&vetor[0]);
	}
	
	/*Para cada posi��o ap�s i = 0 iremos verificar se o valor digitado e armazenado no vetor na posi��o i � par ou �mpar. Se ele for par
	vai ser perdido ao usu�rio que digite o valor da posi��o i seguinte. Caso contr�rio ele vai repetir a posi��o i novamente
	e pedir que o usu�rio digite novamente um valor para essa posi��o
	*/
	
	i = 1;
	j = 1;
	
	while(qtdp < TAM - 1){
		
		printf("Digite o valor %d:", j + 1);
		scanf("%d",&vetor[j]);	
			
		while(vetor[i] % 2 == 1){
				
			printf("Digite o valor %d:", i + 1);
			scanf("%d",&vetor[i]);
			
		}		
	
		if(vetor[i] % 2 == 0){
					
			qtdp++;//quantidade de valores pares digitados pelo usu�rio
			i++;
		}
		
		j++;
	}
	
	// Solicita que o usu�rio que entre com algum dado qualquer
	
	printf("\nO vetor original:");
	
	for(i = 0;i < TAM; i++){
		
		printf("%d ", vetor[i]);
		
	}
	
	//Invertendo os valores do vetor preenchido

	if((TAM - 1) % 2 == 1){//Testando se o resto da divis�o � igual 1 ou a 0. Se for igual 1 este if ser� executado caso contr�rio cair� na condi��o estabelecida no else
		
		for(i = 0, j = TAM - 1;i < j; i++, j--){
			
			aux = vetor[i]; //Guarda uma c�pia do valor armazenado no vetor na posi��o i
			
			vetor[i] = vetor[j]; // Troca o valor armazenado no vetor na posi��o i pelo o que est� armazenado na posi��ao j

			vetor[j] = aux; //No lugar do valor do vetor na posi��o j vamos armazenar o valor que copiamos do vetor na posi��o i inicialmente na vari�vel auxiliar
			
			//Esses passos ir�o se repetir enquanto a condi��o que definimos no la�o esteja sendo satisfeita
		}
	}/*else{
		
		for(i = 0, j = TAM - 1;i < j + 1; i++, j--){
			
			aux = vetor[i]; //Guarda uma c�pia do valor armazenado no vetor na posi��o i
			
			vetor[i] = vetor[j]; // Troca o valor armazenado no vetor na posi��o i pelo o que est� armazenado na posi��ao j

			vetor[j] = aux; //No lugar do valor do vetor na posi��o j vamos armazenar o valor que copiamos do vetor na posi��o i inicialmente na vari�vel auxiliar
			
			//Esses passos ir�o se repetir enquanto a condi��o que definimos no la�o esteja sendo satisfeita
		}
	}*/
	
	
	/* Fim */ 

	/* Sa�da de dados */
	
	printf("\nO vetor invertido:");
	
	for(i = 0;i < TAM; i++){
		
		printf("%d ", vetor[i]);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

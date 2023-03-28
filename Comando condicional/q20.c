#include <stdio.h> // Funções de entrada e saï¿½da
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcriÃ§o do enunciado para nï¿½o ficar olhando toda hora a lista

	Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo
e, se forem, se e um triângulo escaleno, equilatero ou isoscele, considerando os seguin-
tes conceitos:
	1. O comprimento de cada lado de um triânngulo e menor do que a soma dos outros
dois lados.
	2. Chama-se equilatero o triângulo que tem trï¿½s lados iguais.
	3. Denominam-se isosceles o triângulo que tem o comprimento de dois lados iguais.
	4. Recebe o nome de escaleno o triângulo que tem os três lados diferentes. 

*/

int main(){ // Funï¿½ï¿½o obrigatï¿½ria
   
	/* DeclaraÃ§Ã£o de constantes ou variÃ¡veis */
	
	int a, b, c;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o tamanho do lado a:");
	scanf("%d", &a);
	printf("Digite o tamanho do lado b:");
	scanf("%d", &b);
	printf("Digite o tamanho do lado c:");
	scanf("%d", &c);
	

	// Solicita que o usuï¿½rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	if((a + b > c) && (b + c > a) && (a + c > b)){
		
		if(a == b && b == c){
			
			printf("É um triângulo equilátero");
			
		}else{
			
			if((a == b && b != c) || (b == c && b != a)){
				
				printf("É um triânngulo isocéles");
				
			}else{
				
				printf("É um triângulo escaleno");
				
			}
		}
	}else{
		
		printf("Não é um triângulo");
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
 
	//system("PAUSE"); //Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 

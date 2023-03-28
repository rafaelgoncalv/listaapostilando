#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

 A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo
de 0 ate 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral
e a um exame final. A média das três notas mencionadas anteriormente obedece aos
pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno esta reprovado (média entre 0 e 2,9), de ´
recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificacões nececessárias.  
 

*/

int main(){ // Função obrigatória
   
	/* Declaração de constantes ou variáveis */
	
	float nota1,nota2,nota3,mediap;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a nota do trabalho de laboratório:");
	scanf("%f",&nota1);
	printf("Digite a nota da avaliação semestral:");
	scanf("%f",&nota2);
	printf("Digite a nota do exame final:");
	scanf("%f",&nota3);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Cálculos matemáticos */
	
	mediap = (nota1*2 + nota2*3 + nota3*5)/10;

	/* Saida de dados */
	
	if((nota1>=0 && nota1<=10) && (nota2>=0 && nota2<=10) && (nota3>=0 && nota3<=10)){
		if(mediap>=5){
			
			printf("\nA média ponderada é %.2f",mediap);
			printf("\nAprovado");
			
		}else{
			if(mediap>=3 && mediap<=4.9){
				
				printf("\nA média ponderada é %.2f",mediap);
				printf("\nRecuperação");
				
			}else{
				
				printf("\nA média ponderada é %.2f",mediap);
				printf("\nReprovado");
				
			}
		}
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	//system("PAUSE"); //Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 


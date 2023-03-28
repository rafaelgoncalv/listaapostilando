#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#define anoatual 2008

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

	Leia uma data de nascimento de uma pessoa fornecida atraves de tr ´ es n ˆ umeros inteiros: ´
Dia, Mes e Ano. Teste a validade desta data para saber se esta ˆ e uma data v ´ alida. Teste ´
se o dia fornecido e um dia v ´ alido: dia ´ > 0, dia = 28 para o mes de fevereiro (29 se o ˆ
ano for bissexto), dia = 30 em abril, junho, setembro e novembro, dia = 31 nos outros
meses. Teste a validade do mes: m ˆ esˆ > 0 e mesˆ < 13. Teste a validade do ano: ano =
ano atual (use uma constante definida com o valor igual a 2008). Imprimir: “data valida” ´
ou “data invalida” no final da execuc¸ ´ ao do programa. . 
 

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
	
	int dia,mes,ano;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
	printf("Digite o dia:");
	scanf("%d",&dia);
	printf("Digite o mês:");
	scanf("%d",&mes);
	printf("Digite o ano:");
	scanf("%d",&ano);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(ano%400==0 && ano%4==0 && ano%100==0 && ano<=anoatual){
		
		if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
			if(dia>=1 && dia<=31){
				
				printf("A data %d-%d-%d é válida",dia,mes,ano);
			}else{
				printf("O dia digitado é inválido");
			}
		}else{
			if(mes==4 || mes==6 || mes== 9 || mes== 11){
				
				if(dia>=1 && dia<=30){
					
					printf("O dia %d-%d-%d é válida",dia,mes,ano);
				}else{
					
					printf("O dia digitado é inválido");
				}
			}else{
				if(mes==2){
					if(dia>=1 && dia<=29){
						
						printf("A data %d-%d-%d é válida",dia,mes,ano);
						
					}else{
						
						printf("O dia digitado é inválido");
					}
					
				}else{
					
					printf("O mês digitado é inválido");
				}
			}
		}
	}else{
		
		if(ano<=anoatual){
			

			if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
						if(dia>=1 && dia<=31){
							
							printf("A data %d-%d-%d é válida",dia,mes,ano);
						}else{
							printf("O dia digitado é inválido");
						}
					}else{
						if(mes==4 || mes==6 || mes== 9 || mes== 11){
							
							if(dia>=1 && dia<=30){
								
								printf("A data %d-%d-%d é válida",dia,mes,ano);
							}else{
								
								printf("O dia digitado é inválido");
							}
						}else{
							if(mes==2){
								if(dia>=1 && dia<=28){
									
									printf("A data %d-%d-%d é válida",dia,mes,ano);
									
								}else{
									
									printf("O dia digitado é inválido");
								}
								
							}else{
								
								printf("O mês digitado é inválido");
							}
						}
					}
			
		}else{
			
			printf("O ano digitado é inválido");
		}
		
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 


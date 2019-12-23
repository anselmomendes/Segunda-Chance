#include <stdio.h>
#include <math.h>
#include <locale.h>

//#define TAMANHO 4
//#define TAMANHO 9
//#define TAMANHO 16
#define TAMANHO 25

	typedef struct arquivo{
		int numero;
		int bit;
	}Arquivo;

void zeraMatriz(Arquivo A[TAMANHO]){
	int i;
	for(i=0; i<TAMANHO; i++){
		A[i].bit = '\0';
		A[i].numero = '\0';
	}	
}

void exibeMatriz(Arquivo A[TAMANHO]){
	int i,j;
	int quad = (sqrt(TAMANHO));
	for(i=0; i<TAMANHO; i++){
		quad--;
		printf("[%1.d][%3.d  ]  ",A[i].bit,A[i].numero);
		if(quad == 0){
			quad = (sqrt(TAMANHO));
			printf("\n");
		}
	}printf("\n");
}
		
	void inserirDados(Arquivo A[TAMANHO]){
		int  i, pos, val;
		printf("Digite uma posiçao para inserir dados: ");
		scanf("%d",&pos);
		printf("Digite um valor para inserir na memória: ");
		scanf("%d",&val);
			if(verifica(A, val, pos)){
				printf("\n\narquivo inserido como com sucesso!\n\n");
			}else(printf("\n\nPosição inválida\n\n"));
	}
		
	int verifica(Arquivo A[TAMANHO], int dados, int pos){
		int x = 0;
		if(pos >= 0 && pos < TAMANHO){
			if(A[pos].bit == 0){
			A[pos].bit = 1;
			A[pos].numero = dados;
			x = 1;
			}
		}return x;
	}
	
	void acessa(Arquivo A[TAMANHO]){
		int pos;
		printf("Digite a posição a ser acessada. ");
		scanf("%d",&pos);
		if(pos < TAMANHO){
			if(!(A[pos].numero == '\0')){
				A[pos].bit = 1;
				printf("O dado %d foi acessado.\n",A[pos].numero);
				}
			}else{
				printf("O dado nao pode ser acessado.\n");
		}
	}
	
	void excluir(Arquivo A[TAMANHO]){
		int i;
		for(i=0; i<TAMANHO; i++){
			if(A[i].bit == 0){
				A[i].numero = '\0';	
				A[i].bit = '\0';
			}
			if(A[i].bit == 1){
				A[i].bit = 0;
			}
		}
	}
	
	void simular(Arquivo A[TAMANHO]){
		int i;
		srand(time(NULL));
		for(i=0; i<TAMANHO; i++){
		int k = rand() % (0 - 2);
		A[i].bit = k;
		int j = rand() % (0 - 999);
		A[i].numero = j;
		}
	}
	
	void menu(Arquivo A[TAMANHO]){
		
		int algoritimo;
		do{
		printf("#####################################################\nSistema de gerenciamento de memoria - segunda chance.\n#####################################################\n\n");
		printf("1 - Exibir dados.\n2 - Alocar dados.\n3 - Acessar dados.\n4 - Excluir dados.\n5 - Simular preenchimento.\n6 - Sair.\n\n");
		printf("Digite uma opção: ");
		scanf("%d",&algoritimo);
		printf("\n\n");
		if(algoritimo < 1 || algoritimo > 6){
			printf("Opcao invalida!!\n");
		}
	}while(algoritimo < 1 || algoritimo > 6);

	switch(algoritimo){
		case 1:
			exibeMatriz(A);
			menu(A);
			break;
		case 2:
			inserirDados(A);
			menu(A);
			break;
		case 3:
			acessa(A);
			menu(A);
			break;
		case 4:
			excluir(A);
			menu(A);
			break;
		case 5:
			simular(A);
			menu(A);
			break;
		case 6:
			break;
	}
}

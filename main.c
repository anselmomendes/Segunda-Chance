/*
Marab�, 21 de Setembro de 2017
UNIFESSPA - Universidade Federal do Sul e Sudeste do Par�;
Engenharia da Computa��o 2015;
Implementa��o do algoritimo segunda chance;
Discentes:
	Anselmo Mendes Oliveira
	Fernando Freire
	Leoni Martins
	
-Esse codigo simula o algoritimo segunda chance, ele cont�m 6 op��es que simula a utiliza��o da memoria.
-� possivel exibir, inserir e remover processo.
-Quando usamos a fun��o "acessar dados" o bit R � setado para 1.
-Quando iniciamos o programa a memoria esta completamente vazia, � possivel inserir processo a processo
ou simular uma situa��o de uso na mem�ria.
*/

#include "segundaChance.h"

void zeraMatriz(Arquivo A[TAMANHO]);
void exibeMatriz(Arquivo A[TAMANHO]);
void inserirDados(Arquivo A[TAMANHO]);
int verifica(Arquivo A[TAMANHO], int dados, int pos);
void acessa(Arquivo A[TAMANHO]);
void excluir(Arquivo A[TAMANHO]);
void simular(Arquivo A[TAMANHO]);
void menu(Arquivo A[TAMANHO]);

int main(){
	setlocale(LC_ALL, "portuguese");
	Arquivo A[TAMANHO];
	zeraMatriz(A);
	menu(A);
	return 0;
}

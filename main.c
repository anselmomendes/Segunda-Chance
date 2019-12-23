/*
Marabá, 21 de Setembro de 2017
UNIFESSPA - Universidade Federal do Sul e Sudeste do Pará;
Engenharia da Computação 2015;
Implementação do algoritimo segunda chance;
Discentes:
	Anselmo Mendes Oliveira
	Fernando Freire
	Leoni Martins
	
-Esse codigo simula o algoritimo segunda chance, ele contém 6 opções que simula a utilização da memoria.
-É possivel exibir, inserir e remover processo.
-Quando usamos a função "acessar dados" o bit R é setado para 1.
-Quando iniciamos o programa a memoria esta completamente vazia, é possivel inserir processo a processo
ou simular uma situação de uso na memória.
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

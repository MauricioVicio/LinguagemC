#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Fundamentos da Linguagem C
	@author Mauricio Elias de Freitas	 */

int main(int argc, char *argv[]) {
	//a linha abaixo configura o idioma para o portugues
	setlocale(LC_ALL, "Portuguese");
	//a linha abaixo modifica a cor do background(fundo) e do texto
	// cor do fundo(7), cor do texto(0)
	system("color 70");
	printf("Olá Mundo\n");
	printf("Acarajé\n");
	system("pause");
	//a linha abaixo "limpa" a tela do prompt de comando
	system("cls");
	system("color FD");
	printf("Código de cores:\n\n");
	printf("0 - preto\n");
	printf("1 - azul\n");
	printf("2 - verde\n");
	printf("3 - verde água\n");
	printf("4 - vermelho\n");
	printf("5 - roxo\n");
	printf("6 - amarelo\n");
	printf("7 - branco\n");
	printf("8 - cinza\n");
	printf("9 - azul claro\n");
	printf("A - verde claro\n");
	printf("B - verde água claro\n");
	printf("C - vermelho claro\n");
	printf("D - lilás\n");
	printf("E - amarelo claro\n");
	printf("F - branco brilhante\n");
	system("pause");
	return 0;
}

#include <stdio.h>

//Código teste do git

int main ()
{
	char nome[50];
	int idade;

	printf("nome: ");
	scanf("%s", nome);
	
	printf("idade: ");
	scanf("%i", &idade);
	
	printf("olá mundo, %s tem %i anos\n", nome, idade);

	return 0;
}

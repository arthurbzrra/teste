#include <stdio.h>

int main(){
	int num1, num2, soma, produto, quadrado;
	
	printf("Digite dois valores inteiros: ");
	scanf("%d %d", &num1, &num2);
	
	soma = num1 + num2;
	produto = num1 * (num2 * num2);
	quadrado = num1 * num1;
	
	printf("\nA soma dos valores é: %d\n", soma);
	printf("O produto do primeiro valor pelo quadrado do segundo é: %d\n", produto);
	printf("O quadrado do primeiro número é: %d\n", quadrado);
	return 0;
}

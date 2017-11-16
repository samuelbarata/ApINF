//
//  main.c
//  ex4
//
//  Created by Samuel Barata on 30/10/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

int calculadora(float a, float b, int op){
	float pi=3.141593;
	switch (op) {
		case 1:
			return (((a*a)+(b*b))*pi);
			break;
		case 2:
			return (a-b);
			break;
		case 3:
			return ((a+b)/2);
			break;
		case 4:
			return 0;
			break;
		default:
			printf("Isso nao e uma opcao, escolha uma das opcoes disponiveis no menu:\n\n");
			break;
	}
	return 500;
}

int main(int argc, const char * argv[]) {
	float a,b;
	int op;
	printf("Introduza um numero: ");
	scanf("%f", &a);
	printf("Introduza outro numero: ");
	scanf("%f", &b);
	while (op!=4){
		printf("\n\n//===[]==========================================================\\\\\n|| 1 || Somar os quadrados dos dois numeros e multiplicar por pi ||\n|| 2 || Subtrair um numero pelo outro e mostrar o resultado      ||\n|| 3 || Calcular a média dos dois numeros                        ||\n|| 4 || Sair do Programa                                         ||\n\\\\===[]==========================================================//\n\nEscolha uma opcao:\n");
		scanf("%d", &op);
		printf("O resultado e: %f\n",calculadora(a,b,op));
	}
	return 0;
}

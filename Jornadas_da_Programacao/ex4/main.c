//
//  main.c
//  ex4
//
//  Created by Samuel Barata on 30/10/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

void func1(float a, float b){
	float pi=3.141593;
	printf("(%f^2 + %f^2) x %f = %f", a, b, pi, ((a*a)+(b*b))*pi);
}
void func2(float a, float b){
	printf("%f - %f = %f", a, b, a-b);
}
void func3(float a, float b){
	printf("media = %f",(a+b)/2);
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
		switch (op) {
			case 1:
				func1(a,b);
				break;
			case 2:
				func2(a,b);
				break;
			case 3:
				func3(a,b);
				break;
			case 4:
				return 0;
				break;
				
			default:
				printf("Isso nao e uma opcao, escolha uma das opcoes disponiveis no menu:\n\n");
				break;
		}
	}
	return 0;
}

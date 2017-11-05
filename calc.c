#include <stdio.h>
#include <stdlib.h>

float mult (float a, float b){
	return (a*b);
}
float sum (float a, float b){
	return (a+b);
}
float div (float a, float b){
	return (a/b);
}
float sub (float a, float b){
	return (a-b);
}
calc(float a, float b, char op){
	switch(op){
		case '+':
		printf("%f + %f = %f", a, b,sum(a,b));
		break;
		case '-':
		printf("%f - %f = %f", a, b,sub(a,b));
		break;
		case '*':
		printf("%f x %f = %f", a, b,mult(a,b));
		break;
		case '/':
		printf("%f / %f = %f", a, b,div(a,b));
		break;
		default: printf("THAT IS NOT AN OPTION");break;
	}
}

main(){
	system("COLOR A");
	printf("Introduza 2 numeros:\n");
	float a, b;
	scanf("%f%f", &a, &b);
	printf("Escolha uma operação: + / * -\n");
	char op;
	scanf(" %c", &op);
	calc(a,b,op);
}

#include <stdio.h>
main(){
	int a,b,c,d,e;
	printf("escreva tres numeros: \n");
	/*
	scanf(" %d", a);
	printf("escreva o segundo numero: ");
	scanf(" %d", b);
	printf("escreva o terceiro numero: ");
	scanf(" %d", c);
	*/
	scanf(" %d %d %d", &a, &b, &c);
	d=a+b+c;
	e=a*b*c;
	printf(" %d + %d + %d = %d\n", a,b,c,d);
	printf(" %d * %d * %d = %d", a,b,c,e);
}

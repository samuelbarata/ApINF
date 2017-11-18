#include <stdio.h>

float a,b;

void ex(){
	printf("void nome(){[comandos e tal]}\n\nQuando chamado name(); dentro do main vai correr o codigo la dentro");
}
void hifen(){
	for(int i=1; i<=22; i++){
		printf("-");
	}
	printf("\n");
}
void asterisco(int x){
	for(int i=1; i<=x; i++){
		printf("*");
	}
	printf("\n");
}
void count(int z){
	long int mult = 1;
	for(int i=1; i<=z; i++){
		printf("%d\n", i);
		mult=mult*i;
	}
	printf("O fatorial do numero: %ld", mult);
}


int fsum(float a, float b){
	printf("%f + %f = %f\n",a , b, a+b);
	return (a+b);
}

void voide(){

/*
	scanf("%f%f", &a, &b);
	fsum(a, b);
*//*
	hifen();
	printf("\tHELLO\n");
	hifen();
	printf("\n\n");
	asterisco(3);
	asterisco(5);
	asterisco(7);
	asterisco(5);
	asterisco(3);
	printf("\n\n");
*/	
	int r;
	printf("Insira um numero-->");
	scanf("%d", &r);
	count(r);
	
	
	
}

#include<stdio.h>
float a,b;
void name(){
	printf(" ________  ________  _____ ______   ___  ___  _______   ___\n");
	printf("|\\   ____\\|\\   __  \\|\\   _ \\  _   \\|\\  \\|\\  \\|\\  ___ \\ |\\  \\\n");
	printf("\\ \\  \\___|\\ \\  \\|\\  \\ \\  \\\\\\__\\ \\  \\ \\  \\\\\\  \\ \\   __/|\\ \\  \\\n");
	printf(" \\ \\_____  \\ \\   __  \\ \\  \\\\|__| \\  \\ \\  \\\\\\  \\ \\  \\_|/_\\ \\  \\\n");
	printf("  \\|____|\\  \\ \\  \\ \\  \\ \\  \\    \\ \\  \\ \\  \\\\\\  \\ \\  \\_|\\ \\ \\  \\____\n");
	printf("    ____\\_\\  \\ \\__\\ \\__\\ \\__\\    \\ \\__\\ \\_______\\ \\_______\\ \\_______\\\n");
	printf("   |\\_________\\|__|\\|__|\\|__|     \\|__|\\|_______|\\|_______|\\|_______|\n");
	printf("   \\|_________|\n\n");
	printf(" ________  ________  ________  ________  _________  ________\n");
	printf("|\\   __  \\|\\   __  \\|\\   __  \\|\\   __  \\|\\___   ___\\\\   __  \\\n");
	printf("\\ \\  \\|\\ /\\ \\  \\|\\  \\ \\  \\|\\  \\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\|\\  \\\n");
	printf(" \\ \\   __  \\ \\   __  \\ \\   _  _\\ \\   __  \\   \\ \\  \\ \\ \\   __  \\\n");
	printf("  \\ \\  \\|\\  \\ \\  \\ \\  \\ \\  \\\\  \\\\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\ \\  \\\n");
	printf("   \\ \\_______\\ \\__\\ \\__\\ \\__\\\\ _\\\\ \\__\\ \\__\\   \\ \\__\\ \\ \\__\\ \\__\\\n");
	printf("    \\|_______|\\|__|\\|__|\\|__|\\|__|\\|__|\\|__|    \\|__|  \\|__|\\|__|\n\n");
	printf("Samuel Barata 2017\n\n");
}
void ex(){
	printf("void nome(){[comandos e tal]}\n\nQuando chamado name(); dentro do main vai correr o codigo lá dentro");
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
		printf("%ld\n", i);
		mult=mult*i;
	}
	printf("O fatorial do numero: %ld", mult);
}


int fsum(float a, float b){
	printf("%f + %f = %f\n",a , b, a+b);
	return (a+b);
}

int main(){

	name();
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

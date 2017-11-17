#include <stdio.h>

int main(){
	puts("Introduza um texto com o maximo de 255 caracteres:");
	char string[255];
	gets(string);
	int i=1;
	while(string[i] != NULL){
		i++;
	}
	printf("A frase %s tem %d caracteres\n",string,i);
}

//
//  ex01.c
//  Strings
//
//  Created by Samuel Barata on 16/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

void ex01(){
	getchar();
	puts("Introduza um texto com o maximo de 255 caracteres:");
	char string[255];
	gets(string);
	int i=1;
	while(string[i] != NULL){
		i++;
	}
	printf("%s tem %d caracteres\n",string,i);
}

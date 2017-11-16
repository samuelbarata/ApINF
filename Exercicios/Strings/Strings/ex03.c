//
//  ex03.c
//  Strings
//
//  Created by Samuel Barata on 16/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

void ex03(){
	puts("Introduza um texto com o maximo de 100 caracteres:");
	char str1[100], str2[100];
	gets(str1);
	puts("Introduza um texto com o maximo de 100 caracteres:");
	gets(str2);
	int i=0;
	while(str1[i] != '\0'){
		i++;
	}
	int k=0;
	while(str2[k] != '\0'){
		str1[i] = str2[k];
		i++;
		k++;
	}
	printf("%s\n", str1);
}

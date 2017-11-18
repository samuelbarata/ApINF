//
//  ex04.c
//  ApInf
//
//  Created by Samuel Barata on 16/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

int sex04(){
	getchar();
	puts("Introduza um texto com o maximo de 100 caracteres:");
	char str1[100], str2[100];
	gets(str1);
	puts("Introduza um texto com o maximo de 100 caracteres:");
	gets(str2);
	for (int i = 0; i<100 ;i++){
		if(str1[i] == '\0'){break;}
		if(str1[i] != str2[i]){printf("The Strings are different\n");return 0;break;}
	}
	printf("Both Strings are Equal\n");
	return 0;
}

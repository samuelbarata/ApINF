//
//  ex02.c
//  Strings
//
//  Created by Samuel Barata on 16/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

void ex02(){
	getchar();
	char str1[255],str2[255];
	puts("Introduza um texto com o maximo de 255 caracteres:");
	gets(str1);
	int i=1;
	while(str1[i] != '\0'){
		i++;
	}
	for (int k=0;k<i;k++){
		str2[k]=str1[k];
	}
	printf("%s\n",str2);
}

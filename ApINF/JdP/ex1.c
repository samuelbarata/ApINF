//
//  ex1.c
//  ApInf
//
//  Created by Samuel Barata on 30/10/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

void jdp1() {
	int h,w;
	printf("Insira a largura: ");
	scanf("%d",&w);
	printf("Insira a altura: ");
	scanf("%d",&h);
	for(int j=0; j<h; j++){
		for(int i=0; i<w; i++){
			printf("*");
		}
		printf("\n");
	}

}

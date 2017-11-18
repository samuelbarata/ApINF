//
//  ex1.c
//  ApInf
//
//  Created by Samuel Barata on 17/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

void tex1(){
	int h,m,s;
	printf("Digite o numero de horas:\n");
	scanf("%d",&h);
	printf("Digite o numero de minutos:\n");
	scanf("%d",&m);
	printf("Digite o numero de segundos:\n");
	scanf("%d",&s);
	s = s+(m*60)+(h*3600);
	printf("O Total de seguntos e: %d\n",s);
}

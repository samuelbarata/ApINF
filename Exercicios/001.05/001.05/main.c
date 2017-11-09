//
//  main.c
//  001.05
//
//  Created by Samuel Barata on 09/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

int main() {
	//int primos[255]={};
	int j,sum;
	unsigned long soma=0;
	// i = numero a testar
	for (float i = 1; i<1000000; i++){
		sum=0;
		do{
			for (float k = 1; k<=i; k++){
				//divide o numero a testar por todos os anteriores
				j = i/k;
				// verifica se a divisão tem resto 0
				if(j==i/k){
					sum++;
					//verifica se a divisão é por si prorpio ou por 1 ou por outro valor
					if(j==1 && sum==2){
						printf("%f\n", i);
						soma+=i;
					}
				}
			}
		}while(sum<2);
	}
	printf("A Soma e: %lu\n",soma);
	return 0;
}

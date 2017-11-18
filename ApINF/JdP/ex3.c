//
//  ex3.c
//  ApInf
//
//  Created by Samuel Barata on 30/10/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>
void tabuada(int op){
	for (int i = 1; i<=10; i++){
	printf("%d x %d = %d\n", op, i, op*i);
	}
}
int jdp3() {
	int op=0;
	while(op!=6){
		printf("Escolha a opcao pretendida:\n\n\t1 - Tabuada do Numero Um\n\t2 - Tabuada do Numero Dois\n\t3 - Tabuada do numero Tres\n\t4 - Tabuada do Numero Quatro\n\t5 - Tabuada do Numero Cinco\n\t6 - Sair\n");
		scanf(" %d", &op);
		switch (op) {
			case 1:
				op=1;
				tabuada(op);
				break;
			case 2:
				op=2;
				tabuada(op);
				break;
			case 3:
				op=3;
				tabuada(op);
				break;
			case 4:
				op=4;
				tabuada(op);
				break;
			case 5:
				op=5;
				tabuada(op);
				break;
			case 6:
				return 0;
				break;
			default:
				printf("Tenha atencao que deve seguir o menu!");
				break;
		}
	}
	return 0;
}

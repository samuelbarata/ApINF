#include <stdio.h>
void l1(unsigned short int a){
	for (int i=0;i<a;i++){
		printf("-");
	}
	printf("\n");
}
void l2(unsigned short int a){
	printf("|");
	for (int i=0;i<(a-2);i++){
		printf(" ");
	}
	printf("|");
	printf("\n");
}


int main(){
	unsigned short int q;
	puts("Qual o comprimento do quadrado que deseja: ");
	scanf("%d",&q);
	l1(q);
	for(int i=0;i<(q/2);i++){
		l2(q);
	}
	l1(q);
}

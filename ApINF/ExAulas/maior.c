#include<stdio.h>
int loles(int a, int b, int c){
	int m;
	if(a<b){
		m=b;
	}
	else{m=a;
	}
	if(c>m){
	m=c;	
	}
	return m;
}
void maior(){
	int a,b,c;
	printf("Introduza 3 numeros:\n");
	scanf("%d%d%d", &a,&b,&c);
	printf("O maior dos 3 numeros e: %d", loles(a,b,c));	
}

#include <stdio.h>
int cubo (int valor){
	return (valor*valor*valor);
}
int quadrado (int valor){
	return (valor*valor);
}


main(){
	int i;
	printf("Insert a value:\n");
	scanf("%d", &i);
	printf("%d ao quadrado = %d", i, quadrado(i));
}

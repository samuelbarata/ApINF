#include <stdio.h>

int main(){
	system("color a");
	int h,m,s;
	printf("Digite o numero de horas:\n");
	scanf("%d",&h);
	printf("Digite o numero de minutos:\n");
	scanf("%d",&m);
	printf("Digite o numero de segundos:\n");
	scanf("%d",&s);
	s = s+(m*60)+(h*3600);
	printf("O Total de seguntos e: %d",s);
}

#include <stdio.h>
main(){
int a;
float n1, n2, tot;
printf("Numero de alunos:\n");
scanf("%d", &a);
for(int num=1; num <= a; num++){
	printf("introduza a nota do teste 1 e do teste 2 do aluno %d:\n", num);
	scanf("%f %f", &n1, &n2);
	tot+=n1+n2;
	printf("media do aluno %d: %f\n\n", num, (n1+n2)/2);
}
printf("Media da turma: %f\n", (tot)/(a+a));
}

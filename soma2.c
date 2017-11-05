#include <stdio.h>

main(){
int in1=0, in2=0, maior=0, menor=0, soma=0;
printf("Introduz 2 numeros sff\n");
scanf(" %d %d", &in1, &in2);
if(in1<in2){
	maior=in2;
	menor=in1;
}
else if (in1>in2){
	maior=in1;
	menor=in2;
}
else{
	printf("WHYYYYYYYYYYY???");
	return(500);
}
do {
	printf("%d + ", menor);
	soma+=menor;
	menor++;
}while (maior!=menor);
printf("%d ", menor);
soma+=menor;
printf("= %d :)", soma);
return (soma);
}

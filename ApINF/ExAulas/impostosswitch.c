#include <stdio.h>
void impostosswitch(){
	char SEX;
	float imp;
	printf("H - Homem\nM - Mulher\n\n");
	scanf(" %C", &SEX);
//	if (SEX!='H'||SEX!='M'){
//		printf("That is not a gender");
//		return 404;
//	}
	do{
		printf("Input: \n");
		scanf(" %f", &imp);
		switch(SEX){
			case'H': imp=imp*0.15;break;
			case'M': imp=imp*0.1;break;
		}
		printf("Imposto: %f\n\n\n", imp);
	}while(imp>=0);
}

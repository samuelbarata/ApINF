/*
  _______  ________  _____ ______   ___  ___  _______   ___               ________  ________  ________  ________  _________  ________     
|\   ____\|\   __  \|\   _ \  _   \|\  \|\  \|\  ___ \ |\  \             |\   __  \|\   __  \|\   __  \|\   __  \|\___   ___\\   __  \    
\ \  \___|\ \  \|\  \ \  \\\__\ \  \ \  \\\  \ \   __/|\ \  \            \ \  \|\ /\ \  \|\  \ \  \|\  \ \  \|\  \|___ \  \_\ \  \|\  \   
 \ \_____  \ \   __  \ \  \\|__| \  \ \  \\\  \ \  \_|/_\ \  \            \ \   __  \ \   __  \ \   _  _\ \   __  \   \ \  \ \ \   __  \  
  \|____|\  \ \  \ \  \ \  \    \ \  \ \  \\\  \ \  \_|\ \ \  \____        \ \  \|\  \ \  \ \  \ \  \\  \\ \  \ \  \   \ \  \ \ \  \ \  \ 
    ____\_\  \ \__\ \__\ \__\    \ \__\ \_______\ \_______\ \_______\       \ \_______\ \__\ \__\ \__\\ _\\ \__\ \__\   \ \__\ \ \__\ \__\
   |\_________\|__|\|__|\|__|     \|__|\|_______|\|_______|\|_______|        \|_______|\|__|\|__|\|__|\|__|\|__|\|__|    \|__|  \|__|\|__|
   \|_________|                                                                                                                                                                                                                                                                     
Samuel Barata 2017
*/
#include <stdio.h> //serve para importar uma biblioteca
main()
{
//HIDE
if(1==1){
	printf(" ________  ________  _____ ______   ___  ___  _______   ___\n");
	printf("|\\   ____\\|\\   __  \\|\\   _ \\  _   \\|\\  \\|\\  \\|\\  ___ \\ |\\  \\\n");
	printf("\\ \\  \\___|\\ \\  \\|\\  \\ \\  \\\\\\__\\ \\  \\ \\  \\\\\\  \\ \\   __/|\\ \\  \\\n");
	printf(" \\ \\_____  \\ \\   __  \\ \\  \\\\|__| \\  \\ \\  \\\\\\  \\ \\  \\_|/_\\ \\  \\\n");
	printf("  \\|____|\\  \\ \\  \\ \\  \\ \\  \\    \\ \\  \\ \\  \\\\\\  \\ \\  \\_|\\ \\ \\  \\____\n");
	printf("    ____\\_\\  \\ \\__\\ \\__\\ \\__\\    \\ \\__\\ \\_______\\ \\_______\\ \\_______\\\n");
	printf("   |\\_________\\|__|\\|__|\\|__|     \\|__|\\|_______|\\|_______|\\|_______|\n");
	printf("   \\|_________|\n");
	printf("\n");
	printf(" ________  ________  ________  ________  _________  ________\n");
	printf("|\\   __  \\|\\   __  \\|\\   __  \\|\\   __  \\|\\___   ___\\\\   __  \\\n");
	printf("\\ \\  \\|\\ /\\ \\  \\|\\  \\ \\  \\|\\  \\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\|\\  \\\n");
	printf(" \\ \\   __  \\ \\   __  \\ \\   _  _\\ \\   __  \\   \\ \\  \\ \\ \\   __  \\\n");
	printf("  \\ \\  \\|\\  \\ \\  \\ \\  \\ \\  \\\\  \\\\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\ \\  \\\n");
	printf("   \\ \\_______\\ \\__\\ \\__\\ \\__\\\\ _\\\\ \\__\\ \\__\\   \\ \\__\\ \\ \\__\\ \\__\\\n");
	printf("    \\|_______|\\|__|\\|__|\\|__|\\|__|\\|__|\\|__|    \\|__|  \\|__|\\|__|\n\n");
	printf("Samuel Barata 2017\n\n");
}
int classs=0;

do{
	printf("1\tPrintf\n2\t\\\n3\tVariables\n4\tScanf\n5\tIf\n");
	printf("Choose a number:\n");
	scanf(" %d", &classs);
	switch(classs){
	case 0:
		return 0;
	break;
	case 1:
	//Escrever
		printf("\nPara escrever texto usa-se\nprintf(\"\");\n");
		printf("Ver exemplo2.c\n\n");
		printf("Press enter to continue...\n\n");
		getchar();
	break;
	case 2:	
	//Comandos
		/*
			\n - nova linha
			\t - tabulação horizontal
			\v - tabulação vertical
			%% - %
			\\ - \
			\' - '
			\" - "
			\? - ?
		*/
		printf("\n\\n\tnova linha \n\\t\ttabulacao horizotal \n\\v\ttabulacao vertical\n%%%%\t%%\n\\\\\t\\\n\\\'\t\'\n\\\"\t\"\n\\\?\t\?\n");
		printf("Ver tabulacoes.c\n\n");
		printf("Press enter to continue...\n\n");
		getchar();
	break;
	case 3:
	//definir variaveis
			//int ar = 23;													//numero inteiro	%d
			//char br = 'a';													//caracteres		%c
			//float cr = 0.425346;											//decimal			%f
			//double dr = 0.2384956786534563789456234876523789569;			//SUPER decimal :)
			//bool er = true;													//0 ou 1
			//bool fr = false;												//V ou F
				printf("\nTipos de variaveis: int, char, float, double\n");
				printf("Ver soma3.c\n\n");
				printf("Press enter to continue...\n\n");
				getchar();
	break;
	case 4:
	//pedir e devolver algo
		int age;
		long int sec;
		printf("\nhow old are you?\n");
		scanf("%d",&age);												// ,&age	significa que o valor de %d vai sr atribuido à variavel age
		sec=(age*365*24*3600*3600);										//			converte anos em seguntos
		printf("You are %ld seconds old!!\n", sec);						// , age	significa que o valor devolvido vai ser o da variavel age
		printf("Ver soma3.c\n\n");
		printf("Press enter to continue...\n\n");
		getchar();
	break;
	case 5:	
	//if statement
		printf("if (condicao) {...}\n");
		//printf("Ver\n\n");
		printf("Press enter to continue...\n\n");
		getchar();
	
	break;	
	}
} while (classs!=0);
}

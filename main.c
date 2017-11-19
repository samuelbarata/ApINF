//
//  main.c
//  ApInf
//
//  Created by Samuel Barata on 18/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//
/*
 ________  ________  _____ ______   ___  ___  _______   ___               ________  ________  ________  ________  _________  ________
 |\   ____\|\   __  \|\   _ \  _   \|\  \|\  \|\  ___ \ |\  \             |\   __  \|\   __  \|\   __  \|\   __  \|\___   ___\\   __  \
 \ \  \___|\ \  \|\  \ \  \\\__\ \  \ \  \\\  \ \   __/|\ \  \            \ \  \|\ /\ \  \|\  \ \  \|\  \ \  \|\  \|___ \  \_\ \  \|\  \
 \ \_____  \ \   __  \ \  \\|__| \  \ \  \\\  \ \  \_|/_\ \  \            \ \   __  \ \   __  \ \   _  _\ \   __  \   \ \  \ \ \   __  \
 \|____|\  \ \  \ \  \ \  \    \ \  \ \  \\\  \ \  \_|\ \ \  \____        \ \  \|\  \ \  \ \  \ \  \\  \\ \  \ \  \   \ \  \ \ \  \ \  \
 ____\_\  \ \__\ \__\ \__\    \ \__\ \_______\ \_______\ \_______\       \ \_______\ \__\ \__\ \__\\ _\\ \__\ \__\   \ \__\ \ \__\ \__\
 |\_________\|__|\|__|\|__|     \|__|\|_______|\|_______|\|_______|        \|_______|\|__|\|__|\|__|\|__|\|__|\|__|    \|__|  \|__|\|__|
 \|_________|
 Samuel Barata 2017
 */
#include <stdio.h>

void menu(){
	printf("+---+-------------------------+\n| 1 | C                       |\n| 2 | Random Cenas            |\n| 3 | Exercicios das aulas    |\n| 4 | Jornadas da Programacao |\n| 5 | Teste 1                 |\n| 6 | Outros Exercicios       |\n|   |                         |\n| 0 | Sair                    |\n+---+-------------------------+\n");
}
int dir(unsigned short int op){
	switch (op){
		case 0:return 1;break;
		case 1:mainc();break;
		case 2:menu_RS();break;
		case 3:menu_ex_aulas();break;
		case 4:menu_JdP();break;
		case 5:menu_T1();break;
		case 6:menu_OEX();break;
		default:puts("Nao e uma opcao");break;
	}
	return 0;
}

int main(int argc, const char * argv[]) {
	unsigned short int op;
	name();
	do{
		menu();
		scanf("%hd",&op);
		if (op == 0){return 0;}
		else{dir(op);}
	}while(op!=0);
	return 0;
}
/*
  _____                            _   ____                  _
 / ____|                          | | |  _ \                | |
| (___   __ _ _ __ ___  _   _  ___| | | |_) | __ _ _ __ __ _| |_ __ _
 \___ \ / _` | '_ ` _ \| | | |/ _ \ | |  _ < / _` | '__/ _` | __/ _` |
 ____) | (_| | | | | | | |_| |  __/ | | |_) | (_| | | | (_| | || (_| |
|_____/ \__,_|_| |_| |_|\__,_|\___|_| |____/ \__,_|_|  \__,_|\__\__,_
 Samuel Barata 2017
 */

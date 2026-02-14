#include<stdio.h>
#include<string.h>
#include"header.h"

int main()
{
	count score;

	printf(CYAN "---------------------------------------\n" RESET);
	printf(YELLOW "------------- TIC TAC TOE -------------\n" RESET);
	printf(GREEN "---------------------------------------\n" RESET);
	char option;
	printf(BLUE "want to paly !! (Y/N) ? : " RESET);
	scanf("%c", &option);

	if(option != 'y' && option != 'Y')
	{
		printf("Exit Successfully.\n");
		return 0;
	}

	char player1[20];
	char player2[20];
	
	printf("Enter Player1 Name : ");
	scanf("%s", player1);	
	printf("Enter Player2 Name : ");
	scanf("%s", player2);

	score.player1_count = 0;
	score.player2_count = 0;
	
	printf(MAGENTA "[[ %s -> X ]] [[ %s -> O ]]\n" RESET, player1, player2);
	
	printf("NOTE: Enter 1-9 to select box!\n");
	printf("\n-------------------------------\n");
	printf("|         |         |         |\n");
	printf("|    1    |    2    |    3    |\n");
	printf("|         |         |         |\n");
	printf("-------------------------------\n");
	printf("|         |         |         |\n");
	printf("|    4    |    5    |    6    |\n");
	printf("|         |         |         |\n");
	printf("-------------------------------\n");
	printf("|         |         |         |\n");
	printf("|    7    |    8    |    9    |\n");
	printf("|         |         |         |\n");
	printf("-------------------------------\n");
	
	char option2;
	printf(BLUE "Continue (Y/N) : " RESET);
	scanf(" %c", &option2);
	
	if(option2 != 'y' && option2 != 'Y')
	{
		printf("Exit Successfully\n");
		return 0;
	}
	
	char option3;
	do
	{
		play_game(player1, player2, &score);
		
		printf(CYAN "Play again (Y/N) : " RESET);
		scanf(" %c", &option3);
	}while(option3 == 'y' || option3 == 'Y'); 

	return 0;
}	

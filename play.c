#include<stdio.h>
#include "header.h"

int play_game(char *player1, char *player2, count *score)
{
	char board[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			board[i][j] = ' ';
		}
	}

	int pos, row, col, i;
	char *player = player1;

	for(i=0; i<9; i++)
	{
		do
		{
			printf(CYAN "Player %s Enter position : " RESET, player);
			scanf("%d", &pos);
			if(pos < 1 || pos > 9)
			{
				printf("INFO: Enter between 1-9\n");
			}
			row = (pos - 1) / 3;
			col = (pos - 1) % 3;
			if(board[row][col] != ' ')
			{
				printf("INFO: Choose Different location\n");
			}

		}while(board[row][col] != ' ');

		board[row][col] = (player == player1) ? 'X' : 'O';

		print_board(board);

		if(check_winner(board) == 'X')
		{
			printf(GREEN "Congratulations %s, You Won\n" RESET, player1);
			score->player1_count++;
			break;
		}
		else if(check_winner(board) == 'O')
		{
			printf(GREEN "Congratulations %s, You Won\n" RESET, player2);
			score->player2_count++;
			break;
		}
		else
		{
			player = (player == player1) ? player2 : player1;
		}
	}
	if(i == 9)
	{
		printf(YELLOW "DRAW Match!\n" RESET);
	}
	
	printf("----------------------------------\n");
	printf("|%-15s|\t%-9s|\n", "Name", "Score");
	printf("----------------------------------\n");
	printf("|%-15s|\t%-9d|\n", player1, score->player1_count); 
	printf("|%-15s|\t%-9d|\n", player2, score->player2_count);
	printf("----------------------------------\n");

}

char check_winner(char board[3][3])
{
	for(int i=0; i<3; i++)
	{
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
		if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	return 'n';
}

void print_board(char board[3][3])
{
        printf("\033[2J\033[H");   // clear screen
        printf("-------------------------------\n");

        for(int i=0; i<3; i++)
        {
                printf("|         |         |         |\n");
                for(int j=0; j<3; j++)
                {
                        if(board[i][j] == 'X')
                                printf("|    %sX%s    ", RED, RESET);
                        else if(board[i][j] == 'O')
                                printf("|    %sO%s    ", GREEN, RESET);
                        else
                                printf("|         ");
                }
                printf("|\n");
                printf("|         |         |         |\n");
                printf("-------------------------------\n");
        }
}


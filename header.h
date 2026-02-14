#ifndef HEADER_H
#define HEADER_H

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"

typedef struct 
{
    int player1_count;
    int player2_count;
}count;

int play_game(char *player1, char *player2, count *score);
void print_board(char board[3][3]);
char check_winner(char board[3][3]);

#endif

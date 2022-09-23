#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

const char player_marks[2] = {'X', 'O'};
char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
bool game_should_continue = true;
int turn = 1;

void draw_board() {
  system("clear");

  printf("Tic Tac Toe\n\n");
  printf("Player 1 (%c) - Player 2 (%c)\n", player_marks[0], player_marks[1]);

  printf("\n"
         "     |     |     \n"
         "  %c  |  %c  |  %c  \n"
         "_____|_____|_____\n"
         "     |     |     \n"
         "  %c  |  %c  |  %c  \n"
         "_____|_____|_____\n"
         "     |     |     \n"
         "  %c  |  %c  |  %c  \n"
         "     |     |     \n\n",
         board[0], board[1], board[2], board[3], board[4], board[5], board[6],
         board[7], board[8]);
}

void mark_board(int pos, char mark) { board[pos - 1] = mark; }

bool is_valid_selection(selection) {
  bool posIsTaken = (char)board[selection - 1] == player_marks[0] ||
                    (char)board[selection - 1] == player_marks[1];

  if (selection < 1 || selection > 9 || posIsTaken) {
    return false;
  }

  return true;
}

bool is_draw() {
  if (turn > 9) {
    return true;
  }

  return false;
}

bool is_win(int player) {
  char m = player_marks[player - 1];
  bool row1 = m == board[0] && m == board[1] && m == board[2];
  bool row2 = m == board[3] && m == board[4] && m == board[5];
  bool row3 = m == board[6] && m == board[7] && m == board[8];
  bool col1 = m == board[0] && m == board[3] && m == board[6];
  bool col2 = m == board[1] && m == board[4] && m == board[7];
  bool col3 = m == board[2] && m == board[5] && m == board[8];
  bool dia1 = m == board[0] && m == board[4] && m == board[8];
  bool dia2 = m == board[2] && m == board[4] && m == board[6];

  if (row1 || row2 || row3 || col1 || col2 || col3 || dia1 || dia2) {
    return true;
  }

  return false;
}

void game_turn() {
  int player = (turn % 2 == 0) ? 2 : 1;
  int selection = 0;
  char mark = player_marks[player - 1];

  draw_board();

  printf("Player %d turn: ", player);
  scanf("%d", &selection);

  if (is_valid_selection(selection)) {
    mark_board(selection, mark);
    turn++;
  }

  if (is_draw()) {
    draw_board();
    printf("It's a draw!\n");
    game_should_continue = false;
  }

  if (is_win(player)) {
    draw_board();
    printf("Player %d wins!\n", player);
    game_should_continue = false;
  }
}

int main(void) {
  while (game_should_continue) {
    game_turn();
  }

  return 0;
}

#include "game.h"

void menu(){
  printf("************************\n");
  printf("***1.play *** 0.exit ***\n");
  printf("************************\n");
}

void game(){
  char board[ROW][COL] = {0};
  InitBoard(board,ROW,COL);
  DisplayBoard(board,ROW,COL);
  
  while(1){
  PlayerMove(board,ROW, COL);
  DisplayBoard(board,ROW,COL);
    
  ComputerMove(board, ROW,COL);  
  DisplayBoard(board,ROW,COL);
    
  }
}





int main(){
  srand((unsigned int)time(NULL));
  int input = 0;
  do{
    menu(); 
    printf("make choice: ");
    scanf("%d", &input);
    switch (input){
      case 1:
        printf("Tictactoe\n");
        game();
        break;
      case 0:
        printf("Exit game\n");
        break;
      default:
        printf("Error");
        break;   
    }
  }while(input);
  
  return 0;
  
}

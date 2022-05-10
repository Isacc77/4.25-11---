#include "game.h"

void InitBoard(char board[ROW][COL], int row ,int col){
    int i = 0, j = 0;
    for(i = 0 ; i < row;i++){
      for(j = 0 ; j < col ; j++){
        board[i][j] = ' ';
      }
    }
}

void DisplayBoard(char board[ROW][COL], int row , int col){
     int i = 0;
     for (i = 0; i < row ; i++){
         int j = 0;
         for (j = 0; j < col ; j++){
             printf(" %c ", board[i][j]);
             if(j < col - 1){
               printf("|");
             }
         }
         printf("\n");
       if(i < row - 1){
            int j = 0;
            for(j = 0; j < col ; j++){
              printf("---"); 
              if(j < col - 1){
                printf("|");
              }
            }
         printf("\n");
        }
    } 
} 
  

void PlayerMove(char board[ROW][COL], int row , int col){
  int x = 0, y = 0;
  printf("It's your term: \n");

  while(1){
    printf("please, input the location: \n");
    scanf("%d %d", &x, &y);  
    if(x >= 1 && x <= row && y >= 1 && y <= col ){
        if(board[x-1][y-1] == ' '){
           board[x-1][y-1] = '*';
           break;
        }else{
          printf("This location was occupied, please choose other location\n");
        }
    }else{
        printf("Invalid location, input range: X: 1 ~ %d, Y:1 ~ %d\n", row, col);
    }
  }
}


void ComputerMove(char board[ROW][COL], int row , int col){
    int x = 0;
    int y = 0;
    printf("computer's term\n");
  
    while(1){
      x = rand() % row; 
      y = rand() % col;
      if(board[x][y] == ' '){
        board[x][y] = '#';
        break;
      }  
  }
}

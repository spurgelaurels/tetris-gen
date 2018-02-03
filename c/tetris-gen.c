// tetromino generator for silliness
// 2018 daphne reed

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void) {
  srand(time(NULL));  
  
  char *piece[7]= {"F","S","I","Z","O","L","J"};
  int randNum = rand() % 7;

  printf (" Random piece: %s\n", piece[randNum]);
 
  return 0;
}

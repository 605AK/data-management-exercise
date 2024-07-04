#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int i;
  int head = 0, tail = 0;
  int random;
  char name[11];
  
  printf("Who are you?\n");
  printf("> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);

  srand((unsigned)time(NULL));
  printf("Tossing a coin...\n");
  for(i = 1; i < 4; i++){
    printf("Round %d: ",i);
    random = rand() % 5 + 1;
    if(random > 0 && random < 4){
      printf("Heads\n");
      head++;
    } else {
      printf("Tails\n");
      tail++;
    }
  }
  printf("Heads: %d, Tails: %d\n",head,tail);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Stats {int ppg; char *player;};

struct Stats randomOutput(){
  srand(time(NULL));
  struct Stats ran;
  int n = rand() % 100;
  if (n < 25)
    ran.player = "Lebron James";
  else if (n >= 25 && n < 50)
    ran.player = "Kevin Durant";
  else if (n >= 50 && n < 70)
    ran.player = "Steph Curry";
  else
    ran.player = "Dwyane Wade";
  ran.ppg = ((rand() % 10) * 4);
  return ran;
}

int printStruct(struct Stats s){
  printf("The best player in the NBA: ");
  char *p = s.player;
  int n;
  for (n = 0; n < strlen(s.player); n++){
    printf("%c",*(p + n));
  }
  printf(" averaged %d points\n",s.ppg);
  return 0;
}

int modifyStruct(struct Stats *p){
  srand(time(NULL));
  int n = rand() % 100;
  if (n < 25)
    p->player = "James Harden";
  else if (n >= 25 && n < 50)
    p->player = "Giannas Aketekuombo";
  else if (n >= 50 && n < 70)
    p->player = "Kawhi Leonard";
  else
    p->player = "Lonzo Ball";
  p->ppg = ((rand() % 10) * 5);
  return 0;
}

int main(){
  struct Stats test = randomOutput();
  printf("Orginal Struct with String player and int ppg:\n");
  printStruct(test);
  struct Stats *testp = &test;
  modifyStruct(testp);
  printf("Struct after modifyStruct functions runs on it:\n");
  printStruct(test);
}
  


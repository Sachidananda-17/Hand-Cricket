#include <stdio.h>
#include<stdlib.h>

int main(){

  printf("\nHand Cricket");

  printf("\n\n1. Play");
  printf("\n2. Exit\n\n");

  int choice;
  char name[20];

  do{
  printf("Your choice: ");
  scanf("%d", &choice);


  }while(choice>2);

  switch(choice){

    case 1:
    printf("\nEnter your name: ");
    scanf("%s", name);

  printf("\nWelcome %s!", name);

   int playChoice;

  printf("\nChoose your play: \n");
  printf("1. Batting\n2. Bowling\n\n");
  printf("Your choice: ");
  scanf("%d", &playChoice);

  switch(playChoice){

    case 1:
    printf("%s you chose to bat first\n\n",name);
    printf("Lets get started!\n\n");

    int run=0;
    int total=0;
    int k=0;
    int comp=0;

    while(k==0){

    printf("%s: ",name);
    scanf("%d", &run);

    if(run<=6){

    comp=1 + (rand() % 6);
    printf("Computer : %d\n",comp);

    total=total+run;
    printf("Score: %d\n\n", total);

    if(run==comp){
      printf("Out!\n");
      k=1;

      total=total+1;

      printf("Target = %d \n\nComputer is going to bat now\n\n",total);
    }

    }

    else
    printf("Enter a number between 1-6\n\n");

    }

    int runTwo=0;
    int totalTwo=0;
    int m=0;
    int compTwo=0;

    while(total>totalTwo){

    printf("%s: ",name);
    scanf("%d", &runTwo);

    if(runTwo<=6){

    compTwo=1 + (rand() % 6);
    printf("Computer : %d\n",compTwo);

    totalTwo=totalTwo+compTwo;
    printf("Score: %d\n\n", totalTwo);

if(runTwo==compTwo){
      printf("Out!\n");

      printf("%s has won the game!",name);
         break;
}

    }

    else
    printf("Enter a number between 1-6\n\n");

    if(total<totalTwo)
    printf("Computer has won the game!");

  }


    break;

    case 2:
    printf("%s you chose to bowl first\n\n",name);
     printf("Lets get started!\n\n");

     int runBowl=0;
    int totalBowl=0;
    int l=0;
    int compBowl=0;

   while(l==0){

    printf("%s: ",name);
    scanf("%d", &runBowl);

    if(runBowl<=6){

    compBowl=1 + (rand() % 6);
    printf("Computer : %d\n",compBowl);

    totalBowl=totalBowl+compBowl;
    printf("Score: %d\n\n", totalBowl);

    if(runBowl==compBowl){
      printf("Out!\n");
      l=1;

      totalBowl=totalBowl+1;

      printf("Target = %d \n\n%s is going to bat now\n\n",totalBowl,name);
    }

    }

    else
    printf("Enter a number between 1-6\n\n");

    }

    int totalBowlTwo;
    int runBowlTwo;
    int compBowlTwo;

   while(totalBowl>totalBowlTwo){

    printf("%s: ",name);
    scanf("%d", &runBowlTwo);

    if(runBowlTwo<=6){

    compBowlTwo=1 + (rand() % 6);
    printf("Computer : %d\n",compBowlTwo);

    totalBowlTwo=totalBowlTwo+runBowlTwo;
    printf("Score: %d\n\n", totalBowlTwo);

if(runBowlTwo==compBowlTwo){
      printf("Out!\n");

      printf("Computer has won the game!");
         break;
}

    }

    else
    printf("Enter a number between 1-6\n\n");

    }

    if(totalBowl<totalBowlTwo)
    printf("%s has won the game!",name);

  }

    break;

      case 2:
      return 0;


  }



}

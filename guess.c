#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int secretnumber= 5;
    int guess;
    int guesscount=0;
    int guesslimit=3;
    int outofguesses=0;
    char start;
    printf("Welcome to the Guess Game!!!");
    printf("\nYou will only get three chance");
    printf("\nLets start the game shall we(y/n):");
    scanf("%c",&start);
    if(start =='y')
    {
      while (guess != secretnumber && outofguesses==0)
      {
        if(guesscount<guesslimit)
        {
         printf("Enter the number: ");
         scanf("%d",&guess);
         guesscount++;
        }
        else
        {
          outofguesses=1;
        }
      }
      if(outofguesses==1){
        printf("Sorry you run out of guesses.\n");
      }
      else {
        printf("You Win!!!\n");
      }
    }
     else if (start=='n')
    {
      printf("Hope to see you soon\n");
    }
    else {
      printf("Invalid Input");
    }
    return 0;
}
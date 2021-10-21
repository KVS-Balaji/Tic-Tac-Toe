#include <stdio.h>
#include <math.h>

int replay();
int main()
{
  do
  {
    int i=0, slot, mv, player=1, x=0, spc[10], j=0, a;

    for(i=1; i<=9; i++)
    {
      spc[i] = ' ';
    }

    for(i=1; i<=9; i++)
    {
      printf("\n");
      printf("%c|%c|%c\n", spc[1], spc[2], spc[3]);
      printf("-|-|-\n");
      printf("%c|%c|%c\n", spc[4], spc[5], spc[6]);
      printf("-|-|-\n");
      printf("%c|%c|%c\n", spc[7], spc[8], spc[9]);
      printf("\n");

      do
      {
        printf("Enter a slot number (1-9): ");
        scanf("%d", &slot);

        if(slot<1 || slot>9)
          printf("Choose a number between 1-9.\n");
        else if(spc[slot]=='X' || spc[slot]=='O') 
        {  
          printf("This slot is already chosen. Pick another slot!\n");
          continue;
        }
        if(slot>=1&&slot<=9)
          break;
      }
      while(x==0);

      mv = slot;

      if(i%2!=0)
      {
        spc[mv]='X';
        player = 1;
      }
      if(i%2==0)
      {
        spc[mv]='O';
        player = 2;
      }
    
      if((spc[1]=='X'&&spc[2]=='X'&&spc[3]=='X') || (spc[4]=='X'&&spc[5]=='X'&&spc[6]=='X') || (spc[7]=='X'&&spc[8]=='X'&&spc[9]=='X') || (spc[1]=='X'&&spc[4]=='X'&&spc[7]=='X') || (spc[2]=='X'&&spc[5]=='X'&&spc[8]=='X') || (spc[3]=='X'&&spc[6]=='X'&&spc[9]=='X') || (spc[1]=='X'&&spc[5]=='X'&&spc[9]=='X') || (spc[3]=='X'&&spc[5]=='X'&&spc[7]=='X') || (spc[1]=='O'&&spc[2]=='O'&&spc[3]=='O') || (spc[4]=='O'&&spc[5]=='O'&&spc[6]=='O') || (spc[7]=='O'&&spc[8]=='O'&&spc[9]=='O') || (spc[1]=='O'&&spc[4]=='O'&&spc[7]=='O') || (spc[2]=='O'&&spc[5]=='O'&&spc[8]=='O') || (spc[3]=='O'&&spc[6]=='O'&&spc[9]=='O') || (spc[1]=='O'&&spc[5]=='O'&&spc[9]=='O') || (spc[3]=='O'&&spc[5]=='O'&&spc[7]=='O'))
      {
        printf("Player%i won the game!\n", player);
      
        printf("%c|%c|%c\n", spc[1], spc[2], spc[3]);
        printf("-|-|-\n");
        printf("%c|%c|%c\n", spc[4], spc[5], spc[6]);
        printf("-|-|-\n");
        printf("%c|%c|%c\n", spc[7], spc[8], spc[9]);

        a=replay();

        if(a==121)
        {
          for(i=1; i<=9; i++)
            spc[i]=' ';
        
          i=0;
          continue;
        }
        else
        {
          printf("You chose to end the game!Thank you for playing!!\n");
          return 0;
        }
      }
    }
    printf("This game is a draw!\n");
  
    a=replay();

    if(a==121)
    {
      for(i=1; i<=9; i++)
        spc[i]=' ';
        
      i=0;
    }
    else
    {
      printf("You chose to end the game!Thank you for playing!!\n");
      return 0;
    }

    return 0;
    }
    while(replay()==121);
}

int replay()
{
  char play;
  int int_play;

  printf("Do you want to play again (y/n)?");
  scanf(" %c", &play);

  int_play = play;

  return int_play;
}
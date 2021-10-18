#include <stdio.h>
#include <math.h>

int main()
{
  int i=0, slot, mv, player, x;
  int spc[10];
  
  while(i<=9)
  {
    spc[i] = ' ';
    i++;
  }

  for(i=1; i<=9; i++)
  {
    printf("%c|%c|%c\n", spc[1], spc[2], spc[3]);
    printf("-|-|-\n");
    printf("%c|%c|%c\n", spc[4], spc[5], spc[6]);
    printf("-|-|-\n");
    printf("%c|%c|%c\n", spc[7], spc[8], spc[9]);

    do
    {
      printf("Enter the slot number (1-9): ");
      scanf("%d", &slot);

      if(slot<1 || slot>9)
        printf("Enter a valid slot number.\n");
      else if(spc[slot]=='X' || spc[slot]=='O') 
      {  
        printf("This slot is alrady chosen!\n");
        continue;
      }
      if(slot>=1&&slot<=9)
        break;
    }
    while(x);

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
      return 0;
    }
  }
  printf("This game is a draw!\n");
  return 0;
}
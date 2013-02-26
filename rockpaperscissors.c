#include <stdio.h>
#include <time.h>

int main() {
  char user, compChar, repeat;  
  int play, goodChar;
  play = 1;
  srand(time(NULL)); //seed the rand function
  while (play == 1) {
    printf("[R]ock, [P]aper, or [S]cissors?!\n");
    scanf("%s", &user);
    printf("You have chosen %s\n", &user);
    int random = rand(); //get a random number
    random = random % 3 + 1 ;
 
  //if structure for converting int => char
   switch(random) {
   case 1:
     compChar = 'r';
     break;
   case 2:
     compChar = 'p';
     break;
   case 3:
     compChar = 's';
     break;
   } 
   printf("Computer has chosen %c \n", compChar);
  
   switch(user) {
   case 'R':
   case 'r':
     switch(compChar){
     case 'R':
     case 'r':
       printf("Rock v Rock... a tie!\n");
       break;
     case 'P':
     case 'p':
       printf("Rock v Paper... you lose!\n");
       break;
     case 'S':
     case 's':
       printf("Rock v Scissors... you win!\n");
       break;
     }
     break;
   case 'P':
   case 'p':
     switch(compChar){
     case 'r':
       printf("Paper v Rock... you win!\n");
       break;
     case 'p':
       printf("Paper v Paper... a tie!\n");
       break;
     case 's':
       printf("Paper v Scissors... you lose!\n");
       break;
     }
     break;
   case 'S':
   case 's':
     switch(compChar){
     case 'r':
       printf("Scissors v Rock... you lose!\n");
       break;
     case 'p':
       printf("Scissors v Paper... you win!\n");
       break;
     case 's':
       printf("Scissors v Scissors... a tie!\n");
       break;
     }
   default:
     printf("Please choose either [R]ock, [P]aper, or [S]cissors.\n");
     break;
   }
   goodChar = 0;
   while(goodChar == 0){
   scanf("%c", &repeat);
     switch(repeat){
     case 'y':
       goodChar = 1;
       break;
     case 'n':
       play = 0;
       goodChar = 1;
       break;
     default:
       printf("Would you like to play again? [y] or [n]\n");
       break;
    } 
  }
}
  return 0;
}
  

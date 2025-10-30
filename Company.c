// this file represewnts the softwar delership use to update the information abt the bikes avilabel in delership
#include <stdio.h>
FILE * fp;
void main(){
fp=fopen("database","a");
  char empname[30];
  printf("GIVE EMPLOYEE NAME: ");
  scanf("%s", &empname);

  int pass = 0, times = 1;
  do
  {
    printf("GIVE PASSWORD: ");
    scanf("%d", &pass);
    if (pass == 123)
    {
      printf("test ok");
      exit(0);
    }
    else
    {
      printf("INVALID PASSWORD! try again. (%d/4) more trys \n",times);
      ++times;
    }
}while (times < 4 || pass != 123); // loops till password is correct up to 4 times
}
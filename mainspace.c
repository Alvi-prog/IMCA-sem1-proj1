#include <stdio.h>
#include <stdlib.h>
FILE *fp;
 
// void BUY();
void SELL();
void ADD();
struct bike
{
  char brand[30], name[40];
  int egsize;
  char fueltype[10];
  float price;
} bikearray[1000000];

struct customer
{
  char name[30];
  int orderno;
} custoarray[1000000];
int c1;
void main(void)
{
  do
  {

    printf("-----WELCOME TO BIKE DEALERSHIP SOFTWARE-----\n");
    printf("   what would you like to do? \n Press the number for the following \n 1.BUY bike \n 2.SELL bike \n 3.ADD bike \n 4.EXIT soft \n");
    scanf("%d", &c1);
    if (c1 == 1)
    {
      // BUY();
    }
  else if (c1 == 2)
    {
      SELL();
    }
    else if (c1 == 3)
    {
      ADD();
    }
    else if (c1 == 4)
    {
      printf("EXITING.....");
      exit(0);
    }

  } while (c1 < 5 && c1 > 0);
}

void SELL()
{ //fp=fopen("database","a");
  int sellno=0;
  printf("ENTER YOUR NAME: ");
   scanf(" %[^\n]",custoarray[sellno].name);
   custoarray[sellno].orderno=sellno;
 
}

void ADD()
{
  char empname[30];
  printf("GIVE EMPLOYEE NAME: ");
  scanf("%s", &empname);

  int pass = 0, times = 0;
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
      ++times;
      printf("INVALID PASSWORD! try again\n");
    }
  } while (times < 4 || pass != 123);
}

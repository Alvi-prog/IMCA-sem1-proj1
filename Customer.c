#include <stdio.h>
#include <stdlib.h>
FILE *fp;
  int sellno=0; 
// void BUY();
void SELL();
void ADD();
struct bike
{
  char brand[30], name[40];
  int egsize;
  char fueltype[10];
  float price;
} bikearray[1000000]; //details of  each bikes will be saved in each array cell

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
    printf("   what would you like to do? \n Press the number for the following \n 1.BUY bike \n 2.SELL bike \n 3.ADD bike \n");
    scanf("%d", &c1);
  switch (c1)
  {
  case 1:
    //BUY();
    break;
  case 2:
    SELL();
    break;
  case 3:
    ADD();
    break;
  case 4:
    printf("EXITING.....");
      exit(0);
    break;

  }
    


  } while (c1 < 5 && c1 > 0);
}

void SELL()
{ fp=fopen("database","a");
 
  printf("ENTER YOUR NAME: ");
  scanf(" %[^\n]",custoarray[sellno].name); 
  custoarray[sellno].orderno=sellno;
 printf("GIVE OF BIKE BRAND NAME: ");
 scanf(" %[^\n]",bikearray[sellno].brand);
 printf("GIVE BIKE MODEL NAME: ");
 scanf(" %[^\n]",bikearray[sellno].name);
 printf("GIVE ENGINE SIZE(cc): ");
 scanf(" %d",bikearray[sellno].egsize);
 printf("GIVE PRICE WILLING TO BE SOLD FOR: ");
 scanf(" %f",bikearray[sellno].price);
}


 


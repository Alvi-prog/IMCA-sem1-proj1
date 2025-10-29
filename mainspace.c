#include <stdio.h> 
#include <stdlib.h>
FILE *fp;
//void BUY();
//void SELL();
// void ADD();
struct bike{
  char brand[30],name[40];
  int egsize;
  char fueltype[10];
  float price;
};

void main(void)
{ do{
  int c1;
  printf("-----WELCOME TO BIKE DEALERSHIP SOFTWARE-----\n");
  printf("   what would you like to do? \n Press the number for the following \n 1.BUY bike \n 2.SELL bike \n 3.ADD bike \n 4.EXIT soft \n");
  scanf("%d",&c1);
if(c1==1){
 //BUY();
}
else if(c1==2){
 //SELL();
}
else if(c1==3){
 ADD();
}else if(c1=4){
  printf("EXITING.....");
  exit(0);
}

}while(1);
}

void ADD(){
printf("GIVE EMPLOYEE NAME \n");
}
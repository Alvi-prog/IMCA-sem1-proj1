#include <stdio.h>
#include <stdlib.h>
FILE *fp;
int sellno = 0;
// void BUY();
void SELL();

struct bike
{
    char brand[30], name[40];
    int egsize;
    char fueltype;
    double price;
} bikearray[1000000]; // details of  each bikes will be saved in each array cell

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
        printf("  Press the number for the following \n 1.BUY bike \n 2.SELL bike \n 3.ADD bike \n");
        printf("----------what would you like to do?---------\n");
        scanf("%d", &c1);
        switch (c1)
        {
        case 1:
            // BUY();
            break;
        case 2:
            SELL();
            break;
        case 3:
            printf("EXITING.....");
            exit(0);
            break;
        }

    } while (c1 < 5 && c1 > 0);
}

void SELL()
{
    fp = fopen("database", "a");

    printf("ENTER YOUR NAME: ");
    scanf(" %[^\n]", custoarray[sellno].name);
    custoarray[sellno].orderno = sellno;
    printf("GIVE OF BIKE BRAND NAME: ");
    scanf(" %[^\n]", bikearray[sellno].brand);
    printf("GIVE BIKE MODEL NAME: ");
    scanf(" %[^\n]", bikearray[sellno].name);
    do
    {
        printf("BIKE FUEL TYPE (press, e for ELETRIC/p for PETROL/d for DIESEL):  ");
        scanf(" %c", &bikearray[sellno].fueltype);
    } while (bikearray[sellno].fueltype != 'e' &&
         bikearray[sellno].fueltype != 'p' && bikearray[sellno].fueltype != 'd');

    if (bikearray[sellno].fueltype == 'e')
    {
        printf("GIVE MAX POWER(kW): ");
        scanf(" %d", &bikearray[sellno].egsize);
    }
    else
    {
        printf("GIVE ENGINE SIZE(cc): ");
        scanf(" %d", &bikearray[sellno].egsize);
    }
    printf("GIVE PRICE WILLING TO BE SOLD FOR: ");
    scanf(" %lf", &bikearray[sellno].price);

    printf("\n\n");
    printf("|------CONFIRMING YOUR SELL REQUEST-----|\n");
    printf(" BUYER NAME : %s               \n", custoarray[sellno].name);
    printf(" BIKE BRAND : %s               \n", bikearray[sellno].brand);
    printf(" BIKE MODEL : %s               \n", bikearray[sellno].name);
    printf(" BIKE FUELTYPE : %c            \n", bikearray[sellno].fueltype);
    if(bikearray[sellno].fueltype == 'e')
    {
    printf(" BIKE POWEER(kW) : %d          \n",bikearray[sellno].egsize);
    }
    else
    {
    printf(" BIKE ENGINE SIZE(cc) : %d     \n",bikearray[sellno].egsize);  
    }
    printf("|--press y to confirm--press n to edit--|\n");
    
}

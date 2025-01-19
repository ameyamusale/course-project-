#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int space=100000;
int scooter=10;
int car=20;
void park_vehicle()
{


char v;
printf("which vehicle you want to park (car or scooter) \n ");
scanf(" %c", &v);

int n;
printf("enter number of vehicles you want to park in our parking \n ");
scanf("%d",&n);

if(v="scooter")
{
    if(space>=(num*scooter))
    {
        space=space-(num*scooter);
    }
    else
    {
        printf("sorry there is no space left for scooter parking \n ");
    }
}
else if(v="car")
{
    if(space>=(num*car))
    {
        space=space-(num*car);
    }
    else
    {
        printf("sorry there is no space left for car parking \n");
    }
}
else
{
printf("vehicle type entered is invalid \n ");
}

printf("Vehicle parked successfully!   Remaining space is: %d  \n no of scooter you can park : %d   \n no of cars you can park : %d \n",space,(space/scooter),(space/car));



}
void check_vehicle()
{

}
void check_insights()
{

}
void exit()
{

}


int main()
{
    

int choice;

printf("*********WELCOME TO MY CAR PARKING*********");
printf("fees char is as follows 1)car = $29 \t 2)bus = $20  \t 3)scotter=$10 \n ");
printf("1. to park your your vehicle \n ");
printf("2. to check no of vehicle  \n ");
printf("3. to check insights of today  \n ");
printf("4. Exit  \n ");

printf("enter your choice \n ");
scan
"%d ",&choice);


switch(choice)
{
    case 1:
    park_vehicle();
    break;

   case 2 :
   check_vehicle();
   break;
   
   case 3:
   check_insights();
   break;

   case 4:
   printf("thank you for visiting pls visit again \n ");
   exit(0);
   break;

   default:
   printf("you have entered a invalid choice \n ");
   break;
}









}
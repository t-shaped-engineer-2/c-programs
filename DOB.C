#include<stdio.h>

int main()
{
   int y,m1,d,y1=2019,yrs,mnt,pd=19;
   float b,a,days;
   
   printf("please enter the year of your birth \n");
   scanf("%d",&y);
   printf("month of your birth\n");
   scanf("%d",&m1);

   //if (m1>12)
   //{ printf("invalid month");       }

   printf("date of your birth\n");
   scanf("%d",&d);
   printf("\n\n");

   printf("thank you for your information\n");
   printf("please wait a while\n");
   printf("\n");
   y=y+1;
   yrs=y1-y;
   mnt=(yrs*12)+(12-m1)+1;
   a=mnt/2.0;
   b=pd-d;
  // printf("%f",a);

   days=(a*31.0)+(a*30);
   days=days+b;
   printf("you are %d years of old\n",yrs);
   printf("you are %d months of old\n",mnt);
   printf("you are %f days of old\n",days);
  // printf("you are %d hours of old\n",days*24);


   

}

#include<stdio.h>
int main()

{

float X,Y,loss, losspercentage; scanf("%d%d",&X,&Y);

loss=X-Y;

losspercentage=loss/X*100; printf("%.2f",losspercentage);
}
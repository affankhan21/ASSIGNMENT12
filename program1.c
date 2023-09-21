#include<stdio.h>
void DisplayDigit(int iNo1)
{int iDigit=0;
if(iNo1<=0)
{
    iNo1=-iNo1;
}
while(iNo1!=0)
{

iDigit=iNo1%10;
printf("%d",iDigit);
iNo1=iNo1/10;

}

}
int main()
{
int iValue=0;
printf("ENTERE NUMBER :\n");
scanf("%d",&iValue);
DisplayDigit(iValue);
return 0;
}
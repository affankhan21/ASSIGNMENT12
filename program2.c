#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkZero(int iNo1)
{
if(iNo1<=0)
{
    iNo1=-iNo1;
}

while(iNo1>0)
{

if(iNo1%10==0)
{
return TRUE;
}
iNo1=iNo1/10;



}
return FALSE;
}
int main()
{
int iValue=0;
BOOL bRet=FALSE;
printf("ENTER NUMBER :\n");
scanf("%d",&iValue);
bRet=ChkZero(iValue);
if(bRet==TRUE)
{
printf("it contains zero");
}
else{

    printf("it does not contain zero");
}

    return 0;
}
#include<stdio.h>
int Count(int iNo1)
{
int iDigits=0,iCnt=0;
if(iNo1<=0)
{
    iNo1=-iNo1;
    }
while(iNo1!=0)
{
iDigits=iNo1%10;
if(iDigits==0||iDigits==1||iDigits==2||iDigits==3||iDigits==4||iDigits==5)
{

    iCnt++;
}
iNo1=iNo1/10;

}
return iCnt;
}


int main()
{


    int iValue=0,iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    iRet=Count(iValue);
    printf("%d",iRet);
    return 0;
}
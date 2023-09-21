#include<stdio.h>
int CountFour(int iNo1)
{
int iDigit=0,iCnt=0;
if(iNo1<=0)
{
    iNo1=-iNo1;
    }
while(iNo1!=0)
{
if (iNo1%10==4)
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
    iRet=CountFour(iValue);
    printf("%d",iRet);
    return 0;
}
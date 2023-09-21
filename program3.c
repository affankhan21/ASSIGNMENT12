#include<stdio.h>
int CountTwo(int iNo1)
{
int iDigit=0,iCnt=0;
if(iNo1<=0)
{
    iNo1=-iNo1;
    }
while(iNo1!=0)
{
if (iNo1%10==2)
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
    iRet=CountTwo(iValue);
    printf("%d",iRet);
    return 0;
}
/*
    Check number is in Between Range 


*/

#include<stdio.h>
#include<stdbool.h>

bool ChkRange(int iNo)
{
    if((iNo >= 10) && (iNo <= 20))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int iNum = 0;
    int bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iNum);

    bRet = ChkRange(iNum);

    if(bRet == true)
    {
        printf("%d is in between Range \n",iNum);
    }
    else
    {
        printf("%d is not in between Range \n",iNum);
    }

    return 0;
}
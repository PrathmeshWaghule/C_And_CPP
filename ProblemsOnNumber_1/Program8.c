/*
    check Number is Prime or Not
*/

/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : FindFactors                             //
//                                                         //
// Description : Display sum of Factors                    //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut : 7                                            //
//                                                         //
//    Output : 7 is prime number                           //
//                                                         //
// Author : Prathmesh Ashok Waghule                        //
//                                                         //
// Date : 20-Nov-2025                                      //
//                                                         //
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkPrime(int iNum)
{
    int iCnt = 0;

    for(iCnt = 2 ; iCnt < (iNum/2) ; iCnt++)
    {
        if(iNum % iCnt == 0)
        { 
            break;
        }
    }
    
    if(icnt > (iNum /2))
    {
        return true;
    }
    else
    {
        return false
    }
}
int main()
{

    int iNo = 0;
    bool bRet = false;

    printf("Enetr number : \n");
    scanf("%d",&iNo);

    bRet = ChkPrime(iNo);

    if(bRet == true)
    {
        printf("%d is Prime Number...!\n",iNo);
    }
    else
    {
        printf("%d is not Prime Number...!\n",iNo);
    }    
    return 0;
}
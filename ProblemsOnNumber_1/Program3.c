/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : ChkFactor                               //
//                                                         //
// Description : Check number is factorial by 4            //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut : 8                                            //
//                                                         //
//    Output : 8 is Factorial Number by 4                  //
//                                                         //
// Author : Prathmesh Ashok Waghule                        //
//                                                         //
// Date : 20-Nov-2025                                      //
//                                                         //
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkFactor(int iNum)
{
    if(iNum % 4 == 0)
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
    int iNo = 0;
    bool bRet = false;
    
    printf("Enter Number : \n");
    scanf("%d",&iNo);

    bRet = ChkFactor(iNo);

    if(bRet == true)
    {
        printf("%d is Factorial Number by 4 \n",iNo);
    }
    else
    {
        printf("%d is Not Factorial Number by 4 \n",iNo);
    }
    return 0;
}
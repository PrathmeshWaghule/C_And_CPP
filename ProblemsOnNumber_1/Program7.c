/*

    Sum of Factors 

    input : 8 
           (1   2   4)

    output : Sum of Factors numbers are : 7
*/

/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : FindFactors                             //
//                                                         //
// Description : Display sum of Factors                    //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut : 8                                            //
//                                                         //
//    Output : 7                                           //
//                                                         //
// Author : Prathmesh Ashok Waghule                        //
//                                                         //
// Date : 20-Nov-2025                                      //
//                                                         //
/////////////////////////////////////////////////////////////



#include<stdio.h>

int SumOfFactors(int iNum)
{

    int iCnt = 0;
    int iSum = 0 ;

    for(iCnt = 1 ; iCnt < iNum/2 ; iCnt++)
    {
        if(iNum % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;

}
int main()
{

    int iNo = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);


    iRet = SumOfFactors(iNo);

    printf("Sum of Factors is : %d \n",iRet);
    return 0;
}
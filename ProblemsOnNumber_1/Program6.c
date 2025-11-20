
/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : FindFactors                             //
//                                                         //
// Description : Display Factors                           //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut : 14                                           //
//                                                         //
//    Output : 1 2 7                                       //
//                                                         //
// Author : Prathmesh Ashok Waghule                        //
//                                                         //
// Date : 20-Nov-2025                                      //
//                                                         //
/////////////////////////////////////////////////////////////


#include<stdio.h>

void FindFactors(int iNum)
{
    int iCnt = 0;
    int iTemp = iNum;

    for(iCnt = 1 ; iCnt < iNum ; iCnt++)
    {   
        if(iTemp % iCnt == 0)
        {
            printf("%d \t",iCnt);
        }
        
    }
    printf("\n");
}
int main()
{

    int iNo = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    FindFactors(iNo);

    return 0;
}

/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : CalculatTicket                          //
//                                                         //
// Description : enter age and return Price of tcket       //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut : 11                                           //
//                                                         //
//    Output : 2000                                        //
//                                                         //
// Author : Prathmesh Ashok Waghule                        //
//                                                         //
// Date : 20-Nov-2025                                      //
//                                                         //
/////////////////////////////////////////////////////////////

#include<stdio.h>

int CalculatTicket(int iAge)
{
    if((iAge >= 0) && (iAge <= 4))
    {
        return 0;
    }
    else if((iAge > 4) && (iAge <= 10))
    {
        return 900;
    }
    else if((iAge > 11) && (iAge <= 50))
    {
        return 2000;
    }
    else if(iAge > 50)
    {
        return 500;
    }
}
int main()
{

    int iValue = 0;
    int iRet = 0;


    printf("Enter your Age : \n");
    scanf("%d",&iValue);

    iRet = CalculatTicket(iValue);

    printf("Your Ticket Price is : %d \n",iRet);
    return 0;
}
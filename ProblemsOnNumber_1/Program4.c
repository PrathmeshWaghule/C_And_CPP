
/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : DisplayRange                            //
//                                                         //
// Description : Display range 1 to user enter number      //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut : 12                                           //
//                                                         //
//    Output : 1 2 3 4 5 6 7 8 9 10 11 12                  //
//                                                         //
// Author : Prathmesh Ashok Waghule                        //
//                                                         //
// Date : 20-Nov-2025                                      //
//                                                         //
/////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayRange(int iNo)
{
    if(iNo <= 0)
    {
        printf("Enter number Greter than 0 \n");
    }

    int i = 0;
    for(i = 1 ; i <= iNo ; i++)
    {
        printf("%d \t",i);
    }
    printf("\n");
}
int main()
{

    int iNum = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iNum);

    DisplayRange(iNum);
    return 0;
}
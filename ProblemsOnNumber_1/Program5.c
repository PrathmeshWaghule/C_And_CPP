/*

    print half range 

    input : 
          Enter number : 12
     
    Output :
          1 2 3 4 5 6      
*/

/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : DisplayRange                            //
//                                                         //
// Description : Display range from 1 to user enter number //
//               half number                               //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut : 12                                           //
//                                                         //
//    Output : 1 2 3 4 5 6                                 //
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
    for(i = 1 ; i <= iNo/2 ; i++)
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
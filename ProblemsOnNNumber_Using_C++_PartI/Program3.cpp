/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : Factorial                               //
//                                                         //
// Description : it is use to find Factorial of Number     //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut :  5                                           //
//                                                         //
//    Output : 125                                         //
//                                                         //
// Author : Prathmesh Ashok Waghule                        //
//                                                         //
// Date : 20-Nov-2025                                      //
//                                                         //
/////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Mathamatics
{
    public:

        int iNo;
        
        Mathamatics(int A)
        {
            this->iNo = A;
        }
        
        int Factorial()
        {
            int iSumF = 1;
            int i = 1;

            for(i = 1 ; i <= this->iNo ; i++)
            {
                iSumF = iSumF * i;
            }
            
            return iSumF;
        }

};

int main()
{

    int iNum = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iNum;

    Mathamatics *mObj = new Mathamatics(iNum);

    iRet = mObj->Factorial();

    cout<<"Factorial of "<<iNum<<" is : "<<iRet<<"\n";
    return 0;
}

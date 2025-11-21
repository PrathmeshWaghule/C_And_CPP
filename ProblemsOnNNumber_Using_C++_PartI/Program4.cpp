/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : sumOfFactors                            //
//                                                         //
// Description : it is use to fperform Addition of Factors //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut :  10                                          //
//                                                         //
//    Output : 8                                           //
//                                                         //
// Author : Prathmesh Ashok Waghule                        //
//                                                         //
// Date : 20-Nov-2025                                      //
//                                                         //
/////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class Problemsonnumber
{

    public:

        int iNo;

        Problemsonnumber(int A)
        {
            this -> iNo = A;
        }

        int sumOfFactors()
        {
            int iSum = 0;

            for(int i = 1 ; i <= this->iNo/2 ; i++)
            {
                if(this->iNo % i == 0)
                {
                    iSum = iSum + i;
                }
            }

            return iSum;
        }

};

int main()
{

    int iNum = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iNum;

    Problemsonnumber *pObj = new Problemsonnumber(iNum);

    iRet = pObj->sumOfFactors();

    cout<<"Summation of factors is : "<<iRet<<"\n";

    return 0;
}
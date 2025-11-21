/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : Problemsonnumber                            //
//                                                         //
// Description : it is use to fperform Addition of Factors //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut :  10                                          //
//                                                         //
//    Output : 8 - 37 =   29                                        //
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

        int diffOfFactorsNonFactors()
        {
            int iFact= 0;
            int iNonFact = 0;

            for(int i = 1 ; i < this->iNo ; i++)
            {
                if(this->iNo % i == 0)
                {
                    iFact = iFact + i;
                }
                else
                {
                    iNonFact = iNonFact + i;
                }
            }

            return iFact - iNonFact;
        }

};

int main()
{

    int iNum = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iNum;

    Problemsonnumber *pObj = new Problemsonnumber(iNum);

    iRet = pObj->diffOfFactorsNonFactors();

    if(iRet < 0)
    {
        iRet = -iRet;
    }

    cout<<"diffrence of factors  and non Factors is : "<<iRet<<"\n";

    delete pObj;

    return 0;
}
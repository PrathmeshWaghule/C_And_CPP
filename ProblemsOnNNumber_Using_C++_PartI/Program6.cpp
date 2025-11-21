/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : countEven                               //
//                                                         //
// Description : it is use to count even digit count in    //
//               number                                    //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut : 10245265                                     //
//                                                         //
//    Output : 4                                           //
//                                                         //
// Author : Prathmesh Ashok Waghule                        //
//                                                         //
// Date : 20-Nov-2025                                      //
//                                                         //
/////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Problemsondigits
{

    public:

        int iNo;
        int iTemp = 0;

        Problemsondigits(int A)
        {
            this->iNo = A;
        }

        int countEven()
        {
            int iCnt = 0;

            while(iNo > 0)
            {
                iTemp = this->iNo % 10;
                if(iTemp == 0)
                {
                    iCnt == iCnt;
                }
                else if(iTemp % 2 == 0)
                {
                    iCnt++;
                }
                this->iNo = this->iNo/10;
            }

            return iCnt;
        }
};

int main()
{

    int iNum = 0;
    int iRet = 0 ;

    cout<<"Enter number : \n";
    cin>>iNum;

    Problemsondigits *pObj = new Problemsondigits(iNum);
    
    iRet = pObj -> countEven();

    cout<<"Event digits in "<<iNum<<" is : "<<iRet<<"\n";

    delete pObj;
    return 0;
}
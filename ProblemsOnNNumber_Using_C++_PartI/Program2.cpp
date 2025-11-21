/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : Addition                                //
//                                                         //
// Description : it is use to perform addition             //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut :  11  10                                      //
//                                                         //
//    Output : 21                                          //
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

    int iNo1 , iNo2;

    public:
        
        Mathamatics(int A , int B)
        {
            this->iNo1 = A;
            this->iNo2 = B;
        }

        int Addition()
        {
            int iAdd = 0;

            iAdd = this->iNo1 + this->iNo2;

            return iAdd;
        }

};

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;

    int iRet = 0;

    cout<<"Enter First number : \n";
    cin>>iValue1;

    cout<<"Enter First number : \n";
    cin>>iValue2;

    Mathamatics *mObj = new Mathamatics(iValue1, iValue2);

    iRet = mObj->Addition();

    cout<<"Addition is : "<<iRet<<"\n";

    delete mObj;

    return 0;
}
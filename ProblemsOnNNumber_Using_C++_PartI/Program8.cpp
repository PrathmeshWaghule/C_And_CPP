/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : CalculateAverage                        //
//                                                         //
// Description : Enter number from user and return Avrage  //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut : 12 16 7 23 21                                //
//                                                         //
//    Output : 15.8                                        //
//                                                         //
// Author : Prathmesh Ashok Waghule                        //
//                                                         //
// Date : 21-Nov-2025                                      //
//                                                         //
/////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class ArrayX
{

    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int No)
        {
            iSize = No;
            Arr = new int[iSize];
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter the elemnts \n";

            for(i = 0 ; i < iSize ; i++)
            {
                cin>>Arr[i];
            }
        }

        float CalculateAverage()
        {
            int i = 0;
            int iSum = 0;

            for(i = 0 ; i < iSize ; i++)
            {
                iSum = iSum + Arr[i];
            }
            return (float(iSum) / float(iSize));
        }
        
        ~ArrayX()
        {
            delete []Arr;
        }
};

int main()
{

    int iLen = 0;
    float iRet = 0.0f;

    cout<<"Enter number of elements that you wnat to store : \n";
    cin>>iLen;

    ArrayX *aObj = new ArrayX(iLen);

    aObj->Accept();
    iRet = aObj->CalculateAverage();

    cout<<"Average is : "<<iRet<<"\n";

    delete aObj;

    return 0;
}
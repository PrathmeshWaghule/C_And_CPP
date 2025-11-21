/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : CalDigit                                //
//                                                         //
// Description : Calculate number of digits in each number //
//                                                         //
// Case :                                                  //
//                                                         //
//    InPut : 12 163 7 2323 22323                          //
//                                                         //
//    Output : 12 nuber having 2 Digits                    // 
//             163 nuber having 3 Digits                   // 
//             7 nuber having 1 Digits                     //
//             2323 nuber having 4 Digits                  //
//             22323 nuber having 5 Digits                 //
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

        ArrayX(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }

        void Accept()
        {
            int i = 0;
            cout<<"Enter "<<iSize<<" elemnts \n";

            for(i = 0 ; i < iSize ; i++)
            {
                cin>>Arr[i];
            }
        }

        void coutnDigit()
        {
            cout<<"Inside countDigit...!\n";
            int i = 0;

            for(i = 0 ; i < iSize ; i++)
            {
                int iValue = Arr[i];
                int iCnt = 0;
                
                while(iValue > 0)
                {
                    iCnt++;
                    iValue = iValue / 10;
                }
                cout<<Arr[i]<<" contains "<<iCnt<<" digits init \n";
            }
        }

        ~ArrayX()
        {
            delete []Arr;
        }
        

};

int main()
{

    int iLen = 0;

    cout<<"Enter number of elements that you wnat to store : \n";
    cin>>iLen;

    ArrayX *aobj = new ArrayX(iLen);

    aobj->Accept();
    aobj->coutnDigit();

    delete aobj;
    return 0;
}
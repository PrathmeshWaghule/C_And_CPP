/////////////////////////////////////////////////////////////
//                                                         //
// Function_Name : CalculateAverage                         //
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

float CalculateAverage(int Arr[] , int iSize)
{

    int i = 0 , iSum = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return (float(iSum) / float(iSize));
}

int main()
{

    int iLen = 0,i = 0;; 
    float fRet = 0.0f; 
    int *ptr = NULL;

    cout<<"enter number of elements you ant to enter : \n";
    cin>>iLen;

    ptr = new int(iLen);

    cout<<"Enter "<<iLen<<" elemnets : \n";

    for(i = 0 ; i < iLen ; i++)
    {
        cin>>ptr[i];
    }

    fRet = CalculateAverage(ptr,iLen);

    cout<<"Average is : "<<fRet<<"\n";
    return 0;
}
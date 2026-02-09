#include<iostream>
using namespace std;

template<class T>

T Maximum(T *Arr, int iSize)
{
    T Max = 0;
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Max < Arr[iCnt])
        {
            Max = Arr[iCnt];
        }
    }
    
    return Max;
}


int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.32,3.7,9.8,8.7}; 
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Maximum(Arr, 5);
    cout << "Maximum number from the array is : " << iRet << "\n";

    fRet = Maximum(Brr, 4);
    cout << "Maximum number from the array is : " << fRet << "\n";

    return 0;
}

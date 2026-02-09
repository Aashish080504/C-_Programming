#include<iostream>
using namespace std;

template<class T>

T Minimum(T *Arr, int iSize)
{
    T Min = 0;
    int iCnt = 0;

    Min = Arr[0];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Min > Arr[iCnt])
        {
            Min = Arr[iCnt];
        }
    }
    
    return Min;
}


int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.32,3.7,9.8,8.7}; 
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Minimum(Arr, 5);
    cout << "Minimum number from the array is : " << iRet << "\n";

    fRet = Minimum(Brr, 4);
    cout << "Minimum number from the array is : " << fRet << "\n";

    return 0;
}

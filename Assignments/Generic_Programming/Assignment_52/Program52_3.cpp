#include<iostream>
using namespace std;

template<class T>

T AddN(T *Arr, int iSize)
{
    T Sum = 0;
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        
        Sum = Sum + Arr[iCnt];
        
    }
    
    return Sum;
}


int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = 0;

    iRet = AddN(Arr, 9);

    cout << "Summation of all elements is : " << iRet << "\n";

    return 0;
}

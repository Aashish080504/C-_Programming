#include<iostream>
using namespace std;

template<class T>

int Frequency(T *Arr, int iSize, T No)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iCount++;
        }
    }
    
    return iCount;
}


int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(Arr,9,10);

    cout<<"Number occurce "<<iRet<<" times\n";

    return 0;
}

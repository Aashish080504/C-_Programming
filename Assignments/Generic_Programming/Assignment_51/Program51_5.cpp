#include<iostream>
using namespace std;

template<class T>

void Reverse(T *Arr, int iSize)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        cout<<Arr[iCnt]<<"\t";
    }
}


int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};

    Reverse(Arr,9);

    return 0;
}

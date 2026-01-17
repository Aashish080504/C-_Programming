#include<iostream>
using namespace std;

template <class T>

T Maximum(T Arr[], int iSize)
{
    int iCnt = 0;
    T Max;

    Max = Arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
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
    float Brr[] = {10.1f,20.2f,30.3f,40.4f,50.5f};
    float fRet = 0.0f;

    fRet = Maximum(Brr, 5);

    cout<<"Maximum is : "<<fRet<<"\n";

    return 0;
}
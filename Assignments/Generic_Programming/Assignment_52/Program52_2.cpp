#include<iostream>
using namespace std;

template<class T>

T Max(T No1, T No2, T No3)
{
    T Max = No1;

    if(No2 > Max)
    {
        Max = No2;
    }

    if(No3 > Max)
    {
        Max = No3;
    }

    return Max;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Max(30, 10, 20);
    cout<<"Maximum is : "<<iRet<<"\n";

    fRet = Max(10.21f, 50.34f, 30.56f);
    cout<<"Maximum is : "<<fRet<<"\n";

    return 0;
}
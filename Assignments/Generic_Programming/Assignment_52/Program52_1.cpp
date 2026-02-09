#include<iostream>
using namespace std;

template<class T>

T Multiply(T No1, T No2)
{
    T Ans;

    Ans = No1 * No2;

    return Ans;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Multiply(10,20);
    cout<<"Multiplication is : "<<iRet<<"\n";

    fRet = Multiply(10.21f, 20.34f);
    cout<<"Multiplication is : "<<fRet<<"\n";

    return 0;
}
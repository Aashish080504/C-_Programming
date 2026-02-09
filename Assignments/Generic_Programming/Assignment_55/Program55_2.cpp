// OOP Approch (Generic)

#include<iostream>
using namespace std;

template <class T>
class Arithematic
{
    public:
        T No1;
        T No2;

        Arithematic(T A, T B)
        {
            No1 = A;
            No2 = B;
        }

        T Substraction()
        {
            T Ans = 0;
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{    
    int iRet = 0;
    float fRet = 0.0f;

    Arithematic <int>aobj1(20,10);          
    Arithematic <float>aobj2(20.5f,10.3f);         

    iRet = aobj1.Substraction();
    cout << "Substraction is : " << iRet << "\n";

    fRet = aobj2.Substraction();
    cout << "Substraction is : " << fRet << "\n";

    return 0;
}
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

        T Addition()
        {
            T Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }
};

int main()
{    
    int iRet = 0;
    float fRet = 0.0f;

    Arithematic <int>aobj1(10,20);          
    Arithematic <float>aobj2(10.5f,20.3f);         

    iRet = aobj1.Addition();
    cout << "Addition is : " << iRet << "\n";

    fRet = aobj2.Addition();
    cout << "Addition is : " << fRet << "\n";

    return 0;
}
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

        T Div()
        {
            T Ans = 0;
            Ans = No1 / No2;
            return Ans;
        }
};

int main()
{
    double dRet = 0.0;   
    Arithematic <int>aobj1(11,10);          
    Arithematic <float>aobj2(101.5,50.3);         

    dRet = aobj1.Div();
    cout << "Division is : " << dRet << "\n";

    dRet = aobj2.Div();
    cout << "Division is : " << dRet << "\n";

    return 0;
}
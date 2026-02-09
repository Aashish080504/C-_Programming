#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
    public:
        T No1, No2, No3, No4;

        Arithmetic(T A, T B, T C, T D)
        {
            No1 = A;
            No2 = B;
            No3 = C;
            No4 = D;
        }

        T Max()
        {
            T MaxVal = No1;

            if(No2 > MaxVal) 
            {
                MaxVal = No2;
            }

            if(No3 > MaxVal) 
            {
                MaxVal = No3;
            }
            
            if(No4 > MaxVal)
            {
                MaxVal = No4;
            }

            return MaxVal;
        }
};

int main()
{
    int iRet = 0;

    Arithmetic<int> aobj1(11, 10, 21, 9);

    iRet = aobj1.Max();
    cout << "Maximum between 4 numbers is: " << iRet << "\n";

    return 0;
}

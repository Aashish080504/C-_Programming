#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
    public:
        T No1;
        T No2;


        Arithmetic(T A, T B)
        {
            No1 = A;
            No2 = B;
        }

        void Swap()
        {
            T temp = No1;
            No1 = No2;
            No2 = temp;
        }

        void Display()
        {
            cout << "No1 = " << No1 << "\n";
            cout << "No2 = " << No2 << "\n";
        }
};

int main()
{
   
    Arithmetic<int> aobj1(11, 10);  

    cout << "Before swap : \n";
    aobj1.Display();

    aobj1.Swap();
   
    cout << "After swap : \n";
    aobj1.Display();

    Arithmetic<float> aobj2(101.5, 50.3);     

    cout << "\nBefore swap : \n";
    aobj2.Display();
    
    aobj2.Swap();
    
    cout << "After swap : \n";
    aobj2.Display();

    return 0;
}

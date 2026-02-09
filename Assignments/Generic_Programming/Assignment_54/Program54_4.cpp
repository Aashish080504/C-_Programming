#include <iostream>
using namespace std;

template <class T>
class Array
{
    private:
        T *Arr = NULL;
        int iSize = 0;

    public:
        Array(int iValue)
        {
            iSize = iValue;
            Arr = new T[iSize];
        }

        void Accept()
        {
            int iCnt = 0;

            cout << "Enter the elements:\n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout << "Elements from the Array are:\n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout << Arr[iCnt] << "\t";
            }
            cout << "\n\n";
        }

        void Reverse()
        {
            int iCnt = 0;

            cout << "Array after reverse:\n";

            for(iCnt = iSize - 1; iCnt >= 0; iCnt--)
            {
                cout << Arr[iCnt] << "\t";
            }
            cout << "\n\n";
        }
};

int main()
{
    int iValue = 0;

    cout << "Enter number of elements that you want to enter: ";
    cin >> iValue;

    Array<int> aobj(iValue);

    aobj.Accept();
    aobj.Display();

    aobj.Reverse();

    return 0;
}


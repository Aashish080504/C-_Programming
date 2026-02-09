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

        void Replace(T oldValue, T newValue)
        {
            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == oldValue)
                {
                    Arr[iCnt] = newValue;
                }
            }
        }

};

int main()
{
    int iValue = 0;
    int oldValue = 0, newValue = 0;

    cout << "Enter number of elements that you want to enter: ";
    cin >> iValue;

    Array<int> *aobj = new Array<int>(iValue);

    aobj->Accept();
    aobj->Display();

    cout << "Enter value to be replaced: ";
    cin >> oldValue;

    cout << "Enter new value: ";
    cin >> newValue;

    aobj->Replace(oldValue, newValue);

    cout << "Array after replacement:\n";
    aobj->Display();

    delete aobj;

    return 0;
}


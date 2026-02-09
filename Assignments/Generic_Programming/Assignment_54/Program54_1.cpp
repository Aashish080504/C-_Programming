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

        bool Search(T value)
        {
            for (int i = 0; i < iSize; i++)
            {
                if (Arr[i] == value)
                    return true;
            }
            return false;
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter number of elements that you want to enter: ";
    cin >> iValue;

    Array<int> aobj(iValue);

    aobj.Accept();
    aobj.Display();

    cout << "Enter element that you want to search: ";
    cin >> iValue;

    bRet = aobj.Search(iValue);

    if(bRet == true)
    {
        cout << "Number is present in the array.\n";
    }
    else
    {
        cout << "Number is not present in the array.\n";
    }

    return 0;
}


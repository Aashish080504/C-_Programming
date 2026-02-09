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

        bool CheckSorted()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize - 1; iCnt++)
            {
                if(Arr[iCnt] > Arr[iCnt + 1])
                {
                    return false;
                }
            }
            return true;
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter number of elements that you want to enter: "; 
    cin >> iValue;

    Array<int> *aobj = new Array<int>(iValue);

    aobj->Accept();
    aobj->Display();

    bRet = aobj->CheckSorted();
    
    if(bRet == false)
    {
        cout << "Array is not sorted.\n";
    }
    else
    {
        cout << "Array is sorted.\n";
    }

    delete aobj;

    return 0;
}

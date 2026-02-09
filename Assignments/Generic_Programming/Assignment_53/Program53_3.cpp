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

        T SecondMax()
        {
            int iCnt = 0;

            T Max1 = Arr[0];
            T Max2 = Arr[0];

            for(iCnt = 1; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] > Max1)
                {
                    Max2 = Max1;
                    Max1 = Arr[iCnt];
                }
                else if(Arr[iCnt] > Max2 && Arr[iCnt] != Max1)
                {
                    Max2 = Arr[iCnt];
                }
            }

            return Max2;
        }

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number of elements that you want to enter: "; 
    cin >> iValue;

    Array<int> *aobj = new Array<int>(iValue);

    aobj->Accept();
    aobj->Display();

    iRet = aobj->SecondMax();

    cout << "Second Maximum number from the array is : " << iRet << "\n";

    delete aobj;

    return 0;
}

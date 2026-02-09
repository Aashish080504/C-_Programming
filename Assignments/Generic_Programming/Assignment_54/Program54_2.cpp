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

        T SumEven()
        {
            T Sum = 0; 
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    Sum = Sum + Arr[iCnt]; 
                }
            }

            return Sum;
        }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter number of elements that you want to enter: ";
    cin >> iValue;

    Array<int> aobj(iValue);

    aobj.Accept();
    aobj.Display();

    iRet = aobj.SumEven();

    cout << "Summation of even elements from array is : " << iRet << "\n";

    return 0;
}


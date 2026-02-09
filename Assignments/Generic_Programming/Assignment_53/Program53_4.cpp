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

        T SecondMin()
        {
            int iCnt = 0;

            T Min1 = Arr[0];
            T Min2 = Arr[1];

            for(iCnt = 1; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < Min1)
                {
                    Min2 = Min1;
                    Min1 = Arr[iCnt];
                }
                else if(Arr[iCnt] < Min2 && Arr[iCnt] != Min1)
                {
                    Min2 = Arr[iCnt];
                }
            }

            return Min2;
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

    iRet = aobj->SecondMin();

    cout << "Second Minimum number from the array is : " << iRet << "\n";

    delete aobj;

    return 0;
}

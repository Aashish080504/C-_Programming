#include<iostream>
using namespace std;

template<class T>

int SearchLast(T *Arr, int iSize, T No)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = iSize; iCnt > 0; iCnt--)
    {
        if(Arr[iCnt] == No)
        {
            return iCnt + 1;
        }
    }

    return -1;
}


int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(Arr,9,40);

    if(iRet == -1)
    {
        cout<<"Given number is not present\n";
    }
    else
    {
        cout<<"Last occurence at "<<iRet<<"th position\n";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()

{
    int n = 10, c=0;
    int a[n] = {50,60,44,222,15,24,63,57,59,88};


    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            c++;
            if(a[i] > a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }


    cout<< "After sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<< a[i] << "  ";
    }
}

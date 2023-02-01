#include<iostream>

using namespace std;

int main()

{
    int n;
    cout<< "Array Size: ";
    cin>> n;

    int arr[n];

    cout<< "\n\nInput array: " << endl;
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    cout<< "\n\nArray list: ";
     for(int i=0; i<n; i++)
    {
       cout<< arr[i] << "   ";
    }
    cout<< "\n\nReverse Array: ";
     for(int i=n-1; i>=0; i--)
    {
        cout<< arr[i] << "   " ;
    }
    cout<< endl;

    return 0;
}

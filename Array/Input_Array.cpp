#include<iostream>
using namespace std;

int main()

{
    int n, a[100];

    cout<< "How many elements: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    }

    cout<< "Your elements:";

    for(int i=0; i<n; i++)
    {
        cout<< a[i] << " ";
    }

    return 0;
}

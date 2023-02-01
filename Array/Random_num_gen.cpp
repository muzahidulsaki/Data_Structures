#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main ()
{
    int n;
    cout<< "Enter Array size: ";
    cin>> n;

    int arr[n];
    srand (time(0));     // generate random number multiply with time, so we can found different number from each Run....

    for(int i=0; i<n; i++)
    {
        arr[i] = rand() % 100+1; //    % number, for limitation.. // +1 for 100, other wise count from 99..
    }
    for(int i=0; i<n; i++)
    {

        cout<< "index " << i+1 << ": " << arr[i] << endl;
    }
}

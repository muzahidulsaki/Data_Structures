#include<iostream>
using namespace std;

int main()
{
    int n=10;
    int a[n] = { 23,32,54,76,88,99,67,46,898,764};


   //int n;
   // cout<< "Range: ";
   // cin>> n;

    //int a[n];

   // cout<< "input number: ";
   // for(int i=0; i<n; i++)
   // {
    //    cin>> a[n];
   // }


    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int k = a[j];
                a[j] = a[j+1];
                a[j+1] = k;
            }
        }
    }

     cout<< "After sort: ";
     for(int i=0; i<n; i++)
    {

            cout << a[i] << "  ";

    }


}

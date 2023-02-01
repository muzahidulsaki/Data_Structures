#include<iostream>
using namespace std;

int main()

{
    int n,A[20], even=0,odd=0;

    cout<< "How many Number: ";
    cin>> n;

    cout<< "\n\nAdd Number:"<< endl;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    cout<< "All number :";
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<< "   " ;
    }

    cout<< "\n\nEven Number: ";
    for(int i=0; i<n; i++)
    {
        if(A[i]%2==0)
        {
            cout<< A[i] << "   " ;
            even+= A[i];

        }

      }
        cout<<"\nSummation of Even Number: "<< even;
        cout<< "\n\nOdd Number: ";

    for(int i=0; i<n; i++)
    {
        if(A[i]%2 != 0)
        {
            cout<< A[i] << "   ";
            odd+= A[i];

        }

    }

        cout<<"\nSummation of Odd Number: "<< odd;
        cout<< "\n\n";






return 0;
}

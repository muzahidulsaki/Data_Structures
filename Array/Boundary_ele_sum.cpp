#include <iostream>
using namespace std;

int main()

{
    int m, n;

    cout<< "How many row size? ";
    cin>> m;
    cout<< "How many column size? ";
    cin>> n;

    int arr[m][n];

    cout<< "Input elements: ";

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>> arr[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<< arr[i][j] << "   ";
        }

        cout<< endl;
    }

    int sum=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0 || j==0 || i==m-1 || j==n-1)
            {
                sum+= arr[i][j];
            }
        }
    }

    cout<< "summation of: " << sum << endl;

    return 0;
}

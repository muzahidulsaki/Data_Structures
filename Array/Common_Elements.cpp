#include<iostream>
using namespace std;
int main()

{
    int n,m;
    cout<< "How many elements in first array?" << endl;
    cin>> n;
    int array1[n];
    cout<< "input Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>array1[i];
    }
    cout<< "How many elements in second array?" << endl;
    cin>> m;
    int array2[m];
    cout<< "Input array: ";
    for(int i=0; i<m; i++)
    {
        cin>>array2[i];
    }

    int found = false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(array1[i] == array2[j])
            {
                cout<< array1[i] << "  ";
                found = true;
                break;

            }


        }
    }

    if(!found)
    {
        cout<< "No common element!";

    }
    else
    {

    }

    return 0;

}

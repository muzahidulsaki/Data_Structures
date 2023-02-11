#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<< "Enter array size: ";
    cin>> n;

    int array[n];

    cout<< "Input array: " << endl;
    for(int i=0; i<n; i++)

    {
        cin>> array[i];
    }


    bool isUnique = true;
    int count = 0;

    for(int i=0; i<n-count; i++)
    {
        for(int j=i+1; j<n-count; j++)
        {
            if(array[i] == array[j])
            {
                for(int i=j; i<n-count; i++)
                {
                    array[i] = array[i+1];

                }
               count++;
               isUnique = false;

            }

        }
    }


    if (isUnique)
    {
          cout << "all ready unique!" << endl;
    }

    else
    {

    for(int i=0; i<n-count; i++)


        {
            cout<< array[i] << "  ";
        }

    }

    return 0;
}


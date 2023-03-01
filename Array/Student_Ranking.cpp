#include <iostream>
using namespace std;

int main()
{
    int Ssize,Csize;
    cout<< "How many Student?"<< endl;
    cin>> Ssize;
    cout<< "Total course in semester?" << endl;
    cin>> Csize;

    int array[Ssize][Csize];

    cout<< "Input " << Csize << " course number for "<< Ssize << " student :" << endl;
    for(int i=0; i<Ssize; i++)
    {
        cout<< "Student " << i+1 << ": ";
        for(int j=0; j<Csize; j++)
        {
            cin>> array[i][j];
        }
    }

    cout<< "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

     for(int i=0; i<Ssize; i++)
    {
        cout<< "Student " << i+1 << ": ";
        for(int j=0; j<Csize; j++)
        {
            cout << array[i][j] << "  " ;
        }
        cout<< "  " << endl;
    }

     cout<< "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

    int b[Ssize];
    for(int i=0; i<Ssize; i++)
    {
        int sum=0;
        for(int j=0; j<Csize; j++)
        {
            sum = sum + array[i][j];
        }
        b[i] = sum;
    }

    int max,min,temp;

    max = b[0];

    for (int i=0; i<Ssize; i++)
    {
        if(b[i]>=max)
        {
            max = b[i];
        }
    }

    min = b[0];

    for (int i=0; i<Ssize; i++)
    {
        if (b[i]<= min)
        {
            min = b[i];
        }
    }

   for(int i=0; i<Ssize; i++)
    {
        cout<< "Number of sum student " << i+1 << " : ";
        for(int j=0; j<1; j++)
        {
            if(b[i] == max)
            {
                cout<< b[i] << " | 1st";
            }

            else if (b[i] == min)
            {
                cout<< b[i] << " | 2nd";
            }

            else
            {
                cout<< b[i] ;
            }
        }
        cout<< "  " << endl << endl;

    }

    cout<< "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;



}

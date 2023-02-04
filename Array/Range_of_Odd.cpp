#include <iostream>
using namespace std;

int main()
{
    int n,s;


    cout<< "Starting value: ";
    cin>> n;

    cout<< "Ending value: ";
    cin>> s;

    cout<< "\n\n";


    cout<< "Starting value: "<< n << endl;
    cout<< "Ending value: " << s << endl << endl;
    for(int i=n; i<=s; i++)
    {
        if(i%2 != 0)
        {
            cout<< i << "   " ;

        }

    }

    cout<< endl;

    return 0;

}

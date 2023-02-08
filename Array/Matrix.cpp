#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    int row, col;

    cout<< "How many row you need?" << endl;
    cin>> row;

    cout<< "How many cols you need?" << endl;
    cin>> col;

    int array[row][col];

    cout<< "Enter input: " << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>> array[i][j];
        }
    }
    cout<< endl;
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<< array[i][j] << "   ";
        }

        cout<< "   " << endl;
    }
}

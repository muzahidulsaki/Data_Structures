#include<iostream>
using namespace std;

int main()
{
    int size1,size2;

    cout<< "First array size: ";
    cin>> size1;

    int arr1[size1];
    cout<< "Input array: ";
    for(int i=0; i<size1; i++)
    {
        cin>> arr1[i];
    }
    cout<< "Second array size: ";
    cin>> size2;
    int arr2[size2];
    cout<< "Input array: ";
    for(int i=0; i<size2; i++)
    {
        cin>> arr2[i];
    }


    int arr3[size1+size2];

    for(int i=0;i<size1;i++)
	{
		arr3[i]=arr1[i];
	}
	for(int i=size1,j=0; i<size1+size2; i++,j++)
    {
        arr3[i] = arr2[j];
    }

    cout<<"After merge, the array is"<<endl;
	for(int i=0;i<size1+size2;i++)
	{
		cout<<arr3[i]<<"\t";
	}
	cout<<endl;


    return 0;
}

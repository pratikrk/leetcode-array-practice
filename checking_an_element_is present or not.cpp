#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[10],i,j;

    cout<<"Enter the element:"<<endl;
    cin>>j;
    for (i = 0; i <= 10; i++)
    {
        cout<<"Enter the array elements:"<<endl;
        cin>>arr[i];

    }
    for (i=0 ; i <= 10; i++)
    {
        cout<<"The array is"<<arr[i]<<endl;
    }
    if(arr[i]==j)
    {
        cout<<"the element is present:"<<endl;
    }
    else
    {
        cout<<"the element is not present"<<endl;
    }
    return 0;
}

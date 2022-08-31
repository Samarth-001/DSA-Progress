#include<iostream>
using namespace std;

int main()
{
    int x;
    int arr[10]={100,90,80,70,60,50,40,30,20,10};
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
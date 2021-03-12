#include<iostream>
using namespace std;
//function to sort an array using insertion sort
void insertSort(int arr[],int n)
{
    int key,j;
    for(int i =1;i< n; i++)
    {
        key =arr[i];
        j=i-1;
        //move elements of arr[0..i-1],that are greater than key to one position ahead of their current position.
        while(j>= 0 && arr[j] >key)
        {
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[ ]={12,11,13,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++)
    cout<<arr[i]<<"  ";
    cout<<endl;
    insertSort(arr,n);
    for(int i =0;i<n;i++) 
    cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}

//Time Complexity : O(n*2)
#include<iostream>
using namespace std;
void swap(int *xpoint,int *ypoint)
{
    int temp =*xpoint;
     *xpoint = *ypoint;
     *ypoint = temp;
}
// bubble sort
void BubbleSort(int arr[],int n)
{
    bool swapped;
    for(int i =0;i<n-1 ;i++)
    {
        swapped=false;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swapped=true;
            }
        }
        if(swapped =false)
        break;
    }
}
int main()
{
    int arr[]={64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++)
    cout<<arr[i]<<" ";
cout<<endl;
    BubbleSort(arr,n);
    for(int i =0;i<n;i++)
    cout<<arr[i]<<" ";
cout<<endl;
return 0;
}
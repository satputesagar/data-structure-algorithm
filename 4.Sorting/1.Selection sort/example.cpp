#include<iostream>
#include<algorithm>
using namespace std;
// create a swaping function
void swap(int *xpoint,int *ypoint){
    int temp= *xpoint;
    *xpoint = *ypoint;
    *ypoint= temp;
}
//function selection sorting
void selectionSort(int arr[],int n)
{
    int min_index;
    //one by one move boundary of unsorted subarray

    for(int i =0;i<n-1;i++)
    {
        min_index =i;
        for(int j = i+1;j< n;j++)
        if(arr[j]<arr[min_index])
        min_index=j;
        //call swap the found minimum element with first
        swap(&arr[min_index],&arr[i]);
    }
}

int main()
{
 int arr[]={8,7,6,5,4,3,2,1};
 
 int n=sizeof(arr)/sizeof(arr[0]);
 for(int i =0;i<n;i++){
     cout<<arr[i]<<" ";
 }
 cout<<endl;
 selectionSort(arr,n);
 for(int i =0;i<n;i++){
     cout<<arr[i]<<" ";
 }
 cout<<endl;
 return 0;
}
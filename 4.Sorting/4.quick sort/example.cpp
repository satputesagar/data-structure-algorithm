#include<iostream>
using namespace std;
// swap two element function
void swap(int* a,int *b)
{
    int temp =*a;
    *a=*b;
    *b=temp;
}
/* this function take last element as pivot , places the pivot element at its correct position in sorted array,and  place all smaller (smaller than pivot)
to left of pivot and all greater elements to right of pivot */
int partition(int arr[],int low,int high)
{
    int pivot =arr[high]; //pivot
    int i =(low-1);// index of smaller element and indication
 for(int j =low; j<= high -1;j++)
    {
    if(arr[j]<pivot)
    {
        i++;
        //if current index of smaller element
        swap(&arr[i],&arr[j]);
    }
    
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}
/*
the main function that implement Quick sort
arr[]---> array to be sorted.
low ----> starting index.
high--->  ending index.
*/
void QuickSort(int arr[],int low ,int high)
{
    if(low < high)
    {
        /*pi is partitioning index, arr[p] is now at
        right place */
        int pi =partition(arr,low,high);
        /* 
        seperately sort elements before 
        partition and after partition  
        */
       QuickSort(arr,low,pi-1);
       QuickSort(arr,pi+1,high);
    }
}
int main()
{
    int arr[]={10,7,5,8,9,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    QuickSort(arr,0,n-1);
    cout<<"sorted array :"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
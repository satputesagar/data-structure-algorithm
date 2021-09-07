#include<iostream>
using namespace std;
int funct_Pair_sum(int arr[],int n,int k){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if(arr[i]+arr[j]==k)
    {
        return -1;
    }
    else if(arr[i]+arr[j]>k){
    break;
    }
    }
}
}

int main(){
int arr[]={1,4,4,5,5,5,6,6,11};
int n =sizeof(arr)/sizeof(arr[0]);
int k=1;
int sum=funct_Pair_sum(arr,n,k);
cout<<sum<<endl;
return 0;
}

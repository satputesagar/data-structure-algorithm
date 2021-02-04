/* rotation number
input:5
1 2 3 4 5
2
output:- 3 4 5 1 2
*/


#include<iostream>
using namespace std;
void Rotationfun(int arr[],int n){
    
    // int n=sizeof(arr)/sizeof(arr[0])
    //rotated value 
    int i;
    int temp=arr[0];
    for( i=0;i<n -1;i++)
    arr[i]=arr[i+1];
    arr[i]=temp;
}
void funt(int arr[],int d,int n){
    
    for(int i=0;i<d;i++)
     Rotationfun(arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int d;cin>>d;
    // Rotationfun(arr,n);
    funt(arr,d,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int getPairsCount(int arr[], int n, int sum)
{
	int count = 0;
for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] + arr[j] == sum){
                count++;
                cout<<arr[i]<<"+"<<arr[j]<<" ";
			}
return count;
}
int main()
{
	int arr[] = { 1,4,4,5,5,5,6,6,11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	for(int i = 0; i < n; i++) {
    //for(int j = 0; j < n; j++) {
       // cout<<arr[i][j]<<" ";
        //}
        cout<<arr[i]<<" ";
	}
    //for(int i=n-1;i<n;++i)
      //  cout<<arr[n]<<endl;
      cout<<"\n";
      int result=0;
       for ( int i=0 ; i<n;)
    {
    cout<<i<<" ";
    i++;
    }

    cout<<"\n";
	int sum = 11;

	cout << "\n couint of pairs is"
		<< getPairsCount(arr, n, sum);
	return 0;
}

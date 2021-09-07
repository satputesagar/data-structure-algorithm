#include<bits/stdc++.h>
using namespace std;
// function to find maximum length subsequence
// with difference between adjacent elements as
// either 0 or 1
int maxLenSub(int arr[], int n)
{
	int mls[n], max = 0;
	
	// Initialize mls[] values for all indexes
	for (int i=0; i<n; i++)
		mls[i] = 1;
	
	// Compute optimized maximum length subsequence
	// values in bottom up manner
	for (int i=1; i<n; i++)
		for (int j=0; j<i; j++)
			if (abs(arr[i] - arr[j]) <= 1 &&
					mls[i] < mls[j] + 1)
				mls[i] = mls[j] + 1;
	
	// Store maximum of all 'mls' values in 'max'
	for (int i=0; i<n; i++)
		if (max < mls[i])
			max = mls[i];
	
	// required maximum length subsequence
	return max;	
}

// Driver program to test above
int main()
{
	int n;
	std::cin>>n;
	int arr[n];
	for(int i =0;i<n;i++)
	{
		std::cin>>arr[i];
	}
	std::cout<< maxLenSub(arr, n);
	return 0;
}

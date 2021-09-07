int k = log2(n);
    while (n > 0) {
        arr[k--] = n % 2;
        n /= 2;
    }
}

// Funtion to convert the number
// represented as a binary array
// arr[] into its decimal equivalent
int binaryDec(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += arr[i] << (n - i - 1);
    return ans;
    }


    int k==log2(nums.size());
    while(nums.size()>0){
        nums[k--]=nums.size() % 2;
        nums.size() / = 2;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
            ans+=nums[i]<<nums.size() - i - 1);
        return ans;

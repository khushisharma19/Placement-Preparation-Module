#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN; 
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}

int main()
{
    int n;
    cin>>n;
    int arr[n] ;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
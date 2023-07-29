#include<bits/stdc++.h>
using namespace std;

int getInversions(vector<int>&arr, int n){
    // Write your code here.
    int cnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
                cnt++;
        }
    }
    return cnt;
}

int main(){
    vector<int> a = {5, 4, 3, 2, 1};
    int n = 5;
    int cnt = getInversions(a, n);
    cout << cnt << endl;
    return 0;
}
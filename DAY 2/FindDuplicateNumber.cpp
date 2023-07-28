#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                ans=nums[i];
            }       
        }
        return ans;            
}

int main(){
    vector < int > arr;
    arr = {1,3,4,2,2};
    cout << findDuplicate(arr) << endl;
}
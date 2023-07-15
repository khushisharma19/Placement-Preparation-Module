#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=m-1;
        int right=0;
        while(left>=0 && right<n){
            if(nums1[left]>nums2[right]){
                swap(nums1[left],nums2[right]);
                left--;right++;
            }
            else{
                break;
            }
        }
        sort(nums1.begin(),nums1.begin()+m);
        sort(nums2.begin(),nums2.end());
        
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
        for(int i=0;i<m+n;i++){
            cout<<nums1[i]<<" ";
    }  
}

int main(){
    vector<int> nums1={1, 4, 8, 10};
    vector<int> nums2={2, 3, 9};
    int m=nums1.size();
    int n=nums2.size();
    merge(nums1, m, nums2, n);
                  
}

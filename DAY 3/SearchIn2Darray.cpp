#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0;
        int high=(m*n)-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[mid/n][mid%n]==target)
                return true;
            else if(matrix[mid/n][mid%n]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
}

int main(){
    vector < vector < int >> arr;
    arr =  {{1,3,5,7}, {10,11,16,20}, {20,30,34,60}};
    int target;
    cin>>target;
    return searchMatrix(arr,target);
}
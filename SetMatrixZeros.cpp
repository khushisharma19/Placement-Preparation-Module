#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    unordered_set<int> row;
    unordered_set<int> column;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row.insert(i);
                column.insert(j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row.count(i) > 0 || column.count(j) > 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
    vector<vector<int>> matrix{{1,1,1},{1,0,1},{1,1,1}};
    int n=matrix.size();
    int m=matrix[0].size();
    setZeroes(matrix);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
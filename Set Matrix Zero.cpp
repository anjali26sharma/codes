class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> v1;
        vector<int> v2;
        int i,j, n,m;
        m =  matrix.size();
        n = matrix[0].size();
        for( i =0; i<m ;i++)
        { 
            for( j= 0; j<n ; j++)
            {
                if(matrix[i][j] == 0)
                {
                    v1.push_back(i);
                    v2.push_back(j);
                }
            }
        }
        for( j = 0; j<v1.size(); j++)
        {
            for(i =0; i<n; i++)
                matrix[v1[j]][i]=0;
        }
        for( j =0; j< v2.size() ; j++)
        {
            for(i =0; i<m ; i++)
                matrix[i][v2[j]] = 0;
        }
    }
};

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> final(numRows);

        for(int i=0;i<numRows;i++)  {
            final[i].resize(i+1);
            final[i][0] = final[i][i] = 1;

            for(int j=1; j<i; j++)    {
                final[i][j] = final[i-1][j-1] + final[i-1][j];
            }
        }

        return final;
    }
};

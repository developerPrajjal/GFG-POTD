class Solution{
public:	
	
	bool Check(int t,vector<vector<int>>&mat2)
    {
        int r = 0;
        int c = mat2[0].size()-1;
        while(r<mat2.size() && c>=0)
        {
            if(mat2[r][c]==t)
                return true;
            if(mat2[r][c]<t)
                r++;
            else
                c--;
        }
        return false;
    }
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
    {
        // Your code goes here
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int t = x-mat1[i][j];
                if(Check(t,mat2))
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

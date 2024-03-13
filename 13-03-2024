class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         vector<int> res;
         int n=mat.size();
         for(int sum=0;sum<2*n-1;sum++){
             if(sum&1){
                 int i=(sum>=n?sum-n+1:0),j=sum-i;
                 while(i>=0 && j>=0 && i<n && j< n){
                     res.push_back(mat[i][j]);
                     i++,j--;
                 }
             }else{
                 int j=(sum>=n?sum-n+1:0),i=sum-j;
                 while(i>=0 && j>=0 && i<n && j< n){
                     res.push_back(mat[i][j]);
                     i--,j++;
                 }
             }
         }
         return res;
    }
};

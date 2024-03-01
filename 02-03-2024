class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
        unordered_map<int,int>count;
        for(int i=0;i<n;i++){
            count[a[i]]++;
            if(count[a[i]]>=k){ return a[i]; }
        }
       return -1;
    }
};

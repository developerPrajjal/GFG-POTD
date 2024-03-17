class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        int count=0;
        unordered_map<int,int> mpp;
        while(head2!=nullptr){
            mpp[head2->data]++;
            head2=head2->next;
        }
        while(head1!=nullptr){
            if(mpp.find(x-head1->data)!=mpp.end()){
                count++;
            }
            head1=head1->next;
        }
        return count;
        
    }
};

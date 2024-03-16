class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       // Your code here
       if(del_node->next==NULL){
           del_node=NULL;
       }
       else{
       del_node->data=del_node->next->data;
       del_node->next=del_node->next->next;
       }
    }

};

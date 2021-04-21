A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.

Example 1:

Input:
LinkedList: 4->5->6
Output: 457 
Example 2:

Input:
LinkedList: 1->2->3
Output: 124 
Your Task:
Your task is to complete the function addOne() which takes the head of the linked list as the only argument and returns the head of the modified linked list. The driver code prints the number.
Note: The head represents the left-most digit of the number.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 101000
  
  ******************************************************************************************************************************************
 //Method 1 
  Node* addOne(Node *head) 
    {
        vector<int> v;
        Node* temp=head;
        while(temp){
            v.push_back(temp->data);
            temp=temp->next;
        }
        int flag=0;
        for(int i=v.size()-1;i>=0;i--){
            v[i]+=1;
            if(v[i]<10){
            flag=1;
            break;
            }
            else{
                v[i]=0;
            }
        }
        
        temp=head;
        if(flag==1){
            for(int i=0;i<v.size();i++){
            temp->data=v[i];
            temp=temp->next;
        }
        }
        else{
            head=new Node(1);
            head->next=temp;
            for(int i=0;i<v.size();i++){
            temp->data=v[i];
            temp=temp->next;
            }
        }
        
        return head;
    }



//Method 2

Node* reverse(Node* head){
        if(head==NULL)
        return head;
        Node* next=NULL,*prev=NULL, *curr=head;
        
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        if(head==NULL)
        return head;
        head = reverse(head);
        
        if(head->data<9){
            head->data+=1;
            head=reverse(head);
            return head;
        }
        else{
            Node* temp=head;
            while(temp!=NULL && temp->data==9){
                temp->data=0;
                temp=temp->next;
            }
            if(temp!=NULL)
            temp->data+=1;
            else{
                head=reverse(head);
                Node* h=new Node(1);
                h->next=head;
                head=h;
                return head;
            }
        }
        head=reverse(head);
        return head;
        
        // Your Code here
        // return head of list after adding one
    }

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode* Node;
Node addnode(int k){
    Node temp=(Node)malloc(sizeof(struct ListNode));
    temp->val=k;
    temp->next=NULL;
    return temp;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    Node ans;
    ans=(Node)malloc(sizeof(struct ListNode));
    ans->next=NULL;
    
    Node cur=ans;
    
    int carry=0;
    int val_to_push=0;
    
    int ele=(l1->val+l2->val);
    if(ele<=9){
        ans->val=ele;
    }
    else{
        ans->val=ele%10;
        carry=ele/10;
    }
        
    l1=l1->next;
    l2=l2->next;
    //cur=cur->next;
    while(l1 != NULL && l2 != NULL){
        ele=l1->val + l2->val+carry;
        if(ele<=9){
            cur->next=addnode(ele);
            carry=0;
        }
        else{
            carry=ele/10;
            val_to_push=ele%10;
            cur->next=addnode(val_to_push);
        }
        cur=cur->next;
        l1=l1->next;
        l2=l2->next;
    }
    
    if(l1==NULL && l2!=NULL){
        while(l2!=NULL){
            int ele=l2->val+carry;
            if(ele<=9){
                cur->next=addnode(ele);
                carry=0;
            }
            else{
                carry=ele/10;
                val_to_push=ele%10;
                cur->next=addnode(val_to_push);
            }
            cur=cur->next;
            l2=l2->next;            
        }
        if(carry!=0){
            cur->next=addnode(carry);
        }
    }
    
    if(l2==NULL && l1!=NULL){
        while(l1!=NULL){
            int ele=l1->val+carry;
            if(ele<=9){
                cur->next=addnode(ele);
                carry=0;
            }
            else{
                carry=ele/10;
                val_to_push=ele%10;
                cur->next=addnode(val_to_push);
            }
            cur=cur->next;
            l1=l1->next;
        }
        if(carry!=0){
            cur->next=addnode(carry);
        }
    }
    
    if(carry!=0)
      cur->next=addnode(carry);
    
    return ans;
}

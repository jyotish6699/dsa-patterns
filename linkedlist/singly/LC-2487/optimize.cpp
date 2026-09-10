class ListNode{
    public:
        int val;
        ListNode* next;
        ListNode(int val){
            this->val = val;
            next = nullptr;
        }
};

class Solution {
    ListNode* head = nullptr;
public:
    ListNode* removeNodes(ListNode* head) {
        if(head == nullptr){
            return head;
        }

        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;


        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;

        ListNode* temp = head;
        ListNode* p = temp;
        int maxs = temp->val;
        temp = temp->next;
        while(temp != nullptr){
            
            if(maxs > temp->val){
                p->next = temp->next;
                temp = temp->next;
            }else{
                maxs = temp->val;
                p = temp;
                temp = temp->next;
            }
        }

        curr = head;
        prev = nullptr;
        next = nullptr;


        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;


        return head;
    }
};
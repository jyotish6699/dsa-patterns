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

        ListNode* temp = head;
        ListNode* prev = nullptr;

        while(temp != nullptr){

            ListNode* trav = temp->next;
            bool flag = false;

            while(trav != nullptr){
                if(temp->val < trav->val){
                    flag = true;
                    break;
                }

                trav = trav->next;
            }

            if(flag){

                // Delete head
                if(temp == head){
                    head = head->next;
                    temp = head;
                }

                // Delete non-head
                else{
                    prev->next = temp->next;
                    temp = temp->next;
                }
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};
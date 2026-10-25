#include <iostream>
#include <cmath>
#include <unordered_set>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = 0, len2 = 0;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        while(temp1 != nullptr){
            len1++;
            temp1 = temp1->next;
        }

        while(temp2 != nullptr){
            len2++;
            temp2 = temp2->next;
        }

        int d = abs(len1 - len2);

        ListNode* t1 = headA;
        ListNode* t2 = headB;

        if(len1 > len2){
            for(int i=0; i<d; i++){
                t1 = t1->next;
            }

        }else if(len2 > len1){
            for(int i=0; i<d; i++){
                t2 = t2->next;
            }

        }

        while(t1 != nullptr && t2 != nullptr){
            if(t1 == t2){
                return t1;
            }

            t1 = t1->next;
            t2 = t2->next;
        }

        return nullptr;

    }
};
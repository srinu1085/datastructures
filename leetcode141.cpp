//linked list cycle 

if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode *low=head;
        ListNode *high=head;
        while(low->next && low->next->next){
            low=low->next;
            if(low==high){
                return true;
            }
            low=low->next;
            if(low==high){
                return true;
            }
            high=high->next;
        }
        return false;

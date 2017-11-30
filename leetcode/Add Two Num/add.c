
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p1=NULL, *p2=NULL,*p3=NULL;
    p1=l1;
    p2=l2;
    struct ListNode *sumList;
    int carry=0,temp;
    while((p1!=NULL) || (p2!=NULL))
    {
       if(p3==NULL)
       {
           sumList=(struct ListNode*)(malloc(sizeof(struct ListNode)));
           p3=sumList;
           p3->next=NULL;
           temp=(p1->val+p2->val);
           if(temp>=10)
           {
              carry=1; 
           }
           p3->val=(temp%10);
           if(p1!=NULL)
           p1=p1->next;
           if(p2!=NULL)
           p2=p2->next;
       }
        else if(p1==NULL)
        {
            struct ListNode *new=(struct ListNode*)(malloc(sizeof(struct ListNode)));
            p3->next=new;
            p3=p3->next;
            p3->next=NULL;
            temp=(p2->val)+carry;
            if(temp>=10)
           {
              carry=1; 
           }
            else
            {
                carry=0;
            }
            p3->val=(temp%10);
            p2=p2->next;
            
        }
        else if(p2==NULL)
        {
            struct ListNode *new=(struct ListNode*)(malloc(sizeof(struct ListNode)));
            p3->next=new;
            p3=p3->next;
            p3->next=NULL;
            temp=(p1->val)+carry;
            if(temp>=10)
           {
              carry=1; 
           }
            else
            {
                carry=0;
            }
            p3->val=(temp%10);
            p1=p1->next;
            
        }
        else 
        {
            struct ListNode *new=(struct ListNode*)(malloc(sizeof(struct ListNode)));
            p3->next=new;
            p3=p3->next;
            p3->next=NULL;
            temp=(p1->val+p2->val)+carry;
            if(temp>=10)
           {
              carry=1; 
           }
            else
            {
                carry=0;
            }
            p3->val=(temp%10);
            p1=p1->next;
            p2=p2->next;
        }
    }
    if(carry==1)
    {
            struct ListNode *new=(struct ListNode*)(malloc(sizeof(struct ListNode)));
            p3->next=new;
            p3=p3->next;
            p3->next=NULL;
            p3->val=carry;
    }
return sumList;
}
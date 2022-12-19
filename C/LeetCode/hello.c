if(head->next==NULL)
    {
        return head;
    }
    else
    {
        struct node *ptr1=NULL;
        struct node *ptr2=head;
        while(1)
        {
            ptr1=ptr2;
            ptr2=ptr2->next;
            if(ptr2->next==NULL)
            {
                ptr2->next=head;
                ptr1->next=NULL;
                ptr1=NULL;
                head=ptr2;
                k--;
                if(k==0)
                {
                    break;
                }
            }
        }
        return head;
    }
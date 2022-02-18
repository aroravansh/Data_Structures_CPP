//Check if the given list is palindrome 
void palindrome(node* head)
{
    if(!head || !head->next)
    {
        cout<<"Palindrome!!\n";
        return;
    }
    node* mid = head;
    node* end= head;
    while(end->next && end->next->next)
    {
        mid = mid->next;
        end = end->next->next;
    }
    if(end->next!= NULL)
    {
        end = end->next;
    }
    //cout<<mid->data<<" "<<end->data<<"\n";
    end = reverse(mid->next);
    mid->next = NULL;
    //printList(head);
    //printList(end);
    node* temp = head; node* tmp = end; int c = 0;
    while(temp && tmp)
    {
        if(temp->data != tmp->data)
        {
            cout<<"Not Palindrome\n"; c=1; break;
        }
        temp = temp->next;
        tmp = tmp->next;
    }
    if(c==0)
    {
        cout<<"Palindrome\n";
    }
    //Reconnecting  the orignal linked list
    end = reverse(end);
    mid->next = end;
}

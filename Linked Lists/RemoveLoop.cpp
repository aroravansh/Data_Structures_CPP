//Detecting loop and removing it if present in the given list
void detectLoopAndRemove(node* head)
{
    if(head == NULL || head->next == NULL)
    {
        cout<<"No Cycle!!"; return;
    }
    node* slow = head; node* fast = head;
    while(slow && fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
        {
            cout<<"Cycle Detected! Removing ....."<<"\n";
            break;
        }
    }
    if(fast == slow)
    {
        slow = head;
        while(slow !=fast)
        {
            fast = fast->next;
            slow = slow->next;
        }
        while(fast->next != slow)
        {
            fast = fast->next;
        }
        fast->next = NULL;
    }
}

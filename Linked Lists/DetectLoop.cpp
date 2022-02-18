//Detecting Loop in the given list  ****Floyd Cycle Algo****
void detectLoop(node* head)
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
            cout<<"Cycle Detected!"<<"\n";
            return;
        }
    }
    cout<<"No cycle!"<<"\n";
}

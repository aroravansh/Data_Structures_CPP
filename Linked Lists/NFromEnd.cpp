//Printing nth node from end
int nFromEnd(node* head,int pos)
{
    if(head == NULL)
    {
        cout<<"Error!"; exit(1);
    }
    node* tmp = head;
    while(--pos && head->next!=NULL)
    {
        head = head->next;
    }
    while(head->next!=NULL)
    {
        tmp = tmp->next;
        head = head->next;
    }
    return tmp->data;
}

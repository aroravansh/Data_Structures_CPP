//Printing the middle element of the list
int midele(node* head)
{
    if(head == NULL)
    {
        cout<<"Error!"; exit(1);
    }
    node* tmp = head;
    while(head->next!= NULL && head->next->next != NULL)
    {
        head = head->next->next;
        tmp = tmp->next;
    }
    return tmp->data;
    
}

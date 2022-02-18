//Reversing a linked list using recursion
node* reverse(node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    node* rev = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return rev;
}

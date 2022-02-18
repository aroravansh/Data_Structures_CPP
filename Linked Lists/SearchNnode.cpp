//Searching a node in the given list using recursion
int searchNode(node* head,int d)
{
    static int c = 1;
    if(head == NULL)
    {
        cout<<"Element Not found!"; return -1;
    }
    if(head->data == d)
    {
        return c;
    }
    c++;
    return searchNode(head->next,d);
}

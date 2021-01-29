#include <iostream>
#include <stdlib.h>
using namespace std;
/*
C++ Program on basics of linked list. A menu type program which includes all basic functions to be performed in linked list
Diff operations are:
1. Insertion
  a. Insertion at begnning of the linked list
  b. Insertion at the end of the linked list
  c. Insertion at a given position of the linked list
2. Deletion
  a. Deletion at begnning of the linked list
  b. Deletion at the end of the linked list
  c. Deletion of a given node of the linked list
3. Traversal of the linked list
*/
class Node
{
public:
    int data;
    Node *next;
    Node(int info)
    {
        this->data = info;
        this->next = NULL;
    }
};
void printList(Node *node);
void insert_beg(Node **head, int newdata);
void insert_end(Node **head, int newdata);
void insert_pos(Node **curr, int newdata, int posi);
void del_beg(Node **head);
void del_end(Node *head);
void del_key(Node **head, int key);
int main()
{
    char ch = 'y';
    int opt, x, datas;
    Node *linked_list = NULL;
    while (ch == 'y')
    {
        system("CLS");
        cout << "\t\t\t\t\tLinked Lists" << endl;
        cout << "\t\t\t\t\t************" << endl
             << endl
             << endl
             << endl;
        cout << "1. Insertion" << endl;
        cout << "2. Deletion" << endl;
        cout << "3. Traversal" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice:\n";
        cin >> opt;
        if (opt == 1)
        {
            system("CLS");
            cout << "\t\t\t\t\tInsertion" << endl;
            cout << "\t\t\t\t\t*********" << endl
                 << endl
                 << endl
                 << endl;
            cout << "1. Insertion at begnning" << endl;
            cout << "2. Insertion at end" << endl;
            cout << "3. Insertion at a given position" << endl;
            cout << "Enter your choice:\n";
            cin >> x;
            if (x == 1)
            {
                cout << "Enter value of node:\n";
                cin >> datas;
                insert_beg(&linked_list, datas);
            }
            else if (x == 2)
            {
                cout << "Enter value of node:\n";
                cin >> datas;
                insert_end(&linked_list, datas);
            }
            else if (x == 3)
            {
                int pos;
                cout << "Enter value of node:\n";
                cin >> datas;
                cout << "Enter the position:\n";
                cin >> pos;
                insert_pos(&linked_list, datas, pos);
            }
            else
            {
                cout << "Try Again, wrong input\n";
            }
        }
        else if (opt == 2)
        {
            system("CLS");
            cout << "\t\t\t\t\tDeletion" << endl;
            cout << "\t\t\t\t\t********" << endl
                 << endl
                 << endl
                 << endl;
            cout << "1. Deletion at begnning" << endl;
            cout << "2. Deletion at end" << endl;
            cout << "3. Deletion of a given node" << endl;
            cout << "Enter your choice:" << endl;
            cin >> x;
            if (x == 1)
            {
                del_beg(&linked_list);
            }
            else if (x == 2)
            {
                del_end(linked_list);
            }
            else if (x == 3)
            {
                cout << "Enter value of node to be deleted:\n";
                cin >> datas;
                del_key(&linked_list, datas);
            }
            else
            {
                cout << "Try Again, wrong input\n";
            }
        }
        else if (opt == 3)
        {
            system("CLS");
            cout << "The linked list is:" << endl;
            printList(linked_list);
            cout << "\nDo you want to perform more(y)?(Anything else to exit)" << endl;
            cin >> ch;
        }
        else if (opt == 4)
        {
            cout << "Exiting.....";
            ch = 'n';
        }
        else
        {
            cout << "Wrong Input!!Try again...";
        }
    }
    return 0;
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
void insert_beg(Node **head, int newdata)
{
    Node *node = new Node(newdata);
    node->next = *head;
    *head = node;
}
void insert_end(Node **head, int newdata)
{
    Node *node = new Node(newdata);
    Node *last = *head;
    if (*head == NULL)
    {
        *head = node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = node;
    return;
}
void insert_pos(Node **curr, int newdata, int posi)
{
    if (posi < 1)
    {
        cout << "Invalid position!" << endl;
        return;
    }
    else
    {
        while (posi--)
        {
            if (posi == 0)
            {
                Node *temp = new Node(newdata);
                temp->next = *curr;
                *curr = temp;
            }
            else
                curr = &(*curr)->next;
        }
    }
}
void del_beg(Node **head)
{
    if (*head == NULL)
    {
        cout << "Underflow!! Cant Delete, try again...\n";
        return;
    }
    cout << "Deleting node....\n";
    Node *temp = *head;
    *head = temp->next;
    free(temp);
}
void del_end(Node *head)
{
    if (head == NULL)
    {
        cout << "Underflow!! Cant Delete, try again...\n";
    }
    cout << "Deleting node....\n";
    Node *temp = head;
    Node *curr = head;
    while (temp->next != NULL)
    {
        curr = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = NULL;
    }
    else
    {
        curr->next = NULL;
    }
    free(temp);
}
void del_key(Node **head, int key)
{
    if (*head == NULL)
    {
        cout << "Underflow!! Cant Delete, try again...\n";
    }
    Node *temp = *head;
    Node *prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Key not found!! Try again\n";
        return;
    }
    prev->next = temp->next;
    free(temp);
}

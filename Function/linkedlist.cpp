#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;
void insertNode(int value);
void display();
void deleteNode(int value);
void insertBeginning(int value);
void deleteBeginning();
void deleteEnd();
int main()
{
    insertNode(5);
    insertNode(10);
    insertNode(15);
    insertNode(7);
    display();
    deleteNode(15);
    display();
    insertBeginning(15);
    display();
    deleteBeginning();
    display();
    deleteEnd();
    display();
    return 0;
}
void insertNode(int value)
{
    node *new_node, *last;
    new_node = new node;
    new_node->data = value;
    if (head == NULL)
    {
        head = new_node;
        new_node->next = NULL;
    }
    else
    {
        last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
        new_node->next = NULL;
    }
}
void display()
{
    if (head == NULL)
    {
        cout << "The linked list is empty." << endl;
    }
    else
    {
        node *current_node;
        current_node = head;
        while (current_node != NULL)
        {
            cout << current_node->data << "\t";
            current_node = current_node->next;
        }
    }
    cout << endl;
}
void deleteNode(int value)
{
    node *current, *previous;
    current = head;
    if (current->data == value)
    {
        head = current->next;
        free(current);
        return;
    }
    while (current->data != value)
    {
        previous = current;
        current = current->next;
    }
    previous->next = current->next;
    free(current);
}
void insertBeginning(int value)
{
    node *new_node;
    new_node = new node;
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}
void deleteBeginning()
{
    node *beginning;
    beginning = head;
    if (head == NULL)
    {
        cout << "There is nothing to delete" << endl;
    }
    else
    {
        head = beginning->next;
        delete (beginning); // free memory
    }
}
void deleteEnd()
{
    if (head == NULL)
    {
        cout << "There is nothing to delete." << endl;
    }
    else if (head->next == NULL)
    {
        delete (head);
        head = NULL;
    }
    else
    {
        node *ptr;
        ptr = head;
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        delete (ptr->next);
        ptr->next = NULL;
    }
}
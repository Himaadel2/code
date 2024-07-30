#include <iostream>
using namespace std;

class node {
public:
    int em;
    node* next;
};

class linkedlist {
public:
    node* header;
    linkedlist() {
        header = NULL;
    }
    bool isfull() {
        return (header == NULL);
    }

    void create_new_employee(int e) {

        if (isfull()) {
        node* newemployee ;
        newemployee->em = e;
        	newemployee->next = NULL;
            header = newemployee;
            
        } else {
            node* newemployee ;
            newemployee->next = header;
            header = newemployee;
        }
    }
    void display() {
        node* temp = header;
        while (temp != NULL) {

cout<<temp->em;
            temp = temp->next;
        }
    }

};

int main() {
	 linkedlist ls;
    ls.create_new_employee(3);
    ls.display();

}
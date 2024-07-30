#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data) : data(data), next(NULL) {}
};

void insertAtEnd(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

void saveListToFile(Node *head, const string &filename)
{
    ofstream file(filename,ios::app);
    Node *current = head;
    while (current != NULL)
    {
        file << current->data << endl;
        current = current->next;
    }
    file.close();
}

int main()
{
    Node *head = NULL;
    insertAtEnd(head, 55);
    insertAtEnd(head, 66);
    insertAtEnd(head, 9959);

    saveListToFile(head, "test.txt");

    // Clean up memory
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    // Open the input file named "example.txt"
    ifstream inputFile("test.txt");

    // Check if the file is successfully opened
    if (!inputFile.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    string line;
    // Read each line of the file and print it to the console
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}


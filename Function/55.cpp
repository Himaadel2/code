#include <iostream>
#include <cstring> // For string manipulation

// Define a struct for Employee
struct Employee {
    char name[100];
    int id;
    double salary;
    char dateOfJoining[20];
    Employee* next; // Pointer to the next employee
};

// Global pointer to the head of the linked list
Employee* head = NULL;

// Function declarations
void addEmployee(const Employee& emp);
void displayEmployees();
Employee* searchEmployee(int id);

// Main function
int main() {
    // Example usage
    Employee emp1 = {"John Doe", 1001, 50000.0, "2022-01-15", NULL};
    Employee emp2 = {"Alice Smith", 1002, 60000.0, "2022-02-20", NULL};

    addEmployee(emp1);
    addEmployee(emp2);

    displayEmployees();

    // Other functionalities can be implemented here

    return 0;
}

// Function definitions
void addEmployee(const Employee& emp) {
    // Create a new node for the employee
    Employee* newNode = new Employee;
    std::strcpy(newNode->name, emp.name);
    newNode->id = emp.id;
    newNode->salary = emp.salary;
    std::strcpy(newNode->dateOfJoining, emp.dateOfJoining);
    newNode->next = nullptr;

    // If the list is empty, set the new node as the head
    if (!head) {
        head = newNode;
    } else {
        // Otherwise, find the last node and append the new node
        Employee* curr = head;
        while (curr->next) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

void displayEmployees() {
    Employee* curr = head;
    while (curr) {
        std::cout << "Name: " << curr->name << ", ID: " << curr->id
                  << ", Salary: " << curr->salary << ", Date of Joining: " << curr->dateOfJoining << std::endl;
        curr = curr->next;
    }
}

Employee* searchEmployee(int id) {
    Employee* curr = head;
    while (curr) {
        if (curr->id == id) {
            return curr;
        }
        curr = curr->next;
    }
    return nullptr;
}

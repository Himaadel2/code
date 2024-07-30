#include <iostream>

using namespace std;
struct employee {
    string name, date_of_joining, work_status;
    double salary;
    int ID;
};
struct work {
    employee data;
    work *next;
};
//struct notwork{
//    employee data;
//    notwork *next;
//};
work *head = NULL;

//notwork *head1 = NULL;
void add();

void update();

void display();

void sort();

void Delete();

void Search();

void Change();

void update_e(int);

void print(int);

int main() {
    string s;
    int x = 0;
    while (true) {
        if (x == 0) {
            cout << "Are you a Manager or an Employee? or exit\n";
            cin >> s;
        }
        if (s == "manager" || s == "Manager") {
            cout << "1- Add employee\n"
                    "2- Update information of employees\n"
                    "3- Display information of employees\n"
                    "4- Sort employees by ID\n"
                    "5- Delete information of employees\n"
                    "6- Search employees by ID\n"
                    "7- Change of work status\n"
                    "0- Exit\n"
                    "enter number of process\n";
            cin >> x;
//            system("cls");
            switch (x) {
                case 1:
                    add();
                    break;
                case 2:
                    update();
                    break;
                case 3:
                    display();
                    break;
                case 4:
                    sort();
                    break;
                case 5:
                    Delete();
                    break;
                case 6:
                    Search();
                    break;
                case 7:
                    Change();
                    break;
            }
        } else if (s == "employee" || s == "Employee") {
            int a;
            if (head == NULL)
                cout << "There are no information." << endl;
            else {
                cout << "enter your ID:";
                cin >> a;
                bool y = false;
                work *ptr = head;
                while (ptr != NULL) {
                    if (a == ptr->data.ID) {
                        y = true;
                        cout << "1- Update your information\n"
                                "2- Display your information\n"
                                "3- Sort employees by ID\n"
                                "0- Exit\n"
                                "enter number of process\n";
                        cin >> x;
                        switch (x) {
                            case 1:
                                update_e(a);
                                break;
                            case 2:
                                print(a);
                                break;
                            case 3:
                                sort();
                                break;
                        }
                    }
                    ptr = ptr->next;
                }
                if (y == false) {
                    cout << "Employee ID not found.\n";
                    cout << "=============================\n";
                }
            }
        } else if (s == "exit" || s == "Exit")
            return 0;
        else {
            cout << "enter manager or employee or exit\n";
            cin >> s;
            x = -1;
        }
    }
}

void add() {
    work *new_node = new work;
    cout << "enter ID:";
    cin >> new_node->data.ID;
    work *current = head;
    while (current != NULL) {
        if (new_node->data.ID == current->data.ID) {
            cout << "ID already exists.\n";
            cout << "=============================\n";
            delete new_node;
            return;
        }
        current = current->next;
    }
    cout << "enter Name:";
    cin.ignore();
    getline(cin, new_node->data.name);
    cout << "enter Salary:";
    cin >> new_node->data.salary;
    cout << "enter Date_of_joining:";
    cin.ignore();
    getline(cin, new_node->data.date_of_joining);
    new_node->data.work_status = "work";
    if (head == NULL) {
        head = new_node;
    } else {
        work *last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
    }
    new_node->next = NULL;
    cout << "=============================\n";
}

void update() {
    if (head == NULL)
        cout << "There are no information." << endl;
    else {
        int z;
        char c;
        cout << "Enter an employee ID form\n";
        cin >> z;
        work *ptr = head;
        while (ptr != NULL) {
            if (z == ptr->data.ID) {
                cout << "Are you need change ID? y or n";
                cin >> c;
                if (c == 'y' || c == 'Y') {
                    cout << "enter ID:";
                    cin >> ptr->data.ID;
                }
                cout << "Are you need change name? y or n";
                cin >> c;
                if (c == 'y' || c == 'Y') {
                    cout << "enter name:";
                    cin.ignore();
                    getline(cin, ptr->data.name);
                }
                cout << "Are you need change salary? y or n";
                cin >> c;
                if (c == 'y' || c == 'Y') {
                    cout << "enter salary:";
                    cin >> ptr->data.salary;
                }
                cout << "Are you need change date of joining? y or n";
                cin >> c;
                if (c == 'y' || c == 'Y') {
                    cout << "enter date of joining:";
                    cin.ignore();
                    getline(cin, ptr->data.date_of_joining);
                }
                cout << "Employee information update successfully.\n";
                cout << "=============================\n";
                return;
            }
            ptr = ptr->next;
        }
        cout << "Employee ID not found.\n";
    }
    cout << "=============================\n";
}

void display() {
    if (head == NULL)
        cout << "There are no information." << endl;
    else {
        work *ptr = head;
        while (ptr != NULL) {
            cout << "ID:" << ptr->data.ID << "\nName:" << ptr->data.name << "\nSalary:" << ptr->data.salary
                 << "\nDate of joining:" << ptr->data.date_of_joining << "\nwork_status:" << ptr->data.work_status
                 << endl;
            cout << "=============================\n";
            ptr = ptr->next;
        }
    }
}

void sort() {
    if (head == NULL)
        cout << "There are no information." << endl;
    else {
        bool swapped;
        work *ptr;
        work *last = NULL;

        do {
            swapped = false;
            ptr = head;

            while (ptr->next != last) {
                if (ptr->data.ID > ptr->next->data.ID) {
                    // Swap data
                    swap(ptr->data, ptr->next->data);
                    swapped = true;
                }
                ptr = ptr->next;
            }
            last = ptr;
        } while (swapped);

        cout << "Employees sorted by ID.\n";
        cout << "=============================\n";
    }
}

void Delete() {
    if (head == NULL) {
        cout << "There are no information." << endl;
    } else {
        int z;
        cout << "Enter an employee ID form\n";
        cin >> z;
        work *ptr = head;
        work *prev = NULL;
        while (ptr != NULL) {
            if (z == ptr->data.ID) {
                if (prev == NULL) {
                    head = ptr->next;
                } else {
                    prev->next = ptr->next;
                }
                delete ptr;
                cout << "Employee deleted successfully.\n";
                cout << "=============================\n";
                return;
            }
            prev = ptr;
            ptr = ptr->next;
        }
        cout << "Employee ID not found.\n";
    }
    cout << "=============================\n";
}

void Search() {
    if (head == NULL)
        cout << "There are no information." << endl;
    else {
        int z;
        cout << "Enter an employee ID form\n";
        cin >> z;
        work *ptr = head;
        while (ptr != NULL) {
            if (z == ptr->data.ID) {
                cout << "Found.\n";
                cout << "ID:" << ptr->data.ID << "\nName:" << ptr->data.name << "\nSalary:" << ptr->data.salary
                     << "\nDate of joining:" << ptr->data.date_of_joining << "\nwork_status:" << ptr->data.work_status
                     << endl;
                cout << "=============================\n";
                return;
            }
            ptr = ptr->next;
        }
        cout << "Employee ID not found.\n";
    }
    cout << "=============================\n";
}

void Change() {
    if (head == NULL)
        cout << "There are no information." << endl;
    else {
        int z;
        cout << "Enter an employee ID form\n";
        cin >> z;
        work *ptr = head;
        while (ptr != NULL) {
            if (z == ptr->data.ID) {
                if (ptr->data.work_status == "work")
                    ptr->data.work_status = "not work";
                else
                    ptr->data.work_status = "work";
                cout << "Done.\n";
                cout << "=============================\n";
                return;
            }
            ptr = ptr->next;
        }
        cout << "Employee ID not found.\n";
        cout << "=============================\n";
    }
}

void update_e(int id) {
    work *ptr = head;
    char c;
    while (ptr != NULL) {
        if (id == ptr->data.ID) {
            cout << "Are you need change ID? y or n";
            cin >> c;
            if (c == 'y' || c == 'Y') {
                cout << "enter ID:";
                cin >> ptr->data.ID;
            }
            cout << "Are you need change name? y or n";
            cin >> c;
            if (c == 'y' || c == 'Y') {
                cout << "enter name:";
                cin.ignore();
                getline(cin, ptr->data.name);
            }
            cout << "Are you need change salary? y or n";
            cin >> c;
            if (c == 'y' || c == 'Y') {
                cout << "enter salary:";
                cin >> ptr->data.salary;
            }
            cout << "Are you need change date of joining? y or n";
            cin >> c;
            if (c == 'y' || c == 'Y') {
                cout << "enter date of joining:";
                cin.ignore();
                getline(cin, ptr->data.date_of_joining);
            }
            cout << "Are you need change work status? y or n";
            cin >> c;
            if (c == 'y' || c == 'Y') {
                if (ptr->data.work_status == "work")
                    ptr->data.work_status = "not work";
                else
                    ptr->data.work_status = "work";
            }
            cout << "Employee information update successfully.\n";
            cout << "=============================\n";
            return;
        }
        ptr = ptr->next;
    }
}

void print(int id) {
    work *ptr = head;
    while (ptr != NULL) {
        if (id == ptr->data.ID) {
            cout << "ID:" << ptr->data.ID << "\nName:" << ptr->data.name << "\nSalary:" << ptr->data.salary
                 << "\nDate of joining:" << ptr->data.date_of_joining << "\nwork_status:" << ptr->data.work_status
                 << endl;
            cout << "=============================\n";
            return;
        }
        ptr = ptr->next;
    }
}
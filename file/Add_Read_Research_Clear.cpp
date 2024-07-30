#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string name;
    string line;
    int x,age,id,c;
    string line1;
    bool found= false,z=1;
    fstream file1;
    while (z)
    {
        cout<<"1-Add\n2-Read\n3-Research\n4-Clear\n5-exit\nenter number operation\n";
        cin>>x;
        switch (x)
        {
        case 1:
            cout<<"enter id\n";
            cin>>id;
            cout<<"enter name\n";
            cin>>name;
            cout<<"enter age\n";
            cin>>age;
            file1.open("C:\\Users\\HIMA\\Desktop\\New folder\\New folder (2)\\file.txt",ios::app);
            if(file1)
                file1<<id<<" "<<name<<" "<<age<<"\n";
            else
                cout<<"error";
            file1.close();
            break;
        case 2:
            file1.open("C:\\Users\\HIMA\\Desktop\\New folder\\New folder (2)\\file.txt",ios::in);
            if(file1){
                while(getline(file1,line))
                    cout<<line<<"\n";
            }
            else
                cout<<"error";
            file1.close();
            break;
        case 3:
            cout<<"enter id to Research\n";
            cin>>c;
            file1.open("C:\\Users\\HIMA\\Desktop\\New folder\\New folder (2)\\file.txt",ios::in);
            if(file1){
                while (getline(file1,line1))
                {
                    istringstream num(line1);
                    int num1;
                    while(num>>num1){
                        if(num1==c){
                            cout << "Found at line : " << line1 << "\n";
                            found = true;
                        }
                    }
                }
            }
            else
                cout<<"error";
            if (!found)
                cout << "not found in the file.";
            break;
            case 4:
                file1.open("C:\\Users\\HIMA\\Desktop\\New folder\\New folder (2)\\file.txt", ios::out | ios::trunc);
                file1.close();
                cout<<"clear\n";
                break;
            case 5:
                z=0;
                break;
}
}
}
#include <iostream>
using namespace std;
class user{
	private :
		string name;
//		static int conuter;
	public :
		static int conuter;
		user(){
			name="hima";
			conuter++;
		}
		void setname(string name){
			this->name=name;
		}
		void getname(){
			cout<<name;
		}
		static void coun(){
			cout<<"static:"<<conuter;
		}
};
int user::conuter=0;
void co(){
    static int con=0;
    con++;
    cout<<con<<"\t";
}
void c(){
    int con=0;
    con++;
    cout<<con<<"\n";
}
int main(){
	user u1;
	cout<<user::conuter<<"\n";//||u1.conuter public
	u1.coun();//private
	cout<<"\n";
	user u2,u3;
	user::coun();
	user u4[100];
	cout<<"\n";
	u4[5].coun();
	cout<<"\nstatic\tno static\n";
    for(int i=0;i<20;i++){
        co();
        c();
    }
}
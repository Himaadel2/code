#include<iostream>
using namespace std;
int main(){
	int age;
	try{
		cout<<"enter age:";
		cin>>age;
		if(age<0){
			cout<<"hhhh********\n";
			throw age;
//			throw 10;
			cout<<"hhhh";
		}
		else if(age==0){
		throw "age=0";
		}
		else{
			cout<<"age:"<<age;
		}
	}
//	cout<<"kkk\n";//error

//	catch(int a){
//		cout<<"error:"<<a;
//	}
	catch(const char * s ){
		cout<<s;
	}
		catch (...){
		cout<<"+++++++++\n";
	}
	
}
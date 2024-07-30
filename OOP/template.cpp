#include <iostream>
using namespace std;
template<typename f>
void c(f x){
    cout<<"x: "<<x<<"\n";
}
template<class f>
void c(f x,f y){
    cout<<"x: "<<x<<"\n"<<"y: "<<y<<"\n";
}
template<class f,class h>
void c(f x,h y){
    cout<<"x: "<<x<<"\n"<<"y: "<<y<<"\n";
}
template<class f,class h,class k>
void c(f x,h y,k z){
    cout<<"sum: "<<x+y+z<<"\n";
}
template<class te>
class cu{
	private:
		te x,y;
	public:
		cu(te x,te y):x(x),y(y){}
		void add(){
			cout<<"x+y: "<<x+y<<"\n";
		}
		void mul();
};
template<class te>
void cu<te>::mul(){
	cout<<"x*y: "<<x*y<<"\n";
}
//template Specialization
template<class te>
class sp{
public:
	sp(te t){
		cout<<t<<": is not int\n";
	}
};
template<>
class sp<int>{
public:
	sp(int t){
		cout<<t<<": is  int\n";
	}
};
int main(){
	c(5);
	c("hhhh");
	c(true);
	c(5.5);
	c(5.5,"ttt");//error  2      true   3
	c(5.5,4.6);
	cout<<"=====================\n";
	c(5.5,6,5.2);
	c<int>(5.5,6,5.2);
	c<int,int>(5.5,6,5.2);
	c<int,int,int>(5.5,6,5.2);
	cu <int>c(5,6);
	//cu c(5,6);//error
	c.add();
	c.mul();
	cout<<"=====================\n";
	sp <int>s(5);
	sp <string>s1("kkk");
}

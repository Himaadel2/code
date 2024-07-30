//اذا يوجد 1 في عناصر المصفوفه 
//اطبع hard ولو 0 اطبع esay
#include <iostream>
using namespace std;
int main(){
int n;
bool c=0;
cin>>n;
int arr[n];
for(int i=0;i<n;++i){
	cin>>arr[i];
	if(arr[i]==1)
	    c=1;
}
if(c==1)
	cout<<"HARD";
else
    cout<<"EASY";
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,z=0,y=0;//y=0===y(0)
cin>>n;
int x[n];
for(int i=0;i<n;++i)
cin>>x[i];
for(int i=0;i<n;++i){
for(int j=0;j<n;++j){
	if(i!=j){
	if(x[i]>x[j])
	z=j+1;
else if(x[i]==x[j])
y++;
}	
}
if(y==0)
cout<<z;
else
cout<<"Still Rozdil";
/*

   int n,c=0;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        
    }

*/
}
}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
long long k;
int n,z=0;
cin>>n>>k;
int x[n];
if(k>500)
k=n;
for(int i=0;i<n;++i)
cin>>x[i];
for(int i=0;i<k;++i){
for(int j=0;j<k;++j)
	if(x[i]>x[j])
	z=x[i];
}
cout<<z;
}*/
/*
#include <iostream>
using namespace std;
int main(){
    int n, f, total(0), answer(0);
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> f;
        total += f;
    }
    for (int i = 1; i <= 5; ++i){
        if ((total + i) % (n + 1) != 1)
            answer += 1;
    }
    cout << answer << endl;
}//w
*/









// int t;
// cin>>t;
//     while (t--){
//         bool f= false;
//         int n;
//         cin>>n;
//         int a[n];
//         for (int i = 0; i < n; ++i)
//             cin>>a[i];
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < n; ++j) {
//                 double x=(pow(a[i],3)+pow(i+1,3))/(pow(a[j],3)+pow(j+1,3));
//                 double y=(a[i]+(i+1))/(a[j]+(j+1));
//                 if((x==y)&&(i!=j)&&(x!=0.0)){
//                     cout<<x<<"\n*"<<y<<"\n"<<i<<" "<<j<<"\n";
// //                    cout<<i+j<<"\n";
//                     f = true;
//                     break;
//                 }
//             }
//             if (f)
//                 break;
//         }
//     }
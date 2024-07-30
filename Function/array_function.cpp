#include <iostream>
using namespace std;
int arr[8];
void in()
{
    cout << "enter 6 element\n";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
}
void out()
{
    cout << "element array\n";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
void avg()
{
    int sum = 0;
    cout << "\naverage element array\n";
    for (int i = 0; i < 6; i++)
    {
        sum += arr[i];
    }
    cout << sum / 6 << "\n";
}
void max()
{
    cout << "max element array\n";
    int max = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << max << "\n";
}
void min()
{
    cout << "min element array\n";
    int min = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << min << "\n";
}
void sort()
{
    cout << "element array\n";
    for (int i = 0; i < 6 ; ++i) {
        for (int j = 0; j < 5 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void sea()
{
    int x;
    bool b = 0;
    cout << "enter element \n";
    cin >> x;
    for (int i = 0; i < 6; i++)
    {
        if (x == arr[i])
            b = 1;
    }
    if (b == 1)
    {
        cout << "found\n";
    }
    else
        cout << "not found\n";
}
void marg(const int arr1[],const int arr2[]){
    int marg[12],x=0;
    for (int i=0;i<6;++i){
        if(arr1[i]<arr2[i]){
            marg[x]=arr1[i];
            x++;
            marg[x]=arr2[i];
            x++;
        }
        else{
            marg[x]=arr2[i];
            x++;
            marg[x]=arr1[i];
            x++;
        }
    }
    cout<<"marg two array: ";
    for (int & i : marg){
        cout<<i<<"\t";
    }
    cout<<"\n";

}
void insert( int arr3[]){
    cout <<"enter number\n";
    int x;
    cin>>x;
    for (int i=4;i>-1;--i){
        if(x>arr3[i]){
            arr3[i+1]=x;
            break;
        }
        arr3[i+1]=arr3[i];
    }
    if(x<arr3[0])
        arr3[0]=x;
    for (int i=0;i<6;i++){
        cout<<arr3[i]<<"\t";
    }
}
int main()
{
    in();
    out();
    avg();
    max();
    min();
    sea();
    sort();
    int arr1[6],arr2[6],arr3[6]={19,32,44,56,69};
    int x=1;
    for (int & i : arr1){
        i=x;
        x+=2;
    }
    x=0;
    for (int & i : arr2){
        i=x;
        x+=2;
    }
    marg(arr1,arr2);
    insert(arr3);
}
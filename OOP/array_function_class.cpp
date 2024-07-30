#include <iostream>
using namespace std;
class arr1{
	private:
    int arr[8];
    public:
    void in()
{
    cout << "enter 6 element\n";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
}
    void in1()
{
    for (int i = 0; i < 6; i++)
    {
        arr[i]=i*2;
    }
}
    void in2()
{
    arr[0]=4;
    arr[1]=9;
    arr[2]=8;
    arr[3]=66;
    arr[4]=98;
    arr[5]=100;
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
}
};
int main(){
    arr1 x1,x2,x3;
    x1.in();
    x1.out();
    x1.avg();
    x1.max();
    x1.min();
    x1.sea();
    x1.sort();

    cout<<"======================\n";

    x2.in1();
    x2.out();
    x2.avg();
    x2.max();
    x2.min();
    x2.sea();
    x2.sort();

    cout<<"======================\n";

    x3.in2();
    x3.out();
    x3.avg();
    x3.max();
    x3.min();
    x3.sea();
    x3.sort();

}
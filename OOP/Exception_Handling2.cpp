#include <iostream>
using namespace std;
class big
{
public:
    big(int x)
    {
        cout << "big index:" << x << "\n";
    }
    big()
    {
        cout << "big index:49+i\n";
    }
};
class stu
{
private:
    int deg[50];

public:
    stu()
    {
        for (int i = 0; i < 50; i++)
        {
            deg[i] = i + 1;
        }
    }
    void getd(int i)
    {
        cout << deg[i] << "\n";
    }
    //		void getd(int i){
    //		try{
    //		if(i<0){
    //			throw Small();
    //		}
    //		else if(i>49){
    //			throw big(6);
    //		}
    //		else{
    //			cout<<deg[i]<<"\n";
    //		}
    //		}
    //		catch(Small){
    //			cout<<"small index\n";
    //		}
    //		catch(big ){
    //			cout<<"big index\n";
    //		}
    //		}

    class Small
    {
    }; // insted class
};
int main()
{
    stu s;
    int i;
    //		cout<<"enter deg:";
    //		cin>>i;
    try
    {
        cout << "enter deg:";
        cin >> i;
        if (i < 0)
        {
            throw stu::Small();
        }
        else if (i > 49)
        {
            throw big(6);
        }
        else
        {
            s.getd(i);
        }
    }
    catch (stu::Small)
    {
        cout << "small index\n";
    }
    catch (big)
    {
        cout << "big index\n";
    }
    // s.getd();
}
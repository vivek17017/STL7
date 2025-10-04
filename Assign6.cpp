#include<iostream>
using namespace std;
#include<list>
#include<vector>
#include<algorithm>
void f1()
{
    list<string>l1={"vivek","ram","chiru","irfan","amarjit","manu"};
    list<string>::reverse_iterator rit;
    for(rit=l1.rbegin();rit!=l1.rend();rit++)
        cout<<*rit<<" ";
    cout<<endl;
}
void f2()
{
    vector<int>v1={1,2,3,6,7,8};

    list<int>l1;
    l1.insert(l1.begin(),v1.begin(),v1.end());
    for(auto x:l1)
        cout<<x<<" ";
    cout<<" ";
    
}
void f3()
{
    list<int>l1={1,2,3,4,5,6,7};
    cout<<"greatest element is "<<*max_element(l1.begin(),l1.end());
    
}
void f4()
{
    list<int>l2={1,2,9,8,7,6,5,4,3,10};
    l2.sort();
    for(auto x:l2)
        cout<<x<<" ";
    cout<<endl;

}
void f5()
{
    vector<int>v1={30,51,23,17,6,42};
    list<int>l1;
    for(auto x:v1)
        {
            if(x%2==0)
                l1.push_front(x);
            else
                l1.push_back(x);
        }
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;

}
int main()
{
    f5();
}
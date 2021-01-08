#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={1,2,3,4};
    list<int>li(a,a+4);
    list<int>::iterator it;

    //it=li.begin();
    //li.erase(it);

    li.pop_front();
    li.pop_back();
    li.empty();

    for( it=li.begin();it!=li.end();it++)
        cout<<*it<<" ";
}

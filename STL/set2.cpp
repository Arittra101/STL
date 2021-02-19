#include<iostream>
#include<set>
using namespace std;
int main()
{

    set <int> s;
    set <int>:: iterator it;
    pair<set<int>:: iterator,bool>p;
    s.insert(12);
    s.insert(4);
    s.insert(11);
    s.insert(15);
    p=s.insert(15);
    if(p.second==false)
        cout<<"NO"<<endl;
    else
        cout<<"Yes"<<endl;

    //s.erase(4);

    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";




}


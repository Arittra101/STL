#include<iostream>
#include<set>
using namespace std;
int main()
{

    set <int> s;
    set <int>:: iterator it;

    s.insert(12);
    s.insert(4);
    s.insert(11);
    s.insert(15);

    //s.erase(4);
    it=s.find(15);
    if(it==s.end())cout<<"NO"<<endl;
    else
    {
        cout<<"YES Found it and Erase "<<*it<<endl;
        s.erase(it);
    }

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" "<<endl;
    }


}


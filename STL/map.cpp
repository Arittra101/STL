#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string,int>m;
    map<string,int>::iterator it;
    m["Oindrila"]=100;
    m["Tashfia"]=78;

    m.insert(make_pair("Momo",76));
    //cout<<m["Tashfia"];

    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}

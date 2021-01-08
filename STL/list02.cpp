#include<iostream>
#include<string>
#include<list>
#include<algorithm> //basically for sorting
using namespace std;
int main()
{
    list<float>li;
    list<float>::iterator it;

    li.push_back(2);
    li.push_back(7);
    li.push_front(1);
    li.push_front(12);
    li.push_back(3);

    li.sort();  //for sort
    li.reverse(); //for reverse

    for(it=li.begin(); it!=li.end(); it++)
        cout<<*it<<" ";

}





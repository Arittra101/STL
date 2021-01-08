#include<iostream>
#include<string>
#include<list>
#include<algorithm> //basically for sorting
using namespace std;
int main()
{
    float a[]={1,3,2,4};
    list<float>li(a,a+4);
    list<float>::iterator it;

    //sort(li.begin(),li.end());  //wrong
    li.sort();
    for(it=li.begin(); it!=li.end(); it++)
        cout<<*it<<" ";

}






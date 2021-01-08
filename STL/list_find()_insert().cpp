#include<iostream>
#include<list>
#include<algorithm> //basically for sorting
using namespace std;
int main()
{
    float a[] ={1,4,2,5,8};
    list<float>li(a,a+5);
    list<float>::iterator it;


    //li.sort();  //for sort
    //li.reverse(); //for reverse

     it = find(li.begin(),li.end(),10);


      // li.insert(it,9);

    if(it==li.end()) cout<<"Not Found"<<endl;
    else cout<<"Found"<<endl;

    for(it=li.begin(); it!=li.end(); it++)
        cout<<*it<<" ";


}






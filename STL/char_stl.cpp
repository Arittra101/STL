#include <iostream>
#include <string>
#include <list>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cin>>str;


    list<char> chars(str.begin(),str.end());
    list<char>::iterator it,it1;


  //  it = find(chars.begin(),chars.end(),'a');
    //cout<<*it;

    //int n = chars.end();
    for (it=chars.begin();it!=chars.end();it++)
       {   it1=it;
           if(*it=='a')
           {
                //chars.insert(it,"bc");
               // cout<<"FOunf";   cout << *(it);
               replace(chars.begin(),chars.end(),'a','b');
               //chars.remove('a');
              // cout<<"D";
              // it1++;
              // chars.insert(it1,'c');

           }
           //
       }
         for (it=chars.begin();it!=chars.end();it++)
       {

                 cout << *(it);
       }
    //it=chars.begin();
    //it++;
    //cout << *(it);
    //it++;

}

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    vector<char>vec(a.begin(),a.end());
    vector<char>::iterator it;
    while(1)
    {
        it=find(vec.begin(),vec.end(),' ');
          if(it==vec.end())break;
        vec.erase(it);

    }
   for(it=vec.begin();it!=vec.end();it++)
        cout<<*it;

}

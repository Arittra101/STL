#include<iostream>
#include<string>
#include<vector>
#include<algorithm> //basically for sorting
using namespace std;
int main()
{
    vector<int>vec;  //firs 3 element is 3,3,3 and other two 1 and 2.. total size 5
    vector<int>::iterator it;

    for(int i=1;i<=5;i++)
        vec.push_back(i);

    for(it=vec.begin();it!=vec.end();it++)
         cout<<*it<<" ";



}



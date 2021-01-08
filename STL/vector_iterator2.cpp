#include<iostream>
#include<string>
#include<vector>
#include<algorithm> //basically for sorting
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;

    vec.push_back(2);
    vec.push_back(7);
    vec.push_back(1);
    vec.push_back(8);
    vec.push_back(4);

    //descending order

    sort(vec.begin(),vec.begin()+5);//first 3 element
    //reverse(vec.begin(),vec.begin()+5);
    sort(vec.begin(),vec.end(),greater<int>()); //descending order

    //it=find(vec.begin(),vec.end(),8);
    //vec.erase(it);

    for(it=vec.begin(); it!=vec.end(); it++)
        cout<<*it<<" ";

}




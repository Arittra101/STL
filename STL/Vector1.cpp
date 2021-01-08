#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;

    vec.push_back(1);
    vec.push_back(2);

    //it = vec.begin();
   // vec.erase(it);
   vec.pop_front();



    for(int i=0; i<vec.size(); i++)
        cout<<vec[i];
}

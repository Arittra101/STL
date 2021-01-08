#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec(3,3);  //firs 3 element is 3,3,3 and other two 1 and 2.. total size 5
    vec.push_back(1);
    vec.push_back(2);

    for(int i=0; i<vec.size(); i++)
        cout<<vec[i];

}


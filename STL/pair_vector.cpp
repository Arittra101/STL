#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
  vector<pair<string,int>  >v;
  vector<pair<string,int>  >:: iterator it;
  v.push_back(make_pair("Rabeya Islam Momo",76));
  v.push_back(make_pair("Tashfia Hossain",78));
  v.push_back(make_pair("Oindrila Saha",100));

  for(it=v.begin();it!=v.end();it++)
  {
      cout<<it->first<<" "<<it->second<<endl;
  }



}




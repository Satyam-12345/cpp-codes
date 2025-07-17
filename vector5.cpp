#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,7,8};
    v.pop_back();
   
   
    for(int i:v)
    {
        cout<<i<<" ";
    }
}

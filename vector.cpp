#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4};
    for(int i=0;i<4;i++)
    {
        cout<<v[i];
    }
    for(int i:v)
    {
        cout<<i;
    }
}
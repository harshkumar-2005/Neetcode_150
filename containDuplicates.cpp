#include<iostream> 
#include<unordered_set>
#include<vector>
#include<algorithm>

using namespace std;

bool containDuplicates(vector<int> &v)
{
    unordered_set<int> seen;

    if(v.size()==0 || v.size()== 1 )
        return true;

    for(int x : v)
    {
        if(seen.find(x) !=  seen.end())
        {
            return true;
        }
        seen.insert(x);
    }
    return false;
}

int main()
{
    vector<int> v ={1,2,3,4};
    if(containDuplicates(v))
        cout<<"there is a duplicate present";
    else
        cout<<"All the elements are unique";
    return 0;
}
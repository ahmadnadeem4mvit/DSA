
/*
  Binary Search
  Things to take care
  1. mid = lo + ( hi - lo ) / 2 => avoids overflow
  2. lo <= hi                   => detects corner cases
*/


#include<iostream>
#include<vector>

using namespace std;

int binsearch(vector<int>& v, int val)
{
    int lo = 0;
    int hi = v.size()-1;
    while(lo<=hi)
    {
        int mid = lo + (hi - lo)/2;

        if (v[mid] > val)
        {
            hi = mid - 1;
        }
        else if (v[mid] < val)
        {
            lo = mid + 1;
        }
        else
            return mid;
    }

    return -1;
}

int main()

{
    vector<int> v {11, 21, 31, 41, 51, 61, 71, 81, 91, 101};

    int res = binsearch(v, 61);

    cout<<"FOund value is -> "<<res<<endl;
}
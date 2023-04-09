#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>

using namespace std;
//takes 14ms
vector<int> twoSum(vector<int>& nums, int target) {
     map<int , int > mp;
     vector<int> v;
     for(int i = 0; i<nums.size(); i++)
     {
      int newtarget = target - nums[i];
      auto it = mp.find(newtarget);
      if (it != mp.end())
      {
          v.push_back(i);
          v.push_back(it->second);
          return v;
      }
      else
      {
          mp[nums[i]] = i;
      }
    }
     return v;   
    }

// takes 4 ms
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            
            if(mp.find(target-nums[i])!=mp.end())
            {
                res.push_back(mp[target-nums[i]]);
                res.push_back(i);
                break;
            }
           mp[nums[i]]=i;
        }
        return res;
    }
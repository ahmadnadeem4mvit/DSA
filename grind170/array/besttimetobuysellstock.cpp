#include<iostream>
#include<vector>
#include<climits>

using namespace std;

//takes 98 ms
//idea is to find minimum price
int maxProfit(vector<int>& prices) {
     int buy = prices[0];
    int max_so_far = INT_MIN;
     for(int i = 1; i<prices.size(); i++)
     {
         int val = prices[i] - buy;
         max_so_far = max(val, max_so_far);
         if (val <= 0)
            buy = prices[i];
     }
     if (max_so_far < 0)
        return 0;
     return max_so_far;   
    }


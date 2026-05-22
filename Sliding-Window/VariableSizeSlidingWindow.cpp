#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Variable Size Sliding Window Problems from Leetcode , HackerRank, Codechef, GeeksForGeeks

class VariableSizeSlidingWindow{
public:
    // LC - 3
    int lengthOfLongestSubstring(string s) {
        int n = s.size() ;
        if(n == 0) return 0;
        int best = 0 , left = 0 ;
        unordered_set<char> set;
        for(int right = 0 ; right < n ; ++right){
            if(set.find(s[right]) == set.end()){
                set.insert(s[right]);
            }else{
                while(set.find(s[right]) != set.end()){
                    set.erase(s[left]);
                    ++left;
                }
                set.insert(s[right]);
            }
            best = max(best,right - left + 1);
        }
        return best;
    }
    // GFG - Longest substring without repeating characters
    int longestUniqueSubstr(string &s) {
        int n = s.size() ;
        if(n == 0) return 0 ;
        unordered_set<char> set;
        int best = 0 , left = 0 ;
        for(int right = 0 ; right < n ; ++right){
            if(set.find(s[right]) == set.end()){
                set.insert(s[right]);
            }else{
                while(set.find(s[right]) != set.end()){
                    set.erase(s[left]);
                    ++left;
                }
                set.insert(s[right]);
            }
            best = max(best,right - left + 1);
        }
        return best;
    }
    // LC - 209 
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int best = INT_MAX , left = 0 ;
        double sum = 0 ;
        for(int right = 0 ; right < n ; ++right){
            sum += nums[right];
            while(sum >= target){
                sum -= nums[left];
                ++left;
                best = min(best,right - left + 2);
            }
        }
        return best == INT_MAX ? 0 : best; 
    }

    // GFG - Smallest subarray with sum greater than x
    int smallestSubWithSum(int x, vector<int>& arr) {
        int n = arr.size() ;
        if(n == 0) return 0;
        int best = INT_MAX , left = 0 ;
        double sum = 0 ;
        for(int right = 0 ; right < n ; ++right){
            sum += arr[right];
            while(sum > x){
                sum -= arr[left];
                ++left;
                best = min(best,right - left + 2);
            }
        }
        return best == INT_MAX ? 0 : best;
    }

    // LC - 1004 
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size() ;
        if(n < k) return 0 ;
        int zeroCount = 0 , best = 0 , left = 0 ;
        for(int right = 0 ; right < n ; ++right){
            if(nums[right] == 0){
                ++zeroCount;
            }
            while(zeroCount > k){
                if(nums[left] == 0){
                    --zeroCount;
                }
                ++left;
            }
            best = max(best,right - left+1);
        }
        return best;
    } 
    
    // LC - 904
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> map;
        int best = 0 , left = 0;
        for(int right = 0 ; right < fruits.size() ; ++right){
            ++map[fruits[right]];
            while(map.size() > 2){
                --map[fruits[left]];
                if(map[fruits[left]] == 0) map.erase(fruits[left]);
                ++left;
            }
            best = max(best, right - left + 1);
        }
        return best;
    }

    // LC - 713
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(nums.size() == 0) return 0;
        long long product = 1 ;
        int count = 0 , left = 0 ;
        for(int right = 0 ; right < nums.size(); ++right){
            product *= nums[right];
            while(product >= k && left <= right){
                product /= nums[left];
                ++left;
            }
            count += right - left + 1;
        }
        return count;
    }

    //  GFG - Subarrays Product Less than K
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        long long count = 0 , product = 1 ;
        int left = 0 ;
        for(int right = 0 ; right < n ; ++right ){
            product *= arr[right];
            while(product >= k && left <= right){
                product /= arr[left];
                ++left;
            }
            count += right - left + 1;
        }
        return count ;
    }
};
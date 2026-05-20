#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Fixed Size Sliding Window Problems from Leetcode, Hackerrank, Codechef, GeeksForGeeks

class FixedSizeSlidingWindowSolutions {
public :
    // LC 643 
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size() ;
        if(n < k) return 0;
        double curr = 0 , best = 0 ;
        for(int i = 0 ; i < k ; ++i){
            curr += nums[i];
        }
        best = curr ;
        for(int i = k ; i < n ; ++i){
            curr = curr + nums[i] - nums[i-k];
            best = max(best,curr);
        }
        return best / k ;
    }
    // LC - 1876
    int countGoodSubstrings(string s) {
        int n = s.size();
        if(n < 3) return 0 ;
        unordered_map<char,int> map;
        int best = 0 , count = 0 ;
        for(int i = 0 ; i < 3 ; ++i){
            map[s[i]]++;
        }
        if(map.size() == 3) count++;
        for(int i = 3 ; i < n ; ++i){
            map[s[i-3]]--;
            if(map[s[i-3]] == 0) map.erase(s[i-3]);
            map[s[i]]++;
            if(map.size() == 3) ++count;
        }
        return count;
    }
    // LC - 1456
    int maxVowels(string s, int k) {
        int n = s.size() ;
        if(n < k) return 0;
        string vowels = "aeiou";
        int best = 0 , count = 0;
        for(int i = 0 ; i < k ; ++i){
            if(vowels.find(s[i]) != string::npos) ++count;
        }
        best = count;
        for(int i = k ; i < n ; ++i){
            if(vowels.find(s[i-k]) != string::npos) --count;
            if(vowels.find(s[i]) != string::npos) ++count;
            best = max(best,count);
        }
        return best;
    }
    // LC - 1343
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size() ;
        if(n < k) return 0;
        int count = 0;
        double avg = 0 , sum = 0 ;
        for(int i = 0 ; i < k ; ++i){
            sum += arr[i];
        }
        avg = sum / k;
        if(avg >= threshold) ++count;
        for(int i = k ; i < n ; ++i){
            sum += arr[i] - arr[i-k];
            avg = sum / k;
            if(avg >= threshold) ++count;
        }
        return count;
    }
    // HackerRank - Subarray Division 1
    int birthday(vector<int> s, int d, int m) {
        int n = s.size();
        if(n < m) return 0;
        int count = 0, sum = 0 ;
        for(int i = 0 ; i < m ; ++i){
            sum += s[i];
        }
        if(sum == d) ++count;
        for(int i = m ; i < n ; ++i){
            sum += s[i] - s[i-m];
            if(sum == d) ++count;
        }
        return count;
    }
    // GFG - Max Sum Subarray of size K
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        if(n < k) return 0;
        double maxSum = 0 , currSum = 0 ;
        for(int i = 0 ; i < k ; ++i){
            currSum += arr[i];
        }
        maxSum = currSum;
        for(int i = k ; i < n ; ++i){
            currSum += arr[i] - arr[i-k];
            maxSum = max(maxSum,currSum);
        }
        return maxSum;
    }
};
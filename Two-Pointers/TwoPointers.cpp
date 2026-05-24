#include<isotream>
#include<bits/stdc++.h>
using namespace std;

class TwoPointersSolutions{
public:
    // LC - 167
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0 , right = numbers.size() -1 ;
        while(left <= right){
            long long sum = (long long) numbers[left] + numbers[right];
            if(sum == target) return {left + 1, right +1};
            else if (sum < target) ++ left;
            else --right ;
        }
        return {};
    }

    // GFG - Two Sum in Sorted Array
    vector<int> twoSum(vector<int>& arr, int target) {
        int left = 0 , right = arr.size() - 1;
        while(left < right){
            long long sum = (long long) arr[left] + arr[right];
            if(sum == target) return {left + 1, right + 1};
            else if(sum < target) ++left;
            else --right;
        }
        return {-1,-1};
    }

    // LC - 125
    bool isPalindrome(string s) {
        int i = 0 , j = s.size() - 1;
        while(i < j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i]) != tolower(s[j])) return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }

    // LC - 11
    int maxArea(vector<int>& h) {
        int i = 0 , j = h.size() - 1;
        int area = 0 , curr = 0 ;
        while(i <= j){
            curr = min(h[i],h[j]) * (j - i);
            area = max(area,curr);
            (h[i] < h[j]) ? i++ : j--;
        }
        return area;
    }

    // GFG - Container with Most Water
    int maxWater(vector<int> &h) {
        int i = 0 , j = h.size() - 1;
        int area = 0 , curr = 0 ;
        while(i <= j){
            curr = min(h[i],h[j]) * (j - i);
            area = max(area,curr);
            (h[i] < h[j]) ? i++ : j--;
        }
        return area;
    }
    // LC - 283
    void moveZeroes(vector<int>& nums) {
        int write = 0 ;
        for(int i = 0 ; i < nums.size() ; ++i){
            if(nums[i] != 0){
                nums[write] = nums[i];
                ++write;
            }
        }
        for(int i = write ; i < nums.size() ; ++i) nums[i] = 0 ;
    }

    // GFG - Move All Zeroes to End
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int write = 0;
        for(int read = 0 ; read < arr.size() ; ++read){
            if(arr[read] != 0){
                arr[write] = arr[read];
                ++write;
            }
        }
        for(int i = write ; i < arr.size() ; ++i) arr[i] = 0 ;
    }
    
    // LC - 26
    int removeDuplicates(vector<int>& nums) {
        int write = 1 ;
        for(int read = 1 ; read < nums.size() ;++read){
            if(nums[read] != nums[read-1]){
                nums[write] = nums[read];
                ++write;
            }
        }
        return write;
    }
    // GFG - Remove Duplicates from sorted array
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int write = 1;
        for(int i = 1 ; i < arr.size() ; ++i){
            if(arr[i] != arr[i-1]){
                arr[write] = arr[i];
                ++write;
            }
        }
        arr.resize(write);
        return arr;
    }

    // Codechef - Remove Duplicates (Two Pointers) 
    void removeDuplicates(vector<int>& arr){
        int write = 1;
        for (int read = 1; read < arr.size(); ++read) {
            if (arr[read] != arr[read - 1]) {
                arr[write++] = arr[read];
            }
        }
        cout<<write<<endl;
        for(int k = 0 ; k < write ; ++k) cout<<arr[k]<<" ";
    }
};
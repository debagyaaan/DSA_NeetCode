class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        int flag = 0;
        for(int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++){
                if(nums[i]==nums[j]){
                    flag=1;
                    break;
                }
            }
        }
       return flag;
    }
};

//better code

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> seen;
        for (int i:nums) {
            if(seen.count(i)){
                return true;
            } else {
                seen.insert(i);
            }
        }
        return false;
    }
};

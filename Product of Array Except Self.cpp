//Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements //of nums except nums[i].

//Solve it without division and in O(n).

//For example, given [1,2,3,4], return [24,12,8,6].

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>fromBegin(n);
        fromBegin[0]=1;
        vector<int>fromEnd(n);
        fromEnd[n-1]=1;
        
        for(int i=1;i<n;i++){
            fromBegin[i]=fromBegin[i-1]*nums[i-1];
            fromEnd[n-1-i]=fromEnd[n-i]*nums[n-i];
        }
        vector<int>res(n);
        for(int i=0;i<n;i++){
            res[i]=fromBegin[i]*fromEnd[i];
            
        }
        return res;
    }
};



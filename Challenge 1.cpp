// How Many Numbers Are Smaller Than the Current Number
// Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].//

// Return the answer in an array.//



class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int n=nums.size();
		map<int,int>mp;
		vector<int> v=nums;
		sort(v.begin(),v.end());
		for(int i=n-1;i>=0;i--) mp[v[i]]=i;
		for(int i=0;i<n;i++)nums[i]=mp[nums[i]];
		return nums;
    }
};

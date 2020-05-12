class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        cin.tie(NULL), cout.tie(NULL), ios::sync_with_stdio(false);
        int start=0, end = nums.size()-1, mid;
	    while( start < end ) {
		    mid = start + (end-start)/2;
		    if( nums[mid] == nums[mid ^ 1] )
			    start = mid + 1;
		    else
			    end = mid;
	    }
	    return nums[start];
    }
};
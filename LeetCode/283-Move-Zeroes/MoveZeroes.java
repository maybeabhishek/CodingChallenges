class Solution {
    public void moveZeroes(int[] nums) {
        int numMoves = 0;
        for(int i =0; i< nums.length; i++){
            if(nums[i]==0)
                numMoves++;
            else{
                nums[i-numMoves] = nums[i];
            }
        }
        for(int i = nums.length - numMoves ; i<nums.length; i++){
            nums[i] = 0;
        }
        
        System.out.println(nums);
    }
}
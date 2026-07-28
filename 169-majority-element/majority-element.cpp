class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for(int val : nums){
            int count = 0;

            for( int element : nums){
                if( element== val){
                    count++;
                }
            }
            if(count > n/2){
                return val;
            }
        }
        return -1;
    }
};
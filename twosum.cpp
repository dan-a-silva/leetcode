class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output(2,0);
        for(int i = 0; i< nums.size()-1;i++){
            for(int j = i+1;j<nums.size();j++){
            if (nums[i]+nums[j]==target){
                cout<<" "<<i <<" " <<j<<endl;
                output[0]=i;
                output[1]=j;
                goto end;
            }
            }
        }
        end:
        return output;
    }
};
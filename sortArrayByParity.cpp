class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        long long n = nums.size();
        std::vector<int> evenArray;
        std::vector<int> oddArray;
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                evenArray.push_back(nums[i]);
            }
            else{
                oddArray.push_back(nums[i]);
            }
        }
        evenArray.insert(evenArray.end(), oddArray.begin(), oddArray.end());
        return evenArray;
    }
};
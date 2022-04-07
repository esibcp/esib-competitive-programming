class Solution {
public:
    int firstMissingPositive(vector<int>& cp) {
        
       //put each element in its correct place.
       // Loop from the start of the array, we should start at 1
       // The first time you find an element out of place (val[i]!= index+1) return it as the missing index
       vector<int> nums;
       std::copy_if (cp.begin(), cp.end(), std::back_inserter(nums), [](int i){return i>=0;} );
       size_t n = nums.size();
       for(int i = 0; i < n; ++ i)
            while(nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);
        
        for(int i = 0; i < n; ++ i)
            if(nums[i] != i + 1)
                return i + 1;
        
        return n + 1;
    }
};
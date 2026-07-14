class Solution {
    //TC: O(n)
    int check(vector<int>& nums, int k, int mid){
        //Mid is sum
        //Chaeck function is used to check Can we divide nums into k subarrays

        int n = nums.size();
        int sum = 0, count = 1;

        for(int i=0; i<n; i++){
              if(sum + nums[i] > mid){
                sum = nums[i];
                count++;
              }
              else{
                sum += nums[i];
              }
        }
        return count <= k;
    }
public:
    //TC : log(TotalSum - MaxElement)
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        
        int low = 0, high = 0, ans = 0;

        for(int num : nums){
            low = max   (low, num);
            high += num;
        }

        while(low <= high){
            int mid = low + (high - low)/2;

            if(check(nums, k, mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};

//Total Time complexity: O(n * log(TotalSum - MaxElement))
//Space complexity: O(1)
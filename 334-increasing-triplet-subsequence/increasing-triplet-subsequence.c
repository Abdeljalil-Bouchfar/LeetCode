bool increasingTriplet(int* nums, int numsSize){
        int s1 = INT_MAX, s2 = INT_MAX;
       for (int i = 0; i < numsSize; i++)
       {
            if (nums[i] <= s1)
                s1 = nums[i]; // the first smallest 
           else if (nums[i] <= s2)
               s2 = nums[i];  // the second smallest
           else               // the third smallest return true
               return true;
       }
        return false;
}
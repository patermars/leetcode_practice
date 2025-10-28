int searchInsert(int* nums, int numsSize, int target) {
    int left =0;
    int right = numsSize;
    while(left<right)
    {
        int mid = left+ (right-left)/2;

        if(target>nums[mid])
        {
            left=mid+1;
        }
        else if (target == nums[mid])
        {
            return mid;
        }
        else //(target<nums[mid])
        {
            right=mid;
        }
    }
    return left;
}
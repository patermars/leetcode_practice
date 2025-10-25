int singleNumber(int* nums, int numsSize) {
    if(numsSize==1)
    {
        return nums[0];
    }
    else
    {
        int count =0;
        for(int i=0;i<numsSize;i++)
        {
            count^=nums[i];
        }
    return count;  
    }
}
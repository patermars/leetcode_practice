int removeDuplicates(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            count++;
        }
        else
        {
            i=i-count;
            for(int j=i;j<numsSize-count;j++)
            {
                nums[j]=nums[j+count];
            }
            count=0;
        }
    }
    return numsSize-count;
}
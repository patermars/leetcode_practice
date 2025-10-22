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
            for(int j=i;j<numsSize-count;j++)
            {
                nums[j]=nums[j+count];
            }
            
            count=0;
        }
    }

    // for(int i=0;i<numsSize;i++)
    // {
    //     printf("%d |",nums[i]);
    // }
    
    return count;
}
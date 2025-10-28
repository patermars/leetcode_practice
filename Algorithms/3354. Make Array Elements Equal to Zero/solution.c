bool all_zero(int* nums,int numsSize)
{
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0)
        {
            return true;
        }
    }
    return false;
}

int countValidSelections(int* nums, int numsSize) {
    int curr = -1;
    int validcount = 0;
    int step = 0;

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            curr = i;
        }
        if(curr != -1)
        {
            for (int dir = -1; dir <= 1; dir += 2) {
                int temp[numsSize];
                int direction = dir;
                memcpy(temp, nums, numsSize * sizeof(int));
                int local_curr = curr;

                while(local_curr >= 0 && local_curr < numsSize)
                {
                    step++;

                    if(temp[local_curr]==0)
                    {
                        local_curr += direction;
                    }
                    else if(temp[local_curr]>0)
                    {
                        temp[local_curr]--;
                        direction *= -1;
                        local_curr += direction;
                    }
                }
                if(!all_zero(temp,numsSize))
                {
                    validcount++;
                }
            }
            curr = -1;
        }
    }
    return validcount;
}
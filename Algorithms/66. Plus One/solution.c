int* plusOne(int* digits, int digitsSize, int* returnSize) {
    if(digits[digitsSize-1]!=9)
    {
        digits[digitsSize-1]+=1;
        *returnSize = digitsSize;
        return digits;
    }
    else
    {
        bool all_9 = true;
        for(int i=0;i<digitsSize;i++)
        {
            if(digits[i]!=9){
                all_9=false;
            }
        }

        if(all_9)
        {
            int* not_return = (int*)malloc((digitsSize + 1) * sizeof(int));
            *returnSize = digitsSize+1;

            not_return[digitsSize]=0;

            for(int i=1;i<digitsSize+1;i++)
            {
                if(digits[digitsSize-i]==9)
                {
                    not_return[digitsSize-i]=0;
                }
                if(digitsSize == i)
                {
                    not_return[digitsSize-i]=1;
                    break;
                }
            }
            return not_return;
        }
        else
        {
            int* not_return = (int*)malloc((digitsSize) * sizeof(int));
            *returnSize = digitsSize;

            for(int i=0;i<digitsSize;i++)
                not_return[i]=digits[i];

            for(int i=digitsSize-1;i>=0;i--)
            {
                if(not_return[i]==9)
                {
                    not_return[i]=0;
                }
                else
                {
                    not_return[i]+=1;
                    break;
                }
            }
            return not_return;
        }

    }
}
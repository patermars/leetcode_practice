bool judgeSquareSum(int c) {
    if(c==1)
    {
        return true;
    }

    int left = 0;
    int right = (long long)sqrt(c);

    while(left <= right)
    {
        long long left_square = (long long)left * (long long)left;
        long long right_square = (long long)right * (long long)right;
        long long square = left_square + right_square;

        if(square<c)
        {
            left++;
        }
        else if(square ==c)
        {
            return true;
        }
        else
        {
            right--;
        }

    }
    return false;
}
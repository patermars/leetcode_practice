bool isPerfectSquare(int num) {

    if(num==1 ){
        return true;
    }

    int sqrt = 0;
    int left = 2;
    int right = num/2;
    while(left <=right)
    {
        int mid = left + (right - left)/2;
        long long square = (long long)mid * (long long)mid;

        if(square < num)
        {
            left = mid+1;
        }
        else if(square ==num)
        {
            return true;
        }
        else
        {
            right = mid-1;
        }
    }
    return false;
}
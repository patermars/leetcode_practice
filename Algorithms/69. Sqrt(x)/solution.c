int mySqrt(int x) {
    
    if(x==1 || x==0){
        return x;
    }

    int sqrt =0;
    int left = 0;
    int right = x/2;
    
    while (left <=right)
    {
        int mid = left + (right - left) / 2;
        long long square = (long long)mid * (long long)mid;

        if (square <x)
        {
            sqrt = mid;
            left = mid+1;
        }
        else if(square==x)
        {
            return mid;
        }
        else
        {
            right = mid-1;
        }
    }

    return sqrt;
}
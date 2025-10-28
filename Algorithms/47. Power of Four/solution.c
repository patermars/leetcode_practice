bool isPowerOfFour(int n) {
    if (n < 1) return false;
    while(n!=1)
    {
        if(n%4==0)
        {
            n/=4;
        }
        else
        {
            break;
        }
    }
    if(n==1)
    {
        return true;
    }
    return false;
}
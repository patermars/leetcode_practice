double myPow(double x, int n) {
    if(n==0 || x == 1.00000){
        return 1;
    }
    else
    {
        long long n1 = n;
        if(n1<0)
        {
            n1 = n1 * (-1);
            x=1/x;
        }

        double result =1;
        for(;n1>0;n1/=2)
        {
            if(n1%2==1)
            {
                result*=x;
            }
                x*=x;
        }

        return result;

    }
}
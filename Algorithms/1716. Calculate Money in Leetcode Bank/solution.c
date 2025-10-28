int totalMoney(int n) {
    int sum=0;
    int i=1,j=i,count=0;
    while(n--)
    {
        sum+=j++;
        count++;
        
        if(count%7==0)
        {
            j=i+1;
            i++;
        }   
    }
    return sum;
}

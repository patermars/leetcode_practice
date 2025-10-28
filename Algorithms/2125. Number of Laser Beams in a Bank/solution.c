int numberOfBeams(char** bank, int bankSize) {
    int laser[bankSize];
    int count=0;
    int lasercount=0;
    for(int i=0;i<bankSize;i++)
    {
        for(int j=0;bank[i][j]!='\0';j++)
        {
            if(bank[i][j]=='1')
            {
                count++;
            }
        }
        if(count>0)
        {
            laser[lasercount++]=count;
        }
        count=0;
    }

    int number = 0;
    
    for(int i=0;i<lasercount-1;i++){
        number+= laser[i]*laser[i+1];
    }

    return number;
}
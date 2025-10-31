int smallestNumber(int n) {
    int output = 0;
    int bit = 1;

    while(n>0){
        output += bit;
        bit *= 2;
        n /= 2;
    }

    return output;
}
#include <stdbool.h>

bool isBalanced(int num) {
    int count[10] = {0};
    int temp = num;

    while (temp > 0) {
        int d = temp % 10;
        count[d]++;
        temp /= 10;
    }
    if (count[0] > 0)
        return false;
    for (int d = 1; d <= 9; d++) {
        if (count[d] != 0 && count[d] != d)
            return false;
    }
    return true;
}


int nextBeautifulNumber(int n) {
    for (int i = n + 1; i <= 10000000; i++) { 
        if (isBalanced(i))
            return i;
    }
    return -1;
}
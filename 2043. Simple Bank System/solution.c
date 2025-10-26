#include <stdio.h>
#include <stdbool.h>


typedef struct {
    int account_number;
    long long balance;
} Bank;

Bank* bank;
int n = 0;

Bank* bankCreate(long long* balance, int balanceSize) {
    if(balanceSize<=0)
    return NULL;

    Bank *bank = malloc(balanceSize * sizeof(Bank));
    n = balanceSize;


    for(int i=0;i<balanceSize;i++){
        bank[i].account_number=i+1;
        bank[i].balance = balance[i];
    }
    
    return bank;
}

bool bankTransfer(Bank* obj, int account1, int account2, long long money) {
    if (account1 < 1 || account1 > n || account2 < 1 || account2 > n) 
        return false;

    if(obj[account1-1].balance>=money){
        obj[account2-1].balance+=money;
        obj[account1-1].balance-=money;
        return true;
    }
    return false;
    
}

bool bankDeposit(Bank* obj, int account, long long money) {
    if (account < 1 || account > n) 
        return false;

    obj[account-1].balance+=money;

    return true;
    
}

bool bankWithdraw(Bank* obj, int account, long long money) {
    if (account < 1 || account > n) 
        return false;

    if(obj[account-1].balance>=money)
    {
        obj[account-1].balance-=money;
        return true;
    }
    return false;
}

void bankFree(Bank* obj) {
    free(obj);
}

/**
 * Your Bank struct will be instantiated and called as such:
 * Bank* obj = bankCreate(balance, balanceSize);
 * bool param_1 = bankTransfer(obj, account1, account2, money);
 
 * bool param_2 = bankDeposit(obj, account, money);
 
 * bool param_3 = bankWithdraw(obj, account, money);
 
 * bankFree(obj);
*/
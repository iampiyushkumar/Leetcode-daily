class Bank {
public:
int n;
vector<long long>balance;
    Bank(vector<long long>& balac) {
        n=balac.size();
        for(auto x:balac)
        balance.push_back(x);
    }
    
    bool transfer(int account1, int account2, long long money) {
        account1-=1;
        account2-=1;
        if(account1<0||account1>=n||account2<0||account2>=n||balance[account1]<money) return false;
        balance[account1]-=money;
        balance[account2]+=money;
        return true;
        
    }
    
    bool deposit(int account, long long money) {
          account-=1;
          if(account<0||account>=n) return false;
          balance[account]+=money;
          return true;

    }
    
    bool withdraw(int account, long long money) {
        account-=1;
        if(account<0||account>=n||balance[account]<money) return false;
         balance[account]-=money;
         return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */

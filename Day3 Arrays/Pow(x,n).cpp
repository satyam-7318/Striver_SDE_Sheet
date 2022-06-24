https://leetcode.com/problems/powx-n/

//  using recursion 


class Solution {
public:
    double mypower(double x , int n){
        
        
        if(n==0)
            return 1.000000;
        
        double ans = mypower(x,n/2);
        
        
        if(n&1)
            return x*ans*ans;
        else
            return ans*ans;
        
    }
    
    
    double myPow(double x, int n) {
        
        double ans = mypower(x,abs(n));
        
        if(n>=0)
            return ans;
        else
            return 1.0/ans;
        
    }
};




// above algo using loop

double myPow(double x, int n) {
  double ans = 1.0;
  long long nn = n;
  if (nn < 0) nn = -1 * nn;
  while (nn) {
    if (nn % 2) {
      ans = ans * x;
      nn = nn - 1;
    } else {
      x = x * x;
      nn = nn / 2;
    }
  }
  if (n < 0) ans = (double)(1.0) / (double)(ans);
  return ans;
}

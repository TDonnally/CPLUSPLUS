#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
      std::vector<int> res(n + 1);
      res[0] = 1;
      res[1] = 1;
      res[2] = 2;
      for (int i = 3; i <= n; i++)
         res[i] = res[i - 1] + res[i - 2];
   
      return res[n];
    }
};

// main() is where program execution begins.
int main() {
   Solution S;
   int i;
   for(i=0;i<45;i++){
      cout << "Steps: " << S.climbStairs(i) << endl;
   }
   return 0;
}

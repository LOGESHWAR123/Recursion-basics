#include <bits/stdc++.h>
using namespace std;

int prod(int n)
{
  if(n==1){
    return 1;
  }
  return (n%10)*prod(n/10);  //1234 1*sum(234) 1*2*sum(34)
}
int main(){
  int n;
  n=prod(1234);
  cout<<n;
}

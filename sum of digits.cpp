#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
  if(n==0){
    return 0;
  }
  return (n%10)+sum(n/10);  //1234 1+sum(234) 1+2+sum(34)
}
int main(){
  int n;
  n=sum(1234);
  cout<<n;
}

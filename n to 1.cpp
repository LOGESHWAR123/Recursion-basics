#include <bits/stdc++.h>
using namespace std;

int num(int x)
{
  if(x==0){
    exit(0);
  }else{
    cout<<x;
    return num(x-1);
  }
}
int main() 
{
    int a;
    a=num(5);
    cout<<a<<" ";
}
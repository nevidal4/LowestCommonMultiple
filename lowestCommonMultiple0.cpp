#include <iostream>
#include <vector>
using namespace std;

long long greatestCommonDivisor(long long a, long long b){
  long long c = 0;
  while(b != 0){
     c = a % b;
     a = b;
     b = c;
  }
  return a;
}
//take numbers a and b
//find the greatest common divisor of a and b and set to c
//divide b by c and set to d
//multiply a by d and set to e
long long lowestCommonMultiple(long long a, long long b){
  long long c = 0;
  long long d = 0;
  long long e = 0;
  c = greatestCommonDivisor(a, b);
  d = b / c;
  e = a * d;
  return e;
}
int main(){
  long long a = 0;
  long long b = 0;
  long long c = 0;
  cin >> a >> b;
  c = lowestCommonMultiple(a, b);
  cout << c << endl;
  return 0;
}

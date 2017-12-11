#include "Fibonacci.hpp"


int fibonacciRecursif(int n) {
  if(n==0)
    return 0;
  else if(n==1)
    return 1;
  else
    return (fibonacciRecursif(n-1)+fibonacciRecursif(n-2));
}


int fibonacciIteratif(int n) {
  int u, v;
  int u0, v0;
  u = 1; v = 0;
  if(n==0)
    return 0;
  else if(n==1)
    return 1;
  else
    for (int i = 2; i <= n; i++) {
      u0 = u;
      v0 = v;
      u = u0 + v0;
      v=u0;
    }
  return u;
}

#include <iostream>
using namespace std;

int main() {
  int a, b;
  bool isPrime = true;
  
  cout << "enter positive number: ";
  cin >> b;
  
  if (b == 0 || b == 1) {
    isPrime = false;
  }
  else {
    for(a=2;a<=b/2;a++) {
      isPrime = b % a == 0 ? false : true;
    }
  }
  if (isPrime) {
    cout << b << "prime no.";
  } else {
    count << b << "not prime no.";
  }
}

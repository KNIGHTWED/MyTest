#include <iostream>

using namespace std;
int fibonacci(int num);
int main() {
  int input;
  
  cin >> input;
  // input = 10;
  cout << fibonacci(input) << endl;

  return 0;
}

int fibonacci(int num) {
  if(num == 0) return 0;
  if(num == 1) return 1;
  if(num == 2) return 1;
  return fibonacci(num - 1) + fibonacci(num-2);
}
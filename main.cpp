#include <iostream>
using namespace std;

int main() {
  int a[] = {2, 7, 11, 15};
  int result = 9;
  for (int i = 1; i < 4; ++i) {
    int sum = a[i - 1] + a[i];
    if (sum == result) {
      cout << a[i - 1] << " + " << a[i];
      break;
    }
  }
  return 0;
}

#include <iostream>

using namespace std;
int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int i = 3;
    while (n % i != 0) {
      i = 2 * i + 1;
    }
    cout << n / i << endl;
  }

  return 0;
}

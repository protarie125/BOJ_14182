#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  while (true) {
    cin >> n;
    if (0 == n) break;

    if (n < 1000000) {
      cout << n << ' ';
    } else if (n < 5000000) {
      cout << (n * 9) / 10;
    } else {
      cout << (n * 8) / 10;
    }
    cout << '\n';
  }

  return 0;
}
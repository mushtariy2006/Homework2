#include <iostream>
using namespace std;

int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int lcm(int x, int y) {
    return x * y / gcd(x, y);
}

int count_multiples(int n, int x) {
    return n / x;
}

int main() {
    int a, b, c, e, d;
    cin >> a >> b >> c >> e >> d;

    int ab = lcm(a, b);
    int ac = lcm(a, c);
    int ae = lcm(a, e);
    int bc = lcm(b, c);
    int be = lcm(b, e);
    int ce = lcm(c, e);
    int abc = lcm(ab, c);
    int abe = lcm(ab, e);
    int ace = lcm(ac, e);
    int bce = lcm(bc, e);
    int abce = lcm(abc, e);

    int result = count_multiples(d, a) + count_multiples(d, b) + count_multiples(d, c) + count_multiples(d, e)
               - count_multiples(d, ab) - count_multiples(d, ac) - count_multiples(d, ae)
               - count_multiples(d, bc) - count_multiples(d, be) - count_multiples(d, ce)
               + count_multiples(d, abc) + count_multiples(d, abe) + count_multiples(d, ace) + count_multiples(d, bce)
               - count_multiples(d, abce);

    cout << result << endl;

    return 0;
}

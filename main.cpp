#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate sum of proper divisors (excluding the number itself)
long long sumOfProperDivisors(long long n) {
    if (n <= 1) return 0;

    long long sum = 1; // 1 is always a proper divisor (except for 1 itself)
    long long sqrtN = sqrt(n);

    // Find all divisors by checking up to sqrt(n)
    for (long long i = 2; i <= sqrtN; i++) {
        if (n % i == 0) {
            sum += i; // Add the divisor
            if (i != n / i) {
                sum += n / i; // Add the corresponding divisor
            }
        }
    }

    return sum;
}

int main() {
    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        long long n;
        cin >> n;

        long long divisorSum = sumOfProperDivisors(n);

        if (divisorSum == n) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(long long n) {
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for (long long p=2; p*p<=n; p++) {
        if (prime[p] == true) {
            for (long long i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    return prime;
}

bool checkTriplet(long long n, vector<bool>& prime) {
    for (long long i=2; i<n; i++) {
        if (prime[i]) {
            for (long long j=2; j<n; j++) {
                if (prime[j] && prime[n - i - j])
                    return true;
            }
        }
    }
    return false;
}

int main() {
    long long N = 100; // replace with your N
    vector<bool> prime = sieve(N);
    if (N%2 == 0) N -= 2; // make N odd
    else N -= 3; // or subtract a small prime number
    cout << (checkTriplet(N, prime) ? "Yes" : "No") << endl;
    return 0;
}

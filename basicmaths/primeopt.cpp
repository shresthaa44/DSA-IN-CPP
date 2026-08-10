#include <bits/stdc++.h>
using namespace std;

// Function to check if a given number is prime
bool checkPrime(int n) {   //function defined of boolean type thus will return boolean type value.
    int cnt = 0;  // Initialize a counter variable to count the number of factors

    // Loop through numbers from 1 to the square root of n
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt++;  // If n is divisible by i, increment the counter

            if (n / i != i) {
                cnt++;
            }
        }
    }

    // If the number of factors is exactly 2 (1 and the number itself), it's prime
    if (cnt == 2) {
        return true;
    } else {
        return false;  // If not, it's not a prime number
    }
}

int main() {
    int n;  // Example number
    cin>> n;
    bool isPrime = checkPrime(n);  // Function call to check if the number is prime

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}

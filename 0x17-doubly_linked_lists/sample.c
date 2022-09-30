#include <iostream>
#include <string>

bool isPalindrome(int n) {
    std::string s = std::to_string(n);
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int largest = 0;
    for (int num1 = 1; num1 < 1000; num1++) {
        for (int num2 = 1; num2 < 1000; num2++) {
            int prod = num1 * num2;

            // Why did I put the "prod > largest" part before
            // "isPalindrome(prod)"?
            if (prod > largest && isPalindrome(prod)) {
                largest = prod;
            }
        }
    }

    std::cout << largest << std::endl;
}

class Solution {
public:
 bool isPalindrome(int x) {
    if (x < 0)
        return false;

    int long long original = x;
    int long long rev = 0;

    while (x > 0) {
        int digit = x % 10;
        rev = (rev * 10) + digit;
        x /= 10;
    }

    return original == rev;
}

int main() {
    int long long num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a Palindrome.";
    else
        cout << num << " is not a Palindrome.";

    return 0;
}
};
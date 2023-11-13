class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0) {
      return false;
    }

    int reversed = 0;
    int original = x;

    while (x > 0) {
      int digit = x % 10;

      // Check if the reversed number is overflowing.
      if (reversed > INT_MAX / 10) {
        return false;
      }

      reversed = reversed * 10 + digit;
      x /= 10;
    }

    return reversed == original;
  }
};

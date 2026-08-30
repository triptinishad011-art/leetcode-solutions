class Solution {
public:
    bool isPalindrome(int x) {
        
        // Negative numbers are not palindrome
        if (x < 0)
            return false;

        // Numbers ending in 0 are not palindrome
        // except 0 itself
        if (x != 0 && x % 10 == 0)
            return false;

        int reversedHalf = 0;

        // Reverse only half of the number
        while (x > reversedHalf) {
            int digit = x % 10;
            reversedHalf = reversedHalf * 10 + digit;
            x = x / 10;
        }

        // Even number of digits
        if (x == reversedHalf)
            return true;

        // Odd number of digits: ignore middle digit
        if (x == reversedHalf / 10)
            return true;

        return false;
    }
};
class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> count(26, 0); // Initialize a count array for characters 'a' to 'z'

        // Count characters in string s
        for (char c : s) {
            count[c - 'a']++;
        }

        // Subtract characters in string t
        for (char c : t) {
            count[c - 'a']--;
        }

        // Find the character with a count of -1 in t
        for (int i = 0; i < 26; i++) {
            if (count[i] == -1) {
                return 'a' + i;
            }
        }

        return ' '; // This line should not be reached
    }
};

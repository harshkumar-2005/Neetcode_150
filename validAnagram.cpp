#include <iostream>   // For input/output (if needed)
#include <string>     // For std::string
using namespace std;


    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        
        // Initialize frequency array to zero
        int arr[26] = {0};

        // Increment the count for characters in 's' and decrement for 't'
        for (int i = 0; i < s.size(); i++) {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }

        // Check if all counts are zero
        for (int j = 0; j < 26; j++) {
            if (arr[j] != 0)
                return false;
        }

        return true; // All character frequencies match
    }

// Test the function (optional)
int main() {
    
    string s = "anagram", t = "nagaram";

    if (isAnagram(s, t))
        cout << "The strings are anagrams.\n";
    else
        cout << "The strings are NOT anagrams.\n";

    return 0;
}

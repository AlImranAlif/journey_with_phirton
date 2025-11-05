#include <stdio.h>
#include <string.h>

int areAnagrams(char *word1, char *word2) {
    // If lengths are different, they can't be anagrams
    if (strlen(word1) != strlen(word2)) {
        return 0;
    }
    
    // Frequency array for 26 lowercase letters
    int freq[26] = {0};
    
    // Count frequencies in word1 and decrement for word2
    for (int i = 0; word1[i] != '\0'; i++) {
        freq[word1[i] - 'a']++; // Increment for word1
        freq[word2[i] - 'a']--; // Decrement for word2
    }
    
    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0; // Not anagrams if any frequency is non-zero
        }
    }
    
    return 1; // Anagrams if all frequencies are zero
}

int main() {
    char word1[101], word2[101];
    scanf("%s %s", word1, word2); // Read two space-separated strings
    
    if (areAnagrams(word1, word2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
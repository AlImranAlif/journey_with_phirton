#include <stdio.h>
#include <string.h>

int main() {
    char S[78]; // String of length 77 + null terminator
    scanf("%s", S); // Read the input string
    
    int freq[26] = {0}; // Frequency array for 'a' to 'z'
    
    // Count frequency of each letter
    for (int i = 0; i < 77; i++) {
        freq[S[i] - 'a']++; // Increment count for the letter
    }
    
    // Find the letter with frequency 2
    for (int i = 0; i < 26; i++) {
        if (freq[i] == 2) {
            printf("%c\n", 'a' + i); // Print the corresponding letter
            break; // Exit after finding the letter
        }
    }
    
    return 0;
}
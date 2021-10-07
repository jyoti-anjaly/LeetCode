class Solution {
public:
    int strStr(string haystack, string needle) {
        int M = needle.length();
    int N = haystack.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (haystack[i + j] != needle[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
    }
};
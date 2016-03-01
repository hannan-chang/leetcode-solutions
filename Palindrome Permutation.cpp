//Palindrome Permutation
//Given a string, determine if a permutation of the string could form a palindrome.
//For example,
//"code" -> False, "aab" -> True, "carerac" -> True. 

class Solution {
public:
    bool canPermutePalindrome(string s) {
        vector<int> count(256, 0);
        int n = s.length(), i;
        for(i=0; i<n; i++)
            count[s[i]]++;

        int number=0;    
        for(i=0; i<256; i++)
            if(count[i]%2 == 1)
                number++;

        return number<=1;
    }
};


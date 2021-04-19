/*
Determine if String Halves Are Alike. 
You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.
Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.
Return true if a and b are alike. Otherwise, return false.

Example 1:
Input: s = "book"
Output: true
Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.

Example 2:
Input: s = "textbook"
Output: false
Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
Notice that the vowel o is counted twice.

Example 3:
Input: s = "MerryChristmas"
Output: false

Example 4:
Input: s = "AbCdEfGh"
Output: true

Constraints:
    2 <= s.length <= 1000
    s.length is even.
    s consists of uppercase and lowercase letters.
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
        string ss = "AbCdEfGh";
        int Fcnt = 0, Scnt = 0;
        for(int i = 0, j = ((ss.length()/2)); i < ss.length()/2, j < ss.length(); i++, j++){
                if(ss[i] == 65 || ss[i] == 69 || ss[i] == 73 || ss[i] == 79 || ss[i] ==85 || ss[i] == 97 || ss[i] == 101 || ss[i] == 105 || ss[i] == 111 || ss[i] ==117 ){
                        Fcnt++;
                }
                if(ss[j] == 65 || ss[j] == 69 || ss[j] == 73 || ss[j] == 79 || ss[j] ==85 || ss[j] == 97 || ss[j] == 101 || ss[j] == 105 || ss[j] == 111 || ss[j] ==117 ){
                        Scnt++;
                }

        }
        if(Fcnt == Scnt){
                return 1;
        }
        else{
                return 0;
        }
}

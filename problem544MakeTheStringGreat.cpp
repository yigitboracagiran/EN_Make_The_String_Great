#include <iostream>
#include <vector>

class Solution {
public:
    std::string makeGood( std::string s ) {
        if ( s.length() == 1 ) return s; 
        int a = s.length();
        while ( a > 0 ) {
            for ( int i = 0 ; i < s.length() ; i++ ) {
                if ( ( s[i] + ' ' ) == s[i+1] || ( s[i] - ' ' ) == s[i+1] ) {
                    s.erase( i+1, 1 );
                    s.erase( i, 1 );
                    break;
                }
            }
            a--;
        }
        return s;
    }
};

int main ( void ) {
    Solution sol;
    std::string s = "leEeetcode";
    std::string answer = sol.makeGood( s );
    std::cout << answer << "\n";
    return 0;
}
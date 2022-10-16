# include "universal_headers.hpp"

class Solution {
public:
	bool isMatch (string s, string t) {
		int n = s.length(), m = t.length();
		vector<vector<bool>>dp (n + 1, vector<bool> (m + 1, false));
		dp[n][m] = true;
        for(int ii=n; ii>=0; ii--)
        {
            for(int jj=m-1;jj>=0; jj--)
            {
                bool match = (ii!=n) and (s[ii]==t[jj] || t[jj]=='.' );
                
                if (jj+1<m and t[jj+1]=='*')
                {
                    dp[ii][jj] = (match and dp[ii+1][jj]) or dp[ii][jj+2];
                }
                else if (match)
                {
                    dp[ii][jj] = dp[ii+1][jj+1];
                }
            }
        }
		return dp[0][0];
	}
};
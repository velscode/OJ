char * longestPalindrome(char * s){
	int i, j, l;
	
	int maxlen = 0;
	int max_i = 0;
	int max_j = 0;
	
	int len = strlen(s);
	if (len == 0) return "";
	if (len == 1) return s;
	
	int dp[len][len];
	
	// dp字符串长度 
	for (l = 0; l < len; l++) {
		for (i = 0; i + l < len; i++) {
			j = i + l;
			if (l > 1) {
				dp[i][j] = (dp[i + 1][j - 1] && s[i] == s[j]);
			} else if (l == 1) {
				dp[i][j] = (s[i] == s[j]);
			} else {
				dp[i][j] = 1;
			}
			
			if (dp[i][j] && l + 1 > maxlen) {
				max_i = i;
				max_j = j;
				maxlen = l + 1;
			}
		}
	}

    s[max_j + 1] = '\0';
    return s + max_i;
}
int hasRepeatElement(int start, int end, char * s)
{
	int i;
	char element[255];
	
	if (start == end) {
		return 0;
	}
	
	memset (element, 0, 255);
	
	for (i = start; i <= end; i++) {
		if (element[*(s+i)] == 1) {
			return 1;
		} else {
			element[*(s+i)] = 1;
		}
	}
	
    return 0;
}

int lengthOfLongestSubstring(char * s){
    char * tmp = s;
    int s_len = 0;

    int start = 0, end = 0;
    int max_start = 0, max_end = 0;

    while (*tmp++)
        s_len++;
    
    if (s_len == 0)
    	return 0;
        
	while (end != s_len) {

		if (hasRepeatElement(start, end, s) == 0) { //如果当前段没有重复项
			if (end - start + 1 > max_end - max_start + 1) { 
				max_start = start;
				max_end = end;
			}
			
			end++;
		} else {
			start++;
		}
	}

    return (max_end - max_start + 1);
}
int reverse(int x){
	double ret = 0;
	int negative = -1;
	
	if (x == INT_MIN || x == INT_MAX)
		return 0;
	
	if (x < 0) {
		negative = 1;
		x = -x;
	}
	
	while (x != 0) {
		ret = (ret * 10 + x % 10);
		x /= 10;
	}
	
	if (negative == -1 && ret > INT_MAX) {
		ret = 0;
	}
	if (negative && -ret < INT_MIN ) {
	    ret = 0;
	}
	
	return (-negative) * ret;
}
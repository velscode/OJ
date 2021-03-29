bool isPalindrome(int x){
    long int y = 0;
    int temp = x;

    if (x < 0)
        return false;

    while (temp) {
        y = y *10 + temp % 10;
        temp /= 10;
    }

    return y == x;
}
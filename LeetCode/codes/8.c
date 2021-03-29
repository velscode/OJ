int myAtoi(char * str){
    bool native = false;
    bool value = false;
    long int res;

    while (*str == ' ')
        str++;

    if (*str == '-') {
        native = true;
        str++;
    } else if (*str == '+') {
        str++;
    } else {
        ;
    }

    if (!isdigit(*str))
        return 0;
    else {
        res = (*str) - '0';
        str++;
    }

    while (isdigit(*str)) {
        res = res * 10 + *str - '0';

        if (res > INT_MAX) {
            if (native == true)
                return INT_MIN;
            else
                return INT_MAX;
        }

        str++;
    }

    if (native) {
        res = -res;
    }
    return res;
}
char * convert(char * s, int numRows){
    int i, j, k;
    int len;
    len = strlen(s);

    char * ret = malloc(sizeof(char) * len + 1);
    int retlen = 0;
    
    if (numRows == 1)
        return s;


    for(i = 0; i < len; i +=(2 * numRows - 2)) {
        ret[retlen++] = s[i];
    }
    
    for(i = 1; i < numRows - 1; i++) {
        for(j = i; j < len; j +=  (2 * numRows - 2)) {
            ret[retlen++] = s[j];

            if (j + (numRows - 1 - i) * 2 < len)
            ret[retlen++] = s[j + (numRows - 1 - i) * 2];
        }
    }


    for(i = numRows - 1; i < len; i +=(2 * numRows - 2)) {
        ret[retlen++] = s[i];
    }

    ret[retlen] = 0;
    return ret;
}
int VDate_isLeapYear(int y)
{
	return ( (y % 4 == 0) && (y % 100 != 0) );
}

int VDate_getMouthDays(int y, int m)
{
	if( m == 1 || m == 3  || m == 5 || m == 7 ||
	    m == 8 || m == 10 || m== 12)
	    {
			return 31;
		}
	if( m == 4 || m == 6 || m == 9 || m == 11 )
		{
			return 30;
		}
	if( m == 2 && VDate_isLeapYear(y) )  return 29;
	if( m == 2 && !VDate_isLeapYear(y) ) return 28;
	
	return 0;
}

//计算两个日期之间的相差的天数 
int VDate_dif(int y1, int m1, int d1, int y2, int m2, int d2)
{
	int dif = 0;
	while( y1!=y2 || m1!=m2 || d1!=d2 )
	{
		d2++;
		dif++;
		if( d2 > VDate_getMouthDays(y2,m2) )
		{
			d2=1;
			m2++;
			if( m2 > 12 )
			{
				m2 = 1;
				y2++;
			}
		}
	}
	
	return dif+1;
}

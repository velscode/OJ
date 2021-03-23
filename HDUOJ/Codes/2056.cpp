#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

//去掉最大值和最小值，将剩下的两个数排序后放回 
void f(double n[4])
{
	double *min_ele, *max_ele;
	
	min_ele = min_element(n,n+4);
	max_ele = max_element(n,n+4);
	
	*min_ele = 0;
	*max_ele = 0;
	
	sort(n,n+4);

}

int main()
{

	double x[4],y[4];
	
	while(~scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3]))
	{
		if( max(x[0],x[1]) <= min(x[2],x[3]) ||
			min(x[0],x[1]) >= max(x[2],x[3]) ||
			min(y[0],y[1]) >= max(y[2],y[3]) ||
			max(y[0],y[1]) <= min(y[2],y[3]) )
		{
			cout << "0.00" << endl;
			continue;
		}
		
		f(x);
		f(y);
		
		printf("%.2lf\n",(x[3]-x[2])*(y[3]-y[2]));
		
	}	
	
	return 0;
}



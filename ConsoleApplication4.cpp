#include<stdio.h>
int main()
{
	int n,y, r,run=1,d;
	scanf_s("%d%d%d", &n, &y, &r);
	printf("\n");
	if (n % 4 || (!(n % 100) && n % 400)) {
		run = 0;
	}
	switch (y) {
	case(1): d = r;
		break;
	case(2):d = 31 + r;
		break;
	case(3):d = 59 + run + r;
		break;
	case(4): d = 90+run+r;
		break;
	case(5):d = 120 + run+r;
		break;
	case(6):d = 151 + run + r;
		break;
	}
	printf("%d", d);




}
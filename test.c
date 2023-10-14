#include<stdio.h>
//今天是周六，又到了可以休息的日子了，7天后又会是一个周六。
//请你帮忙计算下，n（n为整数，可以是正也可以为负）天后会是星期几呢？
int main()
{
	int n;
	char* a[8] = {"六","日","一","二","三","四","五","六"};
	scanf_s("%d", &n);
	n = n % 7;
	if (n >= 0)
		printf("星期%s", a[n]);
	else
		printf("星期%s", a[-n-1]);
	return 0;
}
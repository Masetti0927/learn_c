#include<stdio.h>
void main()
{
	int year, month, day;
	int i = 0, sum = 0;
	int date[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("请输入年月日（按空格分割）：\n");
	scanf_s("%d %d %d", &year, &month, &day);
	for (i; i < month - 1; i++)
	{
		sum = sum + date[i];
	}
	sum = sum + day;
	if ((month>2&(year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
	{
		sum++;
	}
	printf("这是这一年的第%d天\n",sum);
}
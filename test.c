#include<stdio.h>
void main()
{
	int year, month, day;
	int i = 0, sum = 0;
	int date[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("�����������գ����ո�ָ��\n");
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
	printf("������һ��ĵ�%d��\n",sum);
}
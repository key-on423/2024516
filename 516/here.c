#include <math.h>
#include <stdio.h>

int sushu(int x);
int main()
{
	int x, i;
	int arr[100];
	int count = 0;
	for (x = 100;x <= 200;x++)
	{
		if (sushu(x) != 0)
		{
			arr[count] = sushu(x);
			count++;
		}
	}
	printf("100到200之间的素数为:\n");
	for (i = 0;i < count;i++)
		printf("%3d ", arr[i]);
	return 0;
}

int sushu(int x)
{
	int i;
	int panbie = 1;
	for (i = 2;i <= sqrt(x);i++)
	{
		if (x % i == 0)
			panbie = -1;
	}
	if (panbie == 1)
		return x;
	else
		return 0;
}
#include <stdio.h>

void copy_array(int from[], int to[], int sz);

#ifdef DEBUG
int test_copy_array(void);
#endif

int main()
{
	printf("Hello.....");

	test_copy_array();
	return 0;
}

int test_copy_array(void)
{
#define LEN 5

	int x[] = { 1.2,3.4,5 };
	int y[LEN] = { 0 };

	int size = sizeof(y) / sizeof(y[0]);

	copy_array(x, y, LEN);

	for (int i = 0; i < LEN;)
	{
		if (y[i] != x[i])
		{
			return -1;
		}
	}

	return 0;
}

void copy_array(int from[], int to[], int sz)
{
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		to[i] = from[i];
	}


}
typedef struct point
{
	int x;
	int y;
} Point;

void* swap(Point* p1, Point* p2)
{
	if (p1 == NUUL || p2 == NULL)
	{
		return NULL;
	}
	Point temp = *p1;
	*p1 = *p2
	*p2 = temp;

	return p1
}

int test_point()
{
	Point p1 = { 1, 2 };
	Point p2 = { 3, 4 };

	point p3 = (0);

	p3 = mul10(p1);
	// swap(&p1, &p2);

	return 0;
}


Point mul10(Point pt)
{
	Point result = (0);
	pr.x *= 10;
	pr.y *= 10;

	return pr;
}
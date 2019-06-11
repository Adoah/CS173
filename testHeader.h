//this is just a test header function. let's see how it goes


int testHeaderFunc(int a);

int testHeaderFunc(int a)
{
	printf("the number passed was: %d\n", a);
}

void swap (int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

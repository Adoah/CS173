// Example program
#include <stdio.h>
#include <stdlib.h>

int genArr();
int sortboiii();
int printArrFunc();

int len;
int *array;

int main()
{
	printf("enter the length of the array you want ");
    	int input;
  	scanf("%d", &input);
    	printf("your input was %d\n", input);
    	len = input;
    	array = (int *) malloc(100*sizeof(input));
    	//int *a = (int*)malloc(num * sizeof(int));
    	printf("malloc done\n");
    	genArr();
    	printf("genarr done\n");
    	printArrFunc();
    	printf("arrfunc done\n");
    	sortboiii();
    	printf("donzo\n");
	printArrFunc();
	return 0;
}

int genArr()
{
	int i, n;
	printf("lenght is: %d\n", len);
	for (i = 0; i < len; i++)
	{
		n = rand() % 100 + 1;
		array[i] = n;
		printf(", %d", n);
	}
	printf("\n");
	return 0;
}

int sortboiii()
{
	int i, j,temp;
        for(i = 0; i <= len; i++)
        {
		for(j=0; j <= len; j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
        }
//	printf("here's yo fochin' nombars boiiiiii: ");
//	for (i = 2; i < len+2; i++)
//	{
//		printf("%d, ", array[i]);
//	}
//	printf("\n");
//	return 0;
}

int printArrFunc()
{
	printf("printarr func \n");
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("\n");
	return 0;
}

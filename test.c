#include <stdio.h>

#include "testHeader.h"

int testFunc(int testVar);

struct point {
	int x;
	int y;
};

struct line {
	struct point begin;
	struct point end;
};

void printLineStruct(struct line * target);

int main()
{
	//this prints out "hello world"
	printf("Hello world\n");
	testFunc(18);
	struct line l1;
	l1.begin.x = 1;
	l1.begin.y = 3;
	l1.end.x = 5;
	l1.end.y = 19;
	printLineStruct(&l1);
	int input;
	printf("please enter a number, we're gonna try and get some input here from you. ");
	scanf("%d", &input);
	printf("your input was: %d\n", input);
	testHeaderFunc(9871);
}

void printLineStruct(struct line * target)
{
	printf("begin @ x: %d, begin @ y: %d, end @ x: %d, end @ y: %d \n", target->begin.x, target->begin.y, target->end.x, target->end.y);
}

int testFunc(int testVar)
{
	 printf("the variable that you provided the function is: %d, multiplied by 2 it is: %d:\n", testVar, testVar*2);
}

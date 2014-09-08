#include "ctest.h"

#include <stdlib.h>
#include <stdio.h>

struct Tester {
	int status; /* this int represents the status, nonzero if the tests */
		    /* are passing, zero if they are not */
};

struct Tester* newtest(void) 
{
	struct Tester* test_ptr = (struct Tester*)malloc(sizeof(struct Tester));
	test_ptr->status = 1;
	return test_ptr;
}

void reset(struct Tester* t)
{
	t->status = 1;
}

void test(struct Tester* t, int test, char* msg)
{
	if (test) {
		printf("PASSED: %s\n", msg);
	} else {
		printf("FAILED: %s\n", msg);
		t->status = 0;
	}
}

void testf(struct Tester* t, int test, char* msg)
{
	if (test) {
		printf("PASSED: %s\n", msg);
	} else {
		printf("FAILED: %s\n", msg);
		free(t);
		exit(1);
	}
}

void finish(struct Tester* t)
{
	int status = t->status;
	free(t);
	exit(!status);
}

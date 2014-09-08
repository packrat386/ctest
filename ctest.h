#ifndef CTEST_H
#define CTEST_H

/* ctest is a unit testing framework for use with C/C++ */

/* Tester is a struct that holds our testing information */
struct Tester;

/* newtest returns a pointer to a Tester struct which is initialized to be */
/* passing */
struct Tester* newtest(void);

/* reset resets the pointed to Tester as if all tests had passed */
void reset(struct Tester* t);

/* test is a function that outputs PASS or FAIL based on whether test is */
/* nonzero or 0/NULL. It also outputs the given message, and sets flags in */
/* the Tester object */
void test(struct Tester* t, int test, char* msg);

/* testf is a function that outputs PASS or FAIL based on whether test is */
/* nonzero or 0/NULL. It also outputs the given message. If the test fails, */
/* it immediately exits with a nonzero code */
void testf(struct Tester* t, int test, char* msg);

/* finish exits the function with a zero exit code if the tests are passing */
/* and a nonzero exit code if they are failing */
void finish(struct Tester* t);

#endif /* CTEST_H */

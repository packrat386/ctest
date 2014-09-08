CC = gcc
LD = gcc

CFLAGS = -c -std=c89 -pedantic-errors -Wmissing-prototypes -Wall
LFLAGS = -Wall

OBJS = ctest.o
TESTS = ctest_test.o

EX = testme

default: $(OBJS)

test: $(OBJS) $(TESTS)
	$(LD) $(LFLAGS) $(OBJS) $(TESTS) -o $(EX)
	./$(EX)

ctest.o: ctest.h ctest.c
	$(CC) $(CFLAGS) ctest.c

ctest_test.o: ctest.h ctest_test.c
	$(CC) $(CFLAGS) ctest_test.c

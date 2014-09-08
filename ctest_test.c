#include "ctest.h"

#include <stdlib.h>
#include <stdio.h>

int main()
{
	struct Tester* t;
	t = newtest();
	test(t, 1 < 2, "This should pass");
	test(t, 1 > 2, "This should fail");
	testf(t, 1 < 2, "This should pass and not exit");
	testf(t, 1 > 2, "This should fail and then exit");
	return 0;
}

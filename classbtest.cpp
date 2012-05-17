#include <cppunit/extensions/HelperMacros.h>
#include "classb.h"
#include "classbtest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ClassBTest);

void ClassBTest::TestMain(void)
{
	ClassB myClassb;

	myClassb.setValue(1);
	CPPUNIT_ASSERT(myClassb.getValue() == 1);
}

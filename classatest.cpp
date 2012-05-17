#include <cppunit/extensions/HelperMacros.h>
#include "classa.h"
#include "classatest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ClassATest);

void ClassATest::TestMain(void)
{
	ClassA myClassa;

	std::string testValue = "Hello !! :)", testValue2 = "WooOOorRLld !";

	myClassa.setVar(testValue);
	CPPUNIT_ASSERT(myClassa.getVar() == testValue);

	myClassa.setVar(testValue2);
	CPPUNIT_ASSERT(myClassa.getVar() == testValue2);
	CPPUNIT_ASSERT_ASSERTION_FAIL(CPPUNIT_ASSERT(myClassa.getVar() == testValue));
}

void ClassATest::TestMain2(void)
{
	ClassA myClassa;

	CPPUNIT_ASSERT(myClassa.isEmpty() == true);

	myClassa.setVar("Hey hey heEyE !!");
	CPPUNIT_ASSERT(myClassa.isEmpty() == false);
}

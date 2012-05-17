#ifndef CLASSATEST_H
#define CLASSATEST_H

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class ClassATest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(ClassATest);
	CPPUNIT_TEST(TestMain);
	CPPUNIT_TEST(TestMain2);
	CPPUNIT_TEST_SUITE_END();

	public:
		//~ Call before tests
		void setUp(void) {}

		//~ Call after tests
		void tearDown(void) {}

		void TestMain(void);
		void TestMain2(void);
};

#endif

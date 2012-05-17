#ifndef CLASSBTEST_H
#define CLASSBTEST_H

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class ClassBTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(ClassBTest);
	CPPUNIT_TEST(TestMain);
	CPPUNIT_TEST_SUITE_END();

	public:
		//~ Call before tests
		void setUp(void) {}
		//~ Call after tests
		void tearDown(void) {}

		void TestMain(void);
};

#endif

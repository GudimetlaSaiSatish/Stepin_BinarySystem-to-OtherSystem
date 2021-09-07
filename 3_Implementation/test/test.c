#include "unity_internals.h"
#include "unity.h"
#include "operations.h"

void setUp()
{

}
void tearDown()
{

}

/* valid choice check*/
void choice_chk(void)
{

	TEST_ASSERT_EQUAL(1,validate_choice(0));
	TEST_ASSERT_EQUAL(1,validate_choice(3));
	TEST_ASSERT_EQUAL(1,validate_choice(2));
	TEST_ASSERT_EQUAL(1,validate_choice(1));
	TEST_ASSERT_EQUAL(0,validate_choice(4));
	TEST_ASSERT_EQUAL(0,validate_choice(-1));

	


}

/* valid Binary Check */

void bin_chk(void)
{

	TEST_ASSERT_EQUAL(1,binary_check("101011"));
	TEST_ASSERT_EQUAL(1,binary_check("1111.11"));
	TEST_ASSERT_EQUAL(1,binary_check("1111111111"));
	TEST_ASSERT_EQUAL(0,binary_check("1111111112"));
	TEST_ASSERT_EQUAL(0,binary_check("256.9"));
	
}



int main()
{
	UNITY_BEGIN();
	RUN_TEST(choice_chk);
	RUN_TEST(bin_chk);

	return UNITY_END();
}

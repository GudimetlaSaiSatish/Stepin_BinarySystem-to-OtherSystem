#include "unity_internals.h"
#include "unity.h"
#include "operations.h"

void setUp()
{

}
void tearDown()
{

}

/*Test for Binary to Decimal*/
void bin_dec(void)
{
	TEST_ASSERT_EQUAL_DOUBLE(10.000000,double Binary_to_Decimal("1010"));
}

/*Test for Binary to Octal*/
void bin_oct(void)
{
    TEST_ASSERT_EQUAL_STRING("53.0",void Binary_to_Octal("101011"));
}


/*Test for Binary to Hexadecimal*/
void bin_hex(void)
{
    TEST_ASSERT_EQUAL_STRING("FF",void Binary_To_Hexadecimal ("11111111"));
}




int main()
{
	UNITY_BEGIN();
	RUN_TEST(bin_dec);
	RUN_TEST(bin_oct);
	RUN_TEST(bin_hex);
	
	return UNITY_END();
}
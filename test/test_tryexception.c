#include "unity.h"
#include "tryexception.h"
#include "Exception.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_tryexception_radius_5(void)
{
    tryExcerption(5);
}

void test_tryexception_radius_neg(void)
{
 tryExcerption(-5);
}
   
void test_tryexception_radius_zero(void)
{ 
    //tryExcerption(0);
    TEST_ASSERT_EQUAL(0,radius);
}
extern "C"
{
#include "Hello.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(Hello)
{
    void setup()
    {
      Hello_Create();
    }

    void teardown()
    {
       Hello_Destroy();
    }
};

TEST(Hello, Create)
{
  FAIL("Start here!!!");
}

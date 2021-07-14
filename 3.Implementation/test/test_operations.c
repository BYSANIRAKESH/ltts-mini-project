#include "unity.h"
	#include"test_operations.h"
	#include"hello.h"
	

	
	void test_hello(void);
	
	void setUp()
	{	}
	void tearDown()
	{	}
	
	

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_hello);
		
		
		

  		return UNITY_END();
	}

	void test_hello(void)
	{
  	
	}
	

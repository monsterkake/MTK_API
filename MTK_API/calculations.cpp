#include <chrono>
#include <iostream>
#include "calculations.h"
#include <thread>

int fun() 
{
	while (true) 
	{
		std::cout << "fun";
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	
	return 0;
}
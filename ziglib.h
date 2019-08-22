// ziglib.h is a library of functions created while I was learning C++, and includes various helper functions that I needed to speed up my homework.

#pragma once

#include <iostream>
#include <string>

namespace zig
{
	int goodData(int foo)
	{
		std::string str;
		
		while( !(std::cin >> foo))
		{
			std::cin.clear();
			std::getline(std::cin, str);
			std::cout << "ERROR: \"" << str << "\" is not a valid entry for this form. Please enter an integer instead.\n";
		}
		
		std::cin.clear();
		std::cin.ignore(100, '\n');
		
		return foo;
	}
	
	float goodData(float foo)
	{
		std::string str;
		
		while( !(std::cin >> foo))
		{
			std::cin.clear();
			std::getline(std::cin, str);
			std::cout << "ERROR: \"" << str << "\" is not a valid entry for this form. Please enter a real number instead.\n";
		}
		
		std::cin.clear();
		std::cin.ignore(100, '\n');
		
		return foo;
	}
	
	double goodData(double foo)
	{
		std::string str;
		
		while( !(std::cin >> foo))
		{
			std::cin.clear();
			std::getline(std::cin, str);
			std::cout << "ERROR: \"" << str << "\" is not a valid entry for this form. Please enter a real number instead.\n";
		}
		
		std::cin.clear();
		std::cin.ignore(100, '\n');
		
		return foo;
	}
}
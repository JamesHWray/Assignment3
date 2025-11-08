#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>

extern "C" char* ThrownOut(char[], char[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(InvalidPlayerOne)
		{
			//testing if player 1 input an invaild response
			char result[50] = "Invalid";
			char PlayerOne[] = "fhdhbhvdb";
			char PlayerTwo[] = "scissors";
		
			strcpy_s(result,sizeof(result), ThrownOut(PlayerOne, PlayerTwo));
			Assert::AreEqual(result,"Invalid");
		}
	};
}

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
			//testing if player 1 inputs an invaild response
			char result[50] = "Invalid";
			char PlayerOne[] = "fhdhbhvdb";
			char PlayerTwo[] = "Scissors";
		
			strcpy_s(result,sizeof(result), ThrownOut(PlayerOne, PlayerTwo));
			Assert::AreEqual(result,"Invalid");
		}
		TEST_METHOD(InvalidPlayerTwo)
		{
			//testing if player 2 inputs an invaild response
			char result[50] = "Invalid";
			char PlayerOne[] = "Scissors";
			char PlayerTwo[] ="fhdhbhvdb";

			strcpy_s(result, sizeof(result), ThrownOut(PlayerOne, PlayerTwo));
			Assert::AreEqual(result, "Invalid");
		}
	};
}

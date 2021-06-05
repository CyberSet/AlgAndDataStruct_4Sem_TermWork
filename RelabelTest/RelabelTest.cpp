#include "pch.h"
#include "CppUnitTest.h"
#include "..\\pushRelabelMaxFlow\graph.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RelabelTest
{
	TEST_CLASS(RelabelTest)
	{
	public:
		graph test;
		TEST_METHOD(pushRelableSampleTest1)
		{
			fstream in("F:\\Универ\\Прога 4 сем\\AlgAndDataStruct_4Sem_TermWork\\pushRelabelMaxFlow\\in.txt");
			test.inputVertex(in);
			in.open("F:\\Универ\\Прога 4 сем\\AlgAndDataStruct_4Sem_TermWork\\pushRelabelMaxFlow\\in.txt");
			test.inputEdge(in);
			Assert::AreEqual(test.getMaxFlow(), 5);
		}

		TEST_METHOD(pushRelableSampleTest2)
		{
			fstream in("F:\\Универ\\Прога 4 сем\\AlgAndDataStruct_4Sem_TermWork\\pushRelabelMaxFlow\\test1.txt");
			test.inputVertex(in);
			in.open("F:\\Универ\\Прога 4 сем\\AlgAndDataStruct_4Sem_TermWork\\pushRelabelMaxFlow\\test1.txt");
			test.inputEdge(in);
			Assert::AreEqual(test.getMaxFlow(), 7);
		}

		TEST_METHOD(pushRelableSampleTest3)
		{
			fstream in("F:\\Универ\\Прога 4 сем\\AlgAndDataStruct_4Sem_TermWork\\pushRelabelMaxFlow\\test2.txt");
			test.inputVertex(in);
			in.open("F:\\Универ\\Прога 4 сем\\AlgAndDataStruct_4Sem_TermWork\\pushRelabelMaxFlow\\test2.txt");
			test.inputEdge(in);
			Assert::AreEqual(test.getMaxFlow(), 9);
		}
	};
}

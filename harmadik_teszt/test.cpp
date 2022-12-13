#include <gtest/gtest.h>
#include "Header.h"
using namespace std;


TEST(storyToArray, teszt3) {
	int b = 101;
	int counter = b;
	string proba = "proba";
	string& storyStr = proba;
	string proba2 = "proba2";
	string* storyParts = &proba2;
	string mutato = "string";
	string& story = mutato;
	int newlenght = 5;
	storyToArray(storyStr, storyParts, counter, newlenght);
	EXPECT_EQ(15, newlenght);


}
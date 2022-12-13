#include <gtest/gtest.h>
#include "Header.h"
using namespace std;


TEST(countStoryParts, teszt2) {
	int b = 101;
	int counter = b;
	string mutato = "string";
	string& story = mutato;
	int a = 2;
	int newlenghts = a;
	int newlenghts = 5;
	countStoryParts(story, counter, newlenghts);
	EXPECT_EQ(20,counter);
	
 
}
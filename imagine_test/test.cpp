#include <gtest/gtest.h>
#include "Header.h"
using namespace std;

TEST(getTitleTest, checkexample) {
	string valami = "IMAGINE";
	string mutato = "string";
  string & story = mutato;
  string *title = &valami;
  int a = 2;
  int* newlenght = &a;
  int newlenght = 5;
  getTitle (story, title, newlenght);
  EXPECT_EQ("IMAGINE", title);
 } 


 /*TEST(getTitleTest, checkexample) {
	
   string title = "IMAGINE";
   
   EXPECT_EQ("IMAGINE", title);
  } */
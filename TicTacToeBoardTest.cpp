/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};
TEST(TicTacToeBoardTest, simple_test)
{
	TicTacToeBoard mypractice;
	bool actual = mypractice.toggleTurn()
    ASSERT_TRUE(true);
}





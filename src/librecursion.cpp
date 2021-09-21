/** @file librecursion.cpp
 * @brief Recursive function implementations for Assignment Recursion:
 *   Writing and Understanding Recursive Functions
 *
 * @author Michael Beaty
 * @note   class: COSC 2336, Fall 2021
 * @note   ide  : VSCode Server 3.9.3, Gnu Development Tools
 * @note   assg : Assignment Recursion
 * @date   9/24/21
 *
 * Implement several functions using both iteration and recursion.
 * For more practice with using basic C/C++ arrays, we will
 * write functions taking arrays as input to be manipulated.
 *
 * This file contains the actual implementation of the functions
 * and code you are required to complete for Assignment Recursion.
 * Make sure you modify the file header information to be correct
 * for the code you are creating.
 */
#include "List.hpp"

// In this assignment you will not be given the function documentation
// comments ahead of time.  But you are required to write function
// documentation for all of your functions for this assignment.  You must
// use the function comment block format you have seen in previous
// assignments, including giving a name, short description, and
// documenting parameters and return value using @param and @returns
// tags respectively.

/** Add a range in a List iteratively
 *  This function takes in a List object and adds the indexes
 *  from the start index to the end index
 *
 *  @param listIn inputted list that has values summed together and returned.
 *
 *  @param start int value for the starting index of the summation
 *
 *  @param end int value for the ending index of the summation. This value
 *   is included in the summation. end must be greater than start.
 *
 *  @returns int value of summation from start to end indexes
 */
int sumIterative(List& listIn, int start, int end)
{
  int sum = 0;

  for (int index = start; index <= end; index++)
  {
    sum += listIn[index];
  }

  return sum;
}

/** Add a range in a List recursively
 *  This function takes in a List object and adds the indexes
 *  from the start index to the end index
 *
 *  @param listIn inputted list that has values summed together and returned.
 *
 *  @param start int value for the starting index of the summation
 *
 *  @param end int value for the ending index of the summation. This value
 *   is included in the summation. end must be greater than start.
 *
 *  @returns int value of summation from start to end indexes
 */
int sumRecursive(List& listIn, int start, int end)
{
  if (start <= end)
  {
    return listIn[start] + sumRecursive(listIn, start + 1, end);
  }
  else
  {
    return 0;
  }
}

/** flips the List within an given range iteratively
 * This function will take in a List and swap the locations of the values
 * within a given range. i.e. swapping start with end then start + 1 
 * with end - 1 ect.
 *
 * @param listIn a List object passed in by reference
 *
 * @param start starting index of the range of values to be swapped
 *
 * @param end ending index of the range to be swapped. this loaction
 *  is included for swapping.
 */
void reverseIterative(List& listIn, int start, int end)
{
  int temp = 0;

  for (int index = start; index < end; index++)
  {
    temp = listIn[end];
    listIn[end] = listIn[index];
    listIn[index] = temp;

    end--;
  }
}

/** flips the List within an given range recuseively
 * This function will take in a List and swap the locations of the values
 * within a given range. i.e. swapping start with end then start + 1
 * with end - 1 ect.
 *
 * @param listIn a List object passed in by reference
 *
 * @param start starting index of the range of values to be swapped
 *
 * @param end ending index of the range to be swapped. this loaction
 *  is included for swapping.
 */
void reverseRecursive(List& listIn, int start, int end)
{
  if(start < end)
  {
    reverseRecursive(listIn, start + 1, end - 1);
  }
  else
  {
    return;
  }
  
  int temp = listIn[start];
  listIn[start] = listIn[end];
  listIn[end] = temp;
}

/** iteratively checks if given List is a palindrome
 * This functions checks to see if the given range of a List's 
 * values is a palindrome.
 *
 * @param listIn list to be checked
 * 
 * @param start index value for the start of the check
 * 
 * @param end index value for the end of the check. this value
 *  will be included in the check.
 *
 * @returns boolean value of if the given List's range is a palindrome
 */
bool isPalindromeIterative(List& listIn, int start, int end)
{
  List* temp = new List(listIn);
  reverseIterative(*temp, start, end);

  for (int index = start; index < end; index++)
  {
    if (temp->operator[](index) != listIn[index])
    {
      return false;
    }
  }

  return true;
}
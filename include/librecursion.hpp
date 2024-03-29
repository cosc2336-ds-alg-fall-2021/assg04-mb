/** @file librecursion.hpp
 * @brief Header file for Assignment Recursion: Writing and Understanding
 *   Recursive Functions
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
 * This file contains function prototypes and class declarations
 * for the assignment.  These are the things that need to be
 * declared in order for another project or file to use the
 * functions defined here and in the implementation file.  Only
 * class declarations, function prototypes and signatures
 * go in the header file.  All actual implementation of functions
 * and member functions should be put into the [.cpp] implementation
 * file.
 */
#ifndef _LIBRECURSION_HPP_
#define _LIBRECURSION_HPP_
#include "List.hpp"
#include <iostream>
using namespace std;

// function prototypes for Assignment Recursion
// You will need to add in the correct function protypes for the functions
// you are to write for this assignment here.  The actual implementation
// of your functions should be put into the corresponding [x.cpp]
// source implementation file.

int sumIterative(List& listIn, int start, int end);
int sumRecursive(List& listIn, int start, int end);
void reverseIterative(List& listIn, int first, int last);
void reverseRecursive(List& listIn, int start, int end);
bool isPalindromeIterative(const List& listIn, int start, int end);
bool isPalindromeRecursive(List& listIn, int start, int end);

#endif // _LIBRECURSION_HPP_

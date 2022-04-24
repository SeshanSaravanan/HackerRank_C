/*
Objective

if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:

if: This executes the body of bracketed code starting with  if  evaluates to true.

if (condition) {
    statement1;
    ...
}
if - else: This executes the body of bracketed code starting with  if  evaluates to true, or it executes the body of code starting with  if  evaluates to false. Note that only one of the bracketed code sections will ever be executed.

if (condition) {
    statement1;
    ...
}
else {
    statement2;
    ...
}
if - else if - else: In this structure, dependent statements are chained together and the  for each statement is only checked if all prior conditions in the chain are evaluated to false. Once a  evaluates to true, the bracketed code associated with that statement is executed and the program then skips to the end of the chain of statements and continues executing. If each  in the chain evaluates to false, then the body of bracketed code in the else block at the end is executed.

if(first condition) {
    ...
}
else if(second condition) {
    ...
}
.
.
.
else if((n-1)'th condition) {
    ....
}
else {
    ...
}
Task

Given a positive integer denoting , do the following:

If , print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.
Input Format

The first line contains a single integer, .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.

Sample Input

5
Sample Output

five
Sample Input #01

8
Sample Output #01

eight
Sample Input #02

44
Sample Output #02

Greater than 9
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int print() {
    
    int n;
    scanf("%d", &n);
    if(n == 1) {
        printf("one");
    }
    else if(n == 2) {
        printf("two");
    }
    else if(n == 3) {
        printf("three");
    }
    else if(n == 4) {
        printf("four");
    }
    else if(n == 5) {
        printf("five");
    }
    else if(n == 6) {
        printf("six");
    }
    else if(n == 7) {
        printf("seven");
    }
    else if(n == 8) {
        printf("eight");
    }
    else if(n == 9) {
        printf("nine");
    }
    else {
        printf("Greater than 9");
    }
    
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    char* represent[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d", &n);

    if(n > 9) {
        printf("%s", represent[0]);
    }
    else {
        printf("%s", represent[n]);
    }

    return 0;
}

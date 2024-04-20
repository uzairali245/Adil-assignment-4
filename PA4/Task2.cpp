#include <iostream>
#include <string>
#include <stack>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
using namespace std;

//NO HELPERS ALLOWED
//LOGIC SHOULD INCLUDE STACKS

int areExpressionsEqual(string exp1, string exp2) {
    // Your code here
}

int main() {
    // Your code here
    cout << endl << YELLOW << "Testing Evaluating Expressions using Stacks" << endl;
    int marks = 0;
    string exp1 = "-(a+b+c)";
    string exp2 = "-(a+b+c)";
    if(areExpressionsEqual(exp1, exp2) == -1)
    {
        marks += 2;
        cout << endl << GREEN << "Case 1: Passed 2/10";
    }
    else
    {
        cout << endl << RED << "Case 1: Failed 0/10";
    }
    exp1 = "a*b/(c-d)";
    exp2 = "a*b/c-d";
    if(areExpressionsEqual(exp1, exp2) == 4)
    {
        marks += 2;
        cout << endl << GREEN << "Case 2: Passed " << marks << "/10"; 
    }
    else
    {
        cout << endl << RED << "Case 2: Failed " << marks << "/10";
    }
    exp1 = "2^xy";
    exp2 = "2^xz";
    if(areExpressionsEqual(exp1, exp2) == 3)
    {
        marks += 2;
        cout << endl << GREEN << "Case 3: Passed " << marks << "/10"; 
    }
    else
    {
        cout << endl << RED << "Case 3: Failed " << marks << "/10";
    }
    exp1 = "a+b*(c^d-e)^(f+g*h)-i";
    exp2 = "a+b*(c^d-e)^(f+g*h)-i";
    if(areExpressionsEqual(exp1, exp2) == -1)
    {
        marks += 2;
        cout << endl << GREEN << "Case 4: Passed " << marks << "/10"; 
    }
    else
    {
        cout << endl << RED << "Case 4: Failed " << marks << "/10";
    }
    exp1 = "(2-3+4)*(5*6/7)";
    exp2 = "(2-3+4)";
    if(areExpressionsEqual(exp1, exp2) == 7)
    {
        marks += 2;
        cout << endl << GREEN << "Case 5: Passed " << marks << "/10"; 
    }
    else
    {
        cout << endl << RED << "Case 5: Failed " << marks << "/10";
    }
    cout << endl << endl << MAGENTA << "TOTAL MARKS: " << marks << "/10";
    if(marks == 10)
    {
        cout << endl << endl << CYAN << "WOHOO!! Good Job";
    }
    return 0;
}
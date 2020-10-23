// C++ program to find factorial of given number 
#include <iostream> 
using namespace std; 

// function to find factorial of given number 
unsigned int factorial(unsigned int n) 
{ 
	if (n == 0) 
		return 1; 
	return n * factorial(n - 1); 					// returns the factor of a given number
} 

// Driver code 
int main() 
{ 
	int num = 5; 
	cout << "Factorial of "
		<< num << " is " << factorial(num) << endl; 		// factorial of a given number
	return 0; 
} 

// This code is contributed by Amit Kumar 

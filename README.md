## Embedded-System-Training

#Assign 5:

1)Inline function advantage over macro

Inline program: 

Enter value for a and b:5 6

Product of a and b=30

Product of a+2 and b+3=63

Macro Program:

Enter values for a and b: 5 6

Product of a and b is:30

Incorrect product of a+2 and b+3 is:20

Correct product of a+2 and b+3 is:63

#Assign 4:
1)Details About Moxa Board

2)Linux Command to print time in sec,millisec and nanosec :

date +%c%n%r%n%S%n%3N%n%N

Thursday 17 June 2021 11:04:48 PM IST

11:04:48 PM IST

48

728

728780183

3)Why Inline function needs static storage class:

When inline functions are declared in a program and they are compiled on a GCC compiler we get an error stating undefined reference to that particular function.
This is because GCC performs inline substitution for code optimization and there is no function call statements in main(). The inline function is not provided 
with a linker and therefore the main() cannot call it. To over come this error we use static storage to force the compiler to include the inline function in the linker and function calls can now be made.

4)How are arguements passed to other function and how is that value assigned to varible:
There are two ways to pass arguements in a function call statement- pass by value and pass by reference. In pass by value a copy of the data is made and stored by way of the name of the parameter. Any changes to the parameter has no affect on data in the calling function. In pass by reference a reference parameter is created for the original data in the calling function which will then be accessed by the variables in the called function. Ay changes made to the parameter are also  made to the original variable. 

#Assign 3:

1)Recursion Prog1:

Enter number N- 10

Printing all numbers from N to 1:

10 9 8 7 6 5 4 3 2 1

2)Recursion Prog:

Enter number N- 10

Printing all numbers from 1 to N:

1 2 3 4 5 6 7 8 9 10

3)Binary to Decimal:

Enter number to be converted to binary: 25

Binary No of 25 is 1100

#Assign 2:

1)Password Prog:

Enter password: euro2021
xxxxxxxx

2)Prog Output:

1

3)Prog Output:

Enter a number:243556889798

Sum is=57


4)Prog Error Output:

error: ‘z’ undeclared (first use in this function)


#Assign 1:

1)Errors in Nested Loops:

error: unknown type name ‘this’

error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘*’ token

error: expected declaration or statement at end of input

2)Output of Prog2:

ch1=A
ch2=b
ch3=3
ch2=65
ch2=98
ch2=51

De Anza College<BR>
Dr. Ira Oldham<BR>
Fall 2017<BR>
CIS 22B Intermediate Programming Methodologies in C++<BR>

# Instructions
Order of functions in the code:<BR>
<BR>
Within the Car class:

1. setup
2. output

Global functions, outside of the Car class:

1. main
2. input

Define a class named: Car <BR>
containing the following private data: <BR>
<BR>
reportingMark	  a string with the AAR reporting mark<BR>
carNumber	  an int<BR>
kind	  a string which could contain "business" "maintenance" or "other"<BR>
loaded	  a bool<BR>
destination	  a string with a destination or the word "NONE"<BR>
<BR>
Note: <BR>
A destination is required if the car is loaded. <BR>
If it is not loaded the destination may be either a destination or the word "NONE".<BR>
Be sure to allow the user the option of entering a destination when the car is not loaded.<BR>
<BR>
Within the class create the following member functions:<BR>
<BR>
setup 

- Is a member function of the class Car
- Takes the five parameters by value: reportingMark, carNumber, kind, loaded, and destination
- Puts the data in the object
- Has a return type of void

output

- Is a member function of the class Car
- Has no parameters
- Prints the member data in a neat format
- Has a return type of void

After the class, create the following global functions:<BR>
<BR>
main

- Contains six variables:
    - a pointer named ptr which points to a Car object
    - a string named reportingMark to contain two to four characters
    - an int named carNumber
    - a string named kind which could contain: "business" "maintenance" or "other"
    - a bool named loaded
    - a string named destination containing a destination or the word NONE
- Uses new to obtain space for an object of type Car
- Calls the input, setup, and output functions
- Deletes the space obtained using new

input

- Is a global function, not a member of the class
- Takes the reportingMark, carNumber, kind, loaded, and destination as reference parameters
- Reads the reportingMark, carNumber, kind, loaded, and destination from the user
- Has a return type of void

Test your program with the following data:<BR>
<BR>
reportingMark	  SP<BR>
carNumber	  34567<BR>
kind	  business<BR>
loaded	  true<BR>
destination	  Salt Lake City<BR>

# Outcome
Not Graded Yet
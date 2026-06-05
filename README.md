# OPP-LAB-
## Week-1:
### Experiment 01
Write a program that declares a structure based on the following entity shown in the box. The program must declare and initialize an instance of the structure entity i.e. Student. The attributes of the entity are shown in oval shapes associated with the entity. Use the following data type for the attributes of the student:

* integer for studentID
* char* for studentName
* char* for courscode
* char* for courseName
* integer for courseMarks
## Week-1



### Experiment 02:
Create a structure of type Date that contains three members: the month, the day of the month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have the user enter a date in the format 12/31/2001, store it in a variable of type struct Date, then retrieve the values from the variable and print them out in the same format.

### Experiment 03:
Create a structure called Employee that contains two members: an employee number (type int) and the employee’s compensation (in dollars; type float). Ask the user to fill in this data for three employees, store it in three variables of type struct Employee, and then display the information for each employee. Use a seperate display function for the information display.

# Week02
## Experiment 01
Write a program to define a structure with 5 members. The first member be student name and the other member be student roll number and marks obtained in 3 subjects. Input values from the user. Add the marks of the subject and calculate the total marks and then print these numbers and total marks of the student.

## Experiment 02
Create a structure of type Date that contains three members: the month, the day of the month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have the user enter a date in the format 12/31/2001, store it in a variable of type struct Date, then retrieve the values from the variable and print them out in the same format.

## Experiment 03
Create a structure called Employee that contains two members: an employee number (type int) and the employee’s salary (in dollars; type float). Ask the user to fill in this data for three employees and then display the information for each employee. Use a separate display function for the information display.

# Week03
## Experiment 01
Design a class called Date. The class should store a date in three integers: month, day, and year. There should be member functions to print the date in the following forms: 12/25/2014 December 25, 2014 25 December 2014

* Demonstrate the class by writing a complete program implementing it.

* Input Validation: Do not accept values for the day greater than 31 or less than 1. Do not accept values for the month greater than 12 or less than 1.

## Experiment 02
Write a class definition Distance with two data members feet and inches This class also contains member functions

* void setFeet(int)
* void setInches( float)
* void showDistance()
* Demonstrate the class by writing a  complete program implementing it.

## Experiment 03
Write a class named Employee that has the following member variables:

* Name: A string that holds the employee’s name
* ID Number: An int variable that holds the employee’s ID number
* Department: A string that holds the name of the department where the employee works
* Position: A string that holds the employee’s job title
* Write appropriate mutator functions that store values in these member variables and accessor functions that return the values in these member variables. Once you have written the class, write a separate program that creates three Employee objects to hold the following data.

* The program should store this data in the three objects and then display the data for each employee on the screen.

# Week04
## Experiment 01
Write a class named Employee that has the following member variables:

* Name: A string that holds the employee’s name
* idNumber: An int variable that holds the employee’s ID number
* Department: A string that holds the name of the department where the employee works
* Position: A string that holds the employee’s job title
* A constructor that accepts the following values as arguments and assigns them to the appropriate member variables: employee’s name, employee’s ID number, department, and position A constructor that accepts the following values as arguments and assigns them to the appropriate member variables: employee’s name and ID number. The department and position fields should be assigned an empty string ("") A default constructor that assigns empty strings ("") to the name, department, and position member variables, and 0 to the idNumber member variable

* Write appropriate setter/getter functions that store values and return the values in these member variables. Once you have written the class, write a program that creates three Employee objects to hold the following data.

* The program should store this data in the three objects and then display the data for each employee on the screen.

## Experiment 02
Write a Circle class that has the following member variables.

* radius: a double
* pi: a double initialized with the value  3.14159
* The class should have the following member functions:

* Default Constructor: A default constructor that sets radius to 0.0
* Constructor: Accepts the radius of the circle as an argument
* setRadius: A mutator function for the radius variable
* getRadius: An accessor function for the radius variable
* getArea: Returns the area of the circle, which is calculated as: area = pi * radius * radius
* getDiameter: Returns the diameter of the circle, which is calculated as: diameter = radius * 2
* getCircumference: Returns the circumference of the circle, which is calculated as: circumference = 2 * pi * radius
* Write a program that demonstrates the Circle class by asking the user for the circle’s radius, creating a Circle object, and then reporting the circle’s area, diameter, and circumference.

## Experiment 03
Design an Inventory class that can hold information and calculate data for items in a retail store’s inventory.


### Private Member Variables

| Variable Name | Description |
|---|---|
| `itemNumber` | An `int` that holds the item's item number. |
| `quantity` | An `int` for holding the quantity of the items on hand. |
| `cost` | A `double` for holding the wholesale per unit cost of the item. |
| `totalCost` | A `double` for holding the total inventory cost of the item ( `quantity * cost` ). |

* Public Member Functions

Member Function	Description
Inventory()	Default constructor that sets all member variables to 0.
Inventory(int item, int qty, double c)	Constructor that accepts item number, quantity, and cost. It stores the values and calls setTotalCost().
setItemNumber(int item)	Stores the item number.
setQuantity(int qty)	Stores the quantity.
setCost(double c)	Stores the cost per item.
setTotalCost()	Calculates and stores quantity * cost in totalCost.
getItemNumber()	Returns the item number.
getQuantity()	Returns the quantity.
getCost()	Returns the cost per item.
getTotalCost()	Returns the total cost.
Input Validation

The program should not accept negative values for:

itemNumber
quantity
cost
If a negative value is entered, the user should be asked to enter the value again.

Example

* Enter item number: 101
* Enter quantity: 5
* Enter cost per item: 12.5

* Inventory Details
* Item Number: 101
* Quantity: 5
* Cost per Item: 12.5
* Total Cost: 62.5

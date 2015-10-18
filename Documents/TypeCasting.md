Type Casting Or Conversion
======================

Type casting means the conversion of one data type to another data type. 

There are two types of type casting:

* Implicit type casting
* Explicit type casting

Implicit Type Casting
----------------
In implicit type casting the conversion is automatically carried out by compiler. In this type of conversion smaller data type is converted to larger data type. For example sort can be converted to integer, integer can be converted to unsigned integer -> long -> unsigned long -> float -> double -> long double. No operator is required in implicit conversion. This is done without any intervention of the programmer.

Explicit Type Casting
------------
In explicit type casting, the conversion is carried out between two incompatible types. For example float can be converted to int type. This is done with the help of the (type) operator.

*Example:*

    int i = (int)10.23

in above example value 10.23 is converted to it value(10) and after that the resultant value (10) is assigned to variable i. here (int) acts as 

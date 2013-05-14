#include <iostream>
#include <string>
using namespace std;

class list
{
public:
	int length;
	list(){}
	list( int a )

		//{ &&&&&&&&  this opening Bracket is important


		try{  ///implementation in try block for constructors and functions
			length = a;
			if ( length < 0 )   {
				std::string s("negative length of list");
				throw    s  ;  // surly it can not be negative}
			}
	}
	catch(std::string& e)
	{
		//throw e;
		std::cout <<"Will get Printed" << std::endl;
		std::cout << e <<std::endl;
	}

	//} &&&&&&&& this closing Bracket is important if this are uncomented exception will not get rethrown by constructor, because catch is handled within list constructor.
	/* output if &&&&&&&&& coments are kept within by code

	Will get Printed
	negative length of list
	Will not get printed
	Will not get Printed
	Will get Printed
	*/
	/* output if &&&&&&&&& coments are comented(not kept) within by code, *try catch this way is prefered*

	Will get Printed
	negative length of list
	Will get Printed
	negative length of list
	Will get Printed
	negative length of list
	Will get Printed

	*/

	// Text from official C++ language specifcation, page 302
	//The exception being handled is rethrown if control reaches the end of a handler of the function-try-block of a constructor or destructor. Otherwise, a function returns when control reaches the end of a handler for the function-try-block (6.6.3). Flowing off the end of a function-try-block is equivalent to a return with no value; this results in undefined behavior in a value-returning function (6.6.3).
};

class A :  public list
{
public:
	int h;
	A( void )
		try : list(-1) // initialization list after try statment
	{
		h = 9; // exception thrown from C
		std::cout << "Will not get printed" << std::endl;//
	}
	catch(string& e)
	{
		//throw e;
		std::cout <<"Will get Printed" << std::endl;
		std::cout << e <<std::endl;
	}
};

int main()
{
	try{
		A a;
		std::cout <<"Will not get Printed" << std::endl; // Since Object a is incomplete, so by default every constructor will rethrow exception from list(-1) till this try block
		//
	}
	catch(string& e)
	{
		std::cout <<"Will get Printed" << std::endl;
		std::cout<< e << std::endl;
		//  std::cout<< "printed" << std::endl;
	}
	catch(...)
	{
		std::cout << "All Handled" << std::endl;
	}
	std::cout <<"Will get Printed" << std::endl;
}

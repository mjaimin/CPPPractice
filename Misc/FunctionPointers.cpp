int (*p)(char); 		// p is a pointer to a function
				// that takes a char argument
				// and returns an int
char ** (*p)(float, float); 	// p is a pointer to a function
				// that takes two floats
				// and returns a pointer to a pointer to a char
void * (*p[5])(char * const, char * const); 	// p is an array of 5 pointers to functions
						// that receive two const pointers to chars and
						// return a void 
int * (* (*fp1) (int) ) [10];	// fp1 is a pointer to a function
				// that takes an int as argument 
				// and returns a pointer to an array of 10 pointers to ints. 
int *( *( *arr[5])())(); 	// arr is an array of 5 pointers to functions
				// that return pointers to functions
				// that return pointers to ints. 
float ( * ( *b()) [] )();       // b is a function that returns a 
                                // pointer to an array of pointers
                                // to functions returning floats.
void * ( *c) ( char, int (*)());// c is a pointer to a function that takes
                                // two parameters:
                                //     a char and a pointer to a
                                //     function that takes no
                                //     parameters and returns
                                //     an int
                                // and returns a pointer to void.

void ** (*d) (int &, char **(*)(char *, char **));	// d is a pointer to a function that takes
							// two parameters:
			                                //     a reference to an int and a pointer
			                                //     to a function that takes two parameters:
			                                //        a pointer to a char and a pointer
			                                //        to a pointer to a char
			                                //     and returns a pointer to a pointer 
			                                //     to a char
			                                // and returns a pointer to a pointer to void
			
float ( * ( * e[10]) (int &) ) [5];	// e is an array of 10 pointers to 
	                                // functions that take a single
	                                // reference to an int as an argument 
	                                // and return pointers to
	                                // an array of 5 floats.

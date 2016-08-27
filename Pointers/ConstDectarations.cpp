const int n=5; //const int
int const m=10;//const int

//can't change the value of *p *q
const int *p; //pointers to const int
int const *q; //pointers to const int

const int * const p=&n // const pointer to a const int

char ** p1;                    //        pointer to       pointer to       char
const char **p2;               //        pointer to       pointer to const char
char * const * p3;             //        pointer to const pointer to       char
const char * const * p4;       //        pointer to const pointer to const char
char ** const p5;              //  const pointer to       pointer to       char
const char ** const p6;        //  const pointer to       pointer to const char
char * const * const p7;       //  const pointer to const pointer to       char
const char * const * const p8; //  const pointer to const pointer to const char

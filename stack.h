#include <iostream>

using namespace std;

#define CLASS_BASED 
#undef CLASS_BASED

#ifdef CLASS_BASED

class stack {

    private:
        int size;
        int top;
        int *S;

     public:
        


};

#else
typedef struct stack {
	int size;
	int top;
	int *s;
} stack;

void stackInit(int, stack *);
void push(int);
int peek(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void display(void);
int stackTop(void);
#endif

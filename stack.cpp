#include <iostream>

using namespace std;

typedef struct stack {
	int size;
	int top;
	int *s;
} stack;



/**
* @brief 
*
* @return 
*/
int main(void) {

	stack st;
	printf("Enter the size of stack: ");
	scanf("%d",&st.size);
	st.s = new int[st.size];
	st.top = -1;

}

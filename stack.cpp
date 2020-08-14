#include "stack.h" 



/**
* @brief 
*
* @return 
*/
int main(void) {

	stack st;
    int size = 0;
	printf("Enter the size of stack: ");
    scanf("%d",&size);

    stackInit(size, &st);
	//scanf("%d",&st.size);
	//st.s = new int[st.size];
	//st.top = -1;

}

void stackInit(int sz, stack *st) {
    st->size = sz;
    st->top = -1;
    st->s = new int[sz];
}

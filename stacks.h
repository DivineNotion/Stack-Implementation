typedef struct Stack {

	int capacity;
	int size;
	int* stack_array;
}STACK;

STACK* create_stack(int MAX_ELEMENTS);
void pop(STACK* stack);
int top(STACK* stack);
void push(STACK* stack, int element);
void display(STACK* stack);
void search(STACK* stack, int element);
void destroy_stack(STACK* stack);
void count(STACK* stack);



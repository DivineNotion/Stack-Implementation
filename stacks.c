#include <stdio.h>
#include <stdlib.h>
#include "stacks.h"


//Creating a new stack
STACK* create_stack(int elements) {

	STACK* stack = malloc(sizeof(STACK)); //instantiation of a new stack object
	stack->capacity = elements; //maximum space of stack
	stack->size = -1; // size of the stack currently (0)
	stack->stack_array = malloc(sizeof(int) * elements);

	return stack;
}

void pop(STACK* stack) {
	
	//check if the stack is empty
	if (stack->size == -1) {
		printf("Stack is Empty\n\n");
		return;
	}
	//remove the top element of the stack
	stack->size--;
}

void push(STACK* stack, int element) {
	if (stack->size == stack->capacity - 1) {
		printf("Stack is Full\n\n");
		return;
	}
	//insert element to the top of the stack
	stack->stack_array[++stack->size] = element;
}

int top(STACK* stack) {
	if (stack->size == -1) {
		printf("Stack is Empty\n\n");
		return 0;
	}
	return stack->stack_array[stack->size - 1];
}

void display(STACK* stack) {
	if (stack->size == -1) {
		printf("list is empty\n\n");
		return;
	}
	for (int i = 0; i <= stack->size; i++)
		printf("%d ", stack->stack_array[i]);
	puts("\n");
}

void search(STACK* stack, int element) {
	for (int i = 0; i < stack->size; i++) {
		if (stack->stack_array[i] == element) {
			printf("Element exists at position %d\n\n", i);
			return;
		}
	}
	printf("Element does not exist\n\n");
}
void destroy_stack(STACK* stack) {
	if (stack->size == -1) {
		printf("list is empty\n\n");
		return;
	}
	while (stack->size >= 0) {
		pop(stack);
	}
	printf("List has been successfully destroyed\n\n");
}
void count(STACK* stack) {
	printf("This stack has %d elements\n\n",stack->size + 1);
}
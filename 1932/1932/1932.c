#include <stdio.h>
#include <stdlib.h>

struct Node;
typedef struct Node* PNode;

struct Node{
	int info;
	PNode link;
};

struct LinkStack{
	PNode top;
};

typedef struct LinkStack* PLinkStack;

PLinkStack createEmptyStack_link()
{
	PLinkStack plstack;
	plstack = (PLinkStack)malloc(sizeof(struct LinkStack));
	if(plstack != NULL)
		plstack->top = NULL;
	else
		printf("Out of space!\n");
	return plstack;
}

int isEmptyStack_link(PLinkStack plstack)
{
	return (plstack->top == NULL);
}

void push_link(PLinkStack plstack,int x)
{
	PNode p;
	p = (PNode)malloc(sizeof(struct Node));
	if(p == NULL)
		printf("Out of space!\n");
	else{
		p->info = x;
		p->link = plstack->top;
		plstack->top = p;
	}
}

void pop_link(PLinkStack plstack)
{
	PNode p;
	if(isEmptyStack_link(plstack))
		printf("Empty stack pop\n");
	else{
		p = plstack->top;
		plstack->top = plstack->top->link;
		free(p);
	}
}

int top_link(PLinkStack plstack)
{
	if(plstack->top == NULL)
		printf("stack is empty!\n");
	else
		return plstack->top->info;
}

int a[200010];

int main()
{
	int t,n,i,c,cc;
	PLinkStack stack;

	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			scanf("%d %d", &c,&cc);
			a[c] = cc;
			a[cc] = c;
		}
		stack = createEmptyStack_link();
		
		for(i = 1; i <= 2 * n; i++){
			if(isEmptyStack_link(stack))
				push_link(stack,i);
			else if(a[stack->top->info] == i)
				pop_link(stack);
			else
				push_link(stack,i);
		}
		if(isEmptyStack_link(stack))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
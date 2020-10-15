#include <stdio.h>

int st[100], size, top = -1;

void push(int element){

    if(top == size-1){
        printf("Stack is full\nStack overflowed by %d\n",element);
    }
    else{
        top = top + 1;
        st[top] = element;
        printf("%d is push to stack\n",element);
        printf("Current top: %d\n", top);
    }
}

void pop(){
    if(top == -1){
        printf("Stack is empty! Stack is underflowed\n");
    }
    else{
        printf("%d is popped\n", st[top]);
        top = top - 1;
        printf("Current top: %d\n", top);
    }
}


void peek(){
    if(top == -1){
        printf("Stack is empty!\n");
    }
    else{
        printf("Current top element is %d\n", st[top]);
    }

}

void display(){
    int i;
    if(top == -1){
        printf("There's no element in stack to print\n");
    }
    else{
        printf("Printing stack:\n");
        for(i=top;i>=0;i--){
            printf("%d\n", st[i]);
        }
    }
}
main()
{
    printf("Enter stack size:\n");
    scanf("%d",&size);
    printf("Stack size: %d\n",size);

    push(10);
    push(12);
    push(14);
    push(16);
    push(18); //overflow condition check

    pop();
    pop();
    pop();
    pop();
    pop();


    peek();

    display();

    return 0;
}

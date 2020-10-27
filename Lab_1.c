#include<stdio.h>
int stack[100],top = -1,n,i,element,input,item,stack_2[10],top_2=-1,value = 123,index;
char Character_stack[100];
void stack2_push(int item)
{
    if(top_2 == n-1)
    {
        printf("\nThe stack2 is full,element %d can't be inserted",item);
    }
    else
    {
        top_2 = top_2 + 1;
        stack_2[top_2] = item;
        printf("\n\n%d has been pushed into the stack 2 ",item);
    }

}
void stack2_pop()
{

    if(top_2 == -1)
    {
        printf("\nStack is empty.");
    }
    else
    {

        top_2 = top_2-1;
        printf("\nThe popped element is : %d\n",item);
    }
}
void push(int element)
{
    if(top == n-1)
    {
        printf("\nThe stack is full,element %d can't be inserted",element);
    }
    else
    {
        top = top + 1;
        stack[top] = element;
        printf("\n\n%d has been pushed into the stack",element);
    }

}
void pop()
{
    if(top == -1)
    {
        printf("\nStack is empty.");
    }
    else
    {
        item = stack[top];
        top = top-1;
        printf("\nThe popped element is : %d\n",item);
    }
}
void display()
{
    if(top==-1)
    {
        printf("There is no data to print ");
    }
    else
    {
        printf("\n\nDisplaying the stack\n");
        for(i=top; i>=0; i--)
        {
            printf("\nAt index %d - %d\n",i,stack[i]);
        }
    }
}
void Push(char element)
{
    if(top == n-1)
    {
        printf("\nStack is full.");
    }
    else
    {
        top = top + 1;
        Character_stack[top] = element;
        printf("\n\n%c has been pushed into the stack\n",element);
    }
}
void Display()
{
    printf("\nDisplaying the stack : \n");
    for(i=top; i>=0; i--)
    {
        printf("\nAt index %d - %c ",i,Character_stack[i]);
    }
}

int main()
{
    int temp_stack,position,popped_item;
    printf("Enter the size of the stack : ");
    scanf("%d",&n);
    printf("\npress 1 to create stack using numbers\nPress 2 to create stack using character items\n");
    scanf("%d",&input);

    if(input == 1)
    {
        //Pushing elements in the stack
        push(17);
        push(5);
        push(123);
        push(25);
        push(12);
        push(83);
        display();
        printf("\nNow deleting element  123 from the stack .\n");
        for(i=top; i>=0; i--)
        {
            if(stack[i] == value) // Finding out the targeted index.
            {
                index = i;
            }
        }
        printf("\nThe targeted index is %d\n",index);
        for(i=top; i>=index; i--)//Popping the elements from the main stack and then pushing it into the stack 2 except the value to be deleted
        {
            if(stack[i] == value)
            {
                pop();
            }
            else

            {
                pop();
                stack2_push(item);
            }
        }

        printf("\nDisplaying Stack 2\n");
        for(i=top_2; i>=0; i--)
        {

            printf("\nAt %d - %d\n",i,stack_2[i]);
        }
        printf("\n\nNow Pushing back elements from stack 2 to stack 1\n");
        for(i=index; i<n-1; i++)
        {
            item = stack_2[top_2];
            stack2_pop();
            push(item);

        }

        printf("\n\nNow displaying stack after the deletion of the element 123\n\n");
        display();
    }
    else if(input == 2)
    {
        //Now implementing stack using character items :
        Push('A');
        Push('B');
        Push('C');
        Push('D');
        Push('E');
        Display();
    }
    getch();
}


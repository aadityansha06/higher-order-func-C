#include <stdio.h>

// function signature
typedef int (*operation) (int,int);

int add(int a, int b){ return a+b; }
int sub(int a, int b){ return a-b; }
int mul(int a, int b){ return a*b; }
int power(int a, int b){ return a^b; }
int div(int a, int b) { b == 0 ? printf("\n can't divide by 0") 
    : 0;return b == 0 ? -1 : a / b;
}

int main(){
    operation op[]={&add,&sub,&mul,&power,&div}; 
    // op stores all the address of function 
    // when we call op it  redirect to respective function
    int opt =0;
    int a=0,b=0;
    printf("\n Choose an operation\n");
    printf("\n0.Add\n1.sub\n2.mul\n3.power\n4.div");
    scanf("%d",&opt);
    printf("Enter both number\n");
    scanf("%d %d",&a,&b);

   /*
    Index Access: menu[choice] acts like a lookup table.

    Address Retrieval: The CPU looks at the array index and
    immediately gets the memory address stored there.

    Direct Jump: It jumps to that address.
        */ 
    int result = (*op[opt])(a,b); 
    // we pass op[1] that means at op array 1 contain 
    // address of subtract
    // Time complexity O(1)
    printf("\n %d is result",result);

    return 0;
}


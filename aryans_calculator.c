#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    int choice,num,a,b,x,c;
    printf("\n main menu");
    printf("\n 1. odd/even");
    printf("\n 2. greater in two numbers");
    printf("\n 3. positive/negative/zero");
    printf("\n 4. addition");
    printf("\n 5. substraction");
    printf("\n 6. multiplication");
    printf("\n 7. division");
    printf("\n 8. exit");
    
    printf("\n enter your choice");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
        printf("\n enter a number:");
        scanf("%d",&num);
        
        if(num%2==0)
        printf("even");
        else
        printf("odd");
        
        break;
        
        case 2:
        printf("enter two number:");
        scanf("%d %d",&a,&b);
        
        if(a>b)
        printf("a is greater");
        else if(a<b)
        printf("b is greater");
        else
        printf("a and b are equal");
        
        break;
        
        case3:
        printf("enter a number");
        scanf("%d",&c);
        
        if(c>0)
        printf("the number is positive");
        else if(c<0)
        printf("the number is negative");
        else
        printf("the number is equal to zero");
        break;
        
        
        case 4:
        printf("enter two numbers");
        scanf("%d%d",&a,&b);
        c=a+b ;
        printf("sum is %d",c);
        
        break;
        
        case 5:
        printf("enter two numbers");
        scanf("%d%d",&a,&b);
          if(a>b)
          c=a-b;
          
          else if(a<b)
          c=b-a;
          
          else 
          c=0;
        printf("substraction is %d",c);
        
        break;
        
        case 6:
        printf("enter two numbers");
        scanf("%d%d",&a,&b);
        c=a*b ;
        printf("multiplication is %d",c);
        
        break;
        
        case 7:
        printf("enter two numbers");
        scanf("%d%d",&a,&b);
        
          if(a>b)
          c=a/b ;
    
          else if(b>a)
          c=b/a;
          
          else
          c=1;
        printf("division is %d",c);
        
          
        case 8:
        exit(0);
        default:
        printf("invalid choice");
        getch();
    }
}
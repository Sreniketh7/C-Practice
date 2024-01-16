/*#include<stdio.h>             /*- Start of a  multi line comment line; 
#include<conio.h>
void myname()
{
    printf("Bro is peak :-)");
}
int main()
{
    myname();
    return 0; 
}*/ //Denotes the end of a multi line comment 

/*#include<stdio.h>
#include<conio.h>
void showoff()
{
    printf("HAVE A WONDERFUL DAY!!!!!!!");
}
int main()
{
    showoff();
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    a=5;
    b=4;
    printf("The address of b is : %d",&b); 
    int c=a+b;
    int*d=c;
    printf("The value of d is : %d\n",d);
    int e=a-b;
    int*f=e;
    printf("The value of e is : %d\n",f);
}*/

/*#include<stdio.h>
int main()
{
    char a=getchar();
    printf("THE Char is : %c\n",a);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    char class;
    printf("Enter the class: \n");
    scanf("%c",&class);
    if(class=='S')//Characters are always defined with SINGLE QUOTES 
     printf("Bankai\n");
    if(class=='A')
     printf("Mugen Denshou\n");
    if (class=='B')
     printf("Inoryoku\n"); 
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char class;
    printf("Enter your class: ");
    scanf("%c",&class); //Do not use newline in scanf statements

    if(class =='s'||class=='S')
        printf("Bankai\n");
    else
        printf("NOT BANKAI\n");
    return 0;            
}*/

/*#include<stdio.h>
int main()
{
    int frags;
    printf("Enter the no of frags achieved: \n");
    scanf("%d",&frags);
    if(frags==1000)
     printf("s1mple\n");
    else if(frags==900)
     printf("Zyw0o\n");
    else if(frags==800)
     printf("n1Ko\n");
    else 
     printf("SKILL ISSUE\n");
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    int power;
    int enemies;
    printf("Enter the power you desire: \n");
    scanf("%d",&power);
    printf("Enter no of enemies:\n");
    scanf("%d",&enemies);
    if(power>=1000)
     if(enemies>=100)
      printf("Strongest boi");
     else 
      printf("Get stronger kid\n");//This ELSE statement is only compared to the CLOSEST(2ND IF STATEMENT IN THIS CASE). It evaluates only when the 1st statement is true
    return 0; 
}*/



/*#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: \n");
    scanf("%d",&year);
    if((year%4==0)&&(year%100!=0)||(year%400==0))
     printf("THE YEAR %d is a leap year\n",year);
    else 
     printf("The year %d is NOT a leap year\n",year);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int num=2;
    switch(num)
    {
        case 1:
         if(num==1)
          printf("ONE\n");
          break;
        case 2:
         if(num==2)
          printf("TWO\n");
          break;
        default:
          printf("OTHER NOS\n");
        return 0;    
    }
}*/



/*#include<stdio.h>
int main()
{
    int n;
    int i=1;
    int fact=1;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    if(n==0||n==1)
     printf("The value is 1\n");
    while(n>0&&i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("The value of %d is %d\n",n,fact);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i=1;
    int fact=1,n;
    printf("Enter a value to calculate its Factorial : \n");
    scanf("%d",&n);
    if(n==0||n==1)
     printf("The factorial of %d is 1",n);
    while(n>1)
    {
        for(;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
    }
}*/


/*#include<stdio.h>
int main()
{
    int sum=0;
    int n,rem=0;
    printf("Enter the number :\n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("The sum of the individual digits is %d",sum);
    return 0;
}*/



/*#include<stdio.h>
int main()
{
    int i=0,n;
    int sum=0,rem=0;
    int temp;
    printf("Enter the number :\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        for(i=0;i<=n;i++)
        {
            rem=n%10;
            n=n/10;
            sum=sum+rem;
        }
    }
    printf("The sum of the individual digits of %d is %d",temp,sum);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n,rev=0,rem=0;
    printf("Enter the no:\n");
    scanf("%d",&n);
    int temp;
    temp=n;
    while(n>0)
    {
        for(int i=0;i<=n;i++)
        {
            rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;
        }
    }
    printf("The reverse of %d is %d ",temp,rev);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int rev=0,n,rem=0;
    printf("Enter the no: ");
    scanf("%d",&n);
    int temp;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    printf("The reverse of %d is %d ",temp,rev);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n,rev=0,rem=0;
    printf("Enter the no: \n");
    scanf("%d",&n);
    int temp;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(rev==temp)
     printf("%d is a palindrone",temp);
    else 
     printf("%d is not a palindrome",temp);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n,rem=0,arm=0;
    printf("Enter the no: \n");
    scanf("%d",&n);
    int temp;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        arm=arm+rem*rem*rem;
        n=n/10;
    }
    if(arm==temp)
     printf("%d is an Armstrong no",temp);
    else 
     printf("%d is not an Armstrong no",temp);
    return 0;
}*/



/*#include<stdio.h>
int main()
{
    int n,rem=0,i,fact;
    printf("Enter the no: \n");
    scanf("%d",&n);
    int temp,sum=0;
    temp=n;
    while(n)
    {
        i=1,fact=1;
        rem=n%10;
        while(i<=rem)
        {
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
     printf("%d is a strong no",sum);
    else 
     printf("%d is not a strong no",sum);
    return 0;
}*/



/*#include<stdio.h>
int main()
{
    int n,temp,rem,sum=0,fact,i;
    printf("Enter the no: ");
    scanf("%d",&n);
    for(temp=n;n>0;n=n/10)
    {
        fact=1;
        rem=n%10;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    }
    if(sum==temp)
     printf("%d is a strong no",sum);
    else 
     printf("%d is not a strong no",sum);
    return 0;
}*/


/*#include<stdio.h>
#include<math.h> //As we are using the power function
int Cal_length(int n)
{
    int len=0;
    while(n!=0)
    {
        len=len+1;
        n=n/10;
    }
    return len;
}
int main()
{
    int n,sum=0,rem=0;
    printf("Enter the no : \n");
    scanf("%d",&n);
    printf("%d\n",Cal_length(n));
    int temp=n;
    printf("%d\n",temp);
    int len=Cal_length(n);
    printf("%d\n",len);
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+pow(rem,len);
        temp=temp/10;
        len--;
    } 
    printf("%d\n",sum);
    if(sum==n)
     printf("%d is a disarium no",sum);
    else 
     printf("%d is not a disarium no",sum);
    return 0;
}*/


//Sqaure pattern
/*#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows : \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/


//PYRAMID PATTERN
/*#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows : \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/


/*RHOMBUS PATTERN
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows required : \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/


/*
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows: \n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/



/*
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows : \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/




/*RHOMBUS
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows : \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/

/*Right angled Pyramid
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=(2*n)-1;i++)
    {
        if(i>n)
         for(j=1;j<=(2*n)-i;j++)
         {
            printf("*");
         }
        else 
         for(j=1;j<=i;j++)
         {
            printf("*");
         }
        printf("\n");
    }
    return 0;
}*/


/*Left sided right angle triangle 
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    //Printing the spaces 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    //Printing the spaces 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/


/*Printing a Diamond
#include<stdio.h>
int main()
{
    int n,stars,spaces,i;
    printf("Enter the no of rows required : ");
    scanf("%d",&n);
    for(i=0;i<(2*n);i++)
    {
        int total_stars=i>n?2*n-i:i;
        //To get the total no of spaces 
        int total_spaces=n-total_stars;
        for(spaces=0;spaces<total_spaces;spaces++)
        {
            printf(" ");
        }
        //To print the stars
        for(stars=0;stars<total_stars;stars++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}*/



/*    1
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4    pattern
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int spaces=0;spaces<n-i;spaces++)
        {
            printf("  ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        for(int j=2;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}*/



/*1
  1 2
  1 2 3
  1 2 3 4
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}*/

/*  1
  212
 32123
4321234
 32123
  212
   1
Pattern
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    for(i=1;i<=2*n;i++)
    {
        int col_elements_in_a_row= i>n?2*n-i:i;
        for(int spaces=0;spaces<n-col_elements_in_a_row;spaces++)
        {
            printf(" ");
        }
        for(j=col_elements_in_a_row;j>=1;j--)
        {
            printf("%d",j);
        }
        for(j=2;j<=col_elements_in_a_row;j++)
        {
            printf("%d",j);
        }   
        printf("\n");  
    }
    return 0;
}*/



/*1  1  1  1  1  1  1 
  1  2  2  2  2  2  1 
  1  2  3  3  3  2  1 
  1  2  3  4  3  2  1 
  1  2  3  3  3  2  1 
  1  2  2  2  2  2  1 
  1  1  1  1  1  1  1  pattern
#include<stdio.h>
#include<math.h>
int min_no(int a, int b)
{
    if(a>b)
     return b;
    else 
     return a;
}
int main()
{
    int row,column,n;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    int total_n=2*n;
    for(row=1;row<total_n;row++)
    {
        for(column=1;column<total_n;column++)
        {
            int no_at_every_index=min_no(min_no(row,column),min_no(total_n-row,total_n-column)); //Used for printing the minimum distances of(left,right) and (up,down) such that the same no gets printed at that particular index 
            printf(" %d ",no_at_every_index);
        }
        printf("\n");
    }
    return 0;
}*/




/*Pattern of  4 4 4 4 4 4 4  
              4 3 3 3 3 3 4   
              4 3 2 2 2 3 4   
              4 3 2 1 2 3 4   
              4 3 2 2 2 3 4   
              4 3 3 3 3 3 4   
              4 4 4 4 4 4 4 
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    for(row=1;row<=2*n-1;row++)
    {
        int num=n;
        for(col=1;col<=2*n-1;col++)
        {
            printf(" %d ",num);
            if(col<row)
             num--;
            if(col>=2*n-row)
             num++; 
        }
        printf("\n");
    }
    return 0;
}*/


/*FLOYD'S TRIANGLE 
     1
     2  3
     4  5  6
     7  8  9  10
#include<stdio.h>
int main()
{
    int n,i,j,num=1;
    printf("Enter the no of rows required : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}*/


/* PASCAL's TRIANGLE 
       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
  1 5 10 10 5 1
#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    int i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combinations(int n, int r )// n!/((n-r)!*(r!))
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}
int main()
{
    int n;
    printf("Enter the no of rows required : ");
    scanf("%d",&n);
    //Printing spaces in a triangle 
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++) //Printing the Pascal Pattern 
        {
            printf(" %d",combinations(i,j));
        }
        printf("\n");
    }
    return 0;
}*/


/* X PATTERN 
*   *
 * *
  *
 * *
*   *      
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((j==i) || (i+j==n-1))
             printf("*");
            else 
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

/*  * * * *
    *     *
    *     *
    * * * *     HOLLOW SQAURE PATTERN 
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n || j==n)
             printf(" *");
            else 
             printf("  ");
        }
        printf(" \n");
    }
    return 0;
}*/

/* ****
   *  *
  *  *
 ****   HOLLOW RHOMBUS PATTERN 
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
             printf("*");
            else 
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

/*   *
    * *
   *   *
  *     *
 *********     HOLLOW  PYRAMID



#include<Stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for (int k=1; k<=2*i-1;k++)
        {
            if(k==1 || k==2*i-1 || i==n)
             printf("*");
            else 
             printf(" ");
        }
        printf("\n");
    }return 0;
}
*/

/*      *******
         *   *
          * *
           *          Inverted Hollow Pyramid   
#include <stdio.h>  
int main()  
{ 
    int n,i,j,k,m=1;
    printf("Entter the no of rows : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--) //As we are printing an inverting pyramid
    {
        for(j=1;j<m;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            if(k==1||k==2*i-1||i==n) //Logic to print the first and last elements from the (n-1)th row to the 1st row and all the elements for the nth row elements  
             printf("*");
            else 
             printf(" ");
        }
        m++;//Incrementing the value of m so as to print spaces in further iterations 
        printf("\n");
    }
    return 0;
}*/

/* PRIME NUMBER
#include<stdio.h>
#include<math.h>
int main()
{
    int n,flag=1;
    printf("Enter the prime number : ");
    scanf("%d",&n);
    if(n==0 || n==1 )
     flag=0;    
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
     printf("%d is a prime number\n",n);
    else 
     printf("%d is not a prime number\n",n);
    return 0;
}
*/


/*PRIME NUMBER USING BOOLEAN FUNCTION
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//Boolean Function
bool is_prime(int num)
{
    if (num==0 || num==1)
     return false;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
         return false;
    }
    return true; //We have to return it as True when the number is a prime number
}
int main()
{
    int n;
    printf("Enter the number :  ");
    scanf("%d",&n);
    if(is_prime(n))
     printf("%d is a prime number\n",n);
    else 
     printf("%d is not a prime number\n",n);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int fib_len,n1=0,n2=1,n3,i;
    printf("Enter the number of terms : ");
    scanf("%d",&fib_len);
    for(i=1;i<=fib_len;i++)
    {
        printf("%d\t",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    return 0;
}*/


/*GCD OF TWO NUMBERS 
#include<stdio.h>
int main()
{
    int a,b,i,gcd,great=0;
    printf("Enter the two numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
     great=a;
    else 
    {
        great=b;
    }
    printf("The greater number is %d\n",great);
    for(i=1;i<=great;i++)
    {
        if(a%i==0 && b%i==0)
         gcd=i;
    }
    printf("The GCD of %d and %d is %d\n",a,b,gcd);
    return 0;
}*/

/* Fibonacci series using FUNCTIONS
#include<stdio.h>
void fib_generate(int fib_size)
{
    int a=0,b=1,c,i;
    for(i=1;i<=fib_size;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}
void main()
{
    int len;
    printf("Enter the no of terms required : ");
    scanf("%d",&len);
    fib_generate(len);
}*/


/* FIBONACCI SERIES UISNG RECURSION
#include<stdio.h>
int fib_recurse(int fib_size)
{
    if(fib_size==0 ||fib_size==1 )
     return fib_size;
    else 
     return (fib_recurse(fib_size-1)+fib_recurse(fib_size-2));
}
int main()
{
    int length;
    printf("Enter the no of terms required for the series :  ");
    scanf("%d",&length);
    for(int i=0;i<length;i++)
    {
        printf("%d\t",fib_recurse(i));
    }
    return 0;
}*/ 


/* FIBONACCI ELEMENT PRESENT AT THE Nth INDEX/ (N+1) POSITION
#include<stdio.h>
int main()
{
    int pos,a=0,b=1,c,i;
    printf("Enter the position of the element to be found : ");
    scanf("%d",&pos);
    if(pos==0)
    {
    printf("The element at %d position is %d",pos,a);
    return 0;
    }
    if(pos==1)
    {
    printf("The element at %d position is %d",pos,b);
    return 0;
    }
    for(i=2;i<=pos;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The element present at %d index is %d ",pos,c);
    return 0;
}*/


/*FIBONACCI SERIES OF ELEMENT AT Nth INDEX/ (N+1)th POSITION USING FUNCTIONS 
#include<stdio.h>
int fib(int index)
{
    int n1=0,n2=1,n3,i;
    if(index==0)
     return n1;
    if(index==1)
     return n2;
    else 
    {
        for(i=2;i<=index;i++)
        {
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
        return n3;
    }
}
int main()
{
    int pos;
    printf("Enter the position of the element in the fibonacci series to be found : \n");
    scanf("%d",&pos);
    fib(pos);
    printf("The element at %d position is %d\n",pos,fib(pos));
    return 0;
}*/

/*
#include<stdio.h>
char fun();
int main()
{
    char c;
    printf("The character entered is %c\n",fun(c));
    return 0;
}
char fun()
{
    char c;
    printf("Enter your character : ",c);
    scanf("%c",&c);
    return c;
}
*/


/*Swapping of two nos
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d%d",&a,&b);
    printf("The values before swapping are : %d\t%d\t \n",a,b);
    //performing the SWAPPING OPERATION 
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The values after swapping are : %d\t%d\t \n",a,b);
    return 0;
}*/


/*CALL BY VALUE
#include<stdio.h>
void swap(int,int);
int main()
{
    int x,y;
    printf("Enter the values of x and y : ");
    scanf("%d%d",&x,&y);
    printf("The values of x and y before swapping in the main function are %d and %d\n",x,y);
    swap(x,y); //CALLING BY USING CALL BY VALUE METHOD 
    printf("The values of x and y after swapping in the main function are %d and %d\n",x,y);
    return 0;
}
void swap(int a, int b)
{
    int temp;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The values after swapping are %d and %d\n",a,b);
}*/

/*CALL BY REFERENCE
#include<stdio.h>
int swap(int *a, int *b)
{
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
return (*a,*b);
}
int main()
{
    int x,y;
    printf("Enter the values of x and y : ");
    scanf("%d%d",&x,&y);
    printf("The values of x and y before swapping are %d and %d\n",x,y);
    swap(&x,&y); //CALLING BY USING THE CALL BY REFERENCE METHOD
    printf("The values x and y after swapping are %d and %d\n",x,y);
    return 0;
}*/

/* Functions example 1 
#include<stdio.h>
int count_right_shift_no_becomes_zero(int n)
{
    int count=0;
    while(n)
    {
        count++;
        n>>=1; //Rightshift operator 
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the no desired : ");
    scanf("%d",&n);
    printf("%d rightshifts required to make the number zero",count_right_shift_no_becomes_zero(n));
    return 0;
}*/


/* FUNCTIONS EXAMPLE 2 
#include<stdio.h>
void f1(int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
void f2(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
void main()
{
    int a=4,b=5,c=6;
    f1(a,b);
    f2(&b,&c);
    printf("%d is the result",c-a-b);
    return 0;
}*/


/* FUNCTIONS EXAMPLE 3 
#include<stdio.h>
int fun()
{
    int static num =16;
    return num--;
}
int main()
{
    for(fun();fun();fun())
    {
        printf("%d\t",fun());
    }
    return 0;
}*/


/* BITWISE OPERATORS
#include<stdio.h>
int main()
{
    int a=5; // It is represented in the binary form as 0000 0101
    int b=a<<3; // The bits get shifted by 3 positions from the starting position to the LEFT and the TRAILING/BEHIND bits, which are left empty,are filed with zeros
    int c=a>>3; // The bits get shifted by 3 positions from the starting position to the RIGHT and the LEADING bits, which are left empty, are filed with zeros
    printf("The LEFT shift result is %d\n",b);
    printf("The RIGHT shift result is %d",c);
    return 0;
}*/


/* HACKERRANK BITWISE OPERATORS
#include<stdio.h>
void calculate_the_max_value(int n, int max_threshold_value)
{
    int i,j;
    int max_and=0,max_or=0,max_xor=0;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            int and_value=i&j;
            int or_value=i|j;
            int xor_value=i^j;
            //Conditions for printing the max values of each bitwise operation respectively 
            if((and_value<max_threshold_value) & (and_value>max_and))
             max_and=and_value;
            if((or_value<max_threshold_value) & (or_value>max_or))
             max_or=or_value;
            if((xor_value<max_threshold_value) & (xor_value>max_xor))
             max_xor=xor_value;
        }
    }
    printf("%d\n%d\n%d\n",max_and,max_or,max_xor);
}
int main() //Main function 
{
    int n,max_value_of_threshold;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the max_value_of_the_threshold : ");
    scanf("%d",&max_value_of_threshold);
    calculate_the_max_value(n,max_value_of_threshold);
    return 0;   
}
*/

/*HACKERRANK 1D ARRAY SUM OF ELEMENTS
#include<stdio.h>
int main()
{
    int n;
    int a[n];
    int sum=0;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}*/



/*HACKERRANK ARRAY REVERSAL IN C 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*arr,i;
    printf("Enter the no of elements required :  ");
    scanf("%d",&n);
    //USING THE MALLOC FUNCTION TO ALLOCATE AN ARRAY FOR N ELEMENTS
    arr=(int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr + i)); //storing elements in an array using array of pointers 
    }
    printf("The reversed array is : \n");
    for(i=n-1;i>=0;i--) //Logic to reverse an array
    {
        printf("%d ",*(arr + i)); //To print the values of the reversed array 
    }
    return 0;
}*/



/* TOWER OF HANOI USING RECURSION
A -> FROM_ROD/INITIAL_ROD/SOURCE_ROD/1ST_ROD
B ->AUXILARY_ROD/MIDDLE_ROD/INTERMEDIATE_ROD/2ND_ROD
C ->TO_ROD/FINAL_ROD/DESTINATION_ROD/3RD_ROD

#include<stdio.h>
void TOH(int n, char from_rod,char to_rod, char auxilary_rod) //defining the TOH FUNCTION 
{
    if(n==1)
    {
        printf("Move Disk 1 from %c to %c\n",from_rod,to_rod);
        return;
    }
    TOH(n-1,from_rod,auxilary_rod,to_rod);// Move (n-1) disks from A->B USING C
    printf("Move Disk %d from %c to %c\n",n,from_rod,to_rod); // Move the disk from A to C
    TOH(n-1,auxilary_rod,to_rod,from_rod);// Move n-1 disks from B->C using A 
}
int main()
{
    int no;
    printf("Enter the no of disks : ");
    scanf("%d",&no);
    TOH(no,'A','C','B');
    return 0;
}
*/

/* MULTIPLICATION TABLE USING FOR LOOP 
#include<stdio.h>
int main()
{
    int multiplicand,multiplier,product;
    printf("Enter the multiplicand value : ");
    scanf("%d",&multiplicand);
    printf("Enter the max multiplier : ");
    scanf("%d",&multiplier);
    for(int i=0;i<=multiplier;i++)
    {
        product=multiplicand*i;
        printf("%d X %d=%d\n",multiplicand,i,product);
    }
    return 0;
}*/


/*ARMSTRONG NUMBER USING FUNCTIONS

#include<stdio.h>
#include<math.h>
int digits(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int Armstrong(int num)
{
    int rem=0,sum=0;
    int temp=num;
    int DigitCount=digits(num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+pow(rem,DigitCount);
        num=num/10;
    }
    if(sum==temp)
     return temp;
}
int main()
{
    int no;
    printf("Enter the number :");
    scanf("%d",&no);
    int TotalDigits=digits(no);
    printf("%d has %d digits\n",no,TotalDigits);
    int result=Armstrong(no);
    if(result==no)
     printf("%d is an Armstrong number\n",result);
    else 
     printf("%d is not an Armstrong number\n",no);
    return 0;
}
*/


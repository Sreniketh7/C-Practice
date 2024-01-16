//POINTERS INTRODUCTION 
// #include<stdio.h>
// int main()
// {
    // int x=10;
    // int *ptr=&x;
    // printf("The value of ptr is %d\n",*ptr);
    // printf("The value of x is %d\n",x);
    // return 0;
// }


// #include<stdio.h>
// int main()
// {
    // int i=1;
    // int *p=&i;
    // printf("The value of p is %d\n",*p);
    // printf("The address of p is %p\n",&p);
    // printf("The value of i is %d\n",i);
    // printf("The address of i is %p\n",&i);
    //return 0;
// }


// #include<stdio.h>
// int main()
// {
    // int x=10;
    // int *y=&x;
    // *y=11;
    // printf("The value of x is %d\n",x);
    // printf("The value of y is %d\n",*y);
    // return 0;
// }


// #include<stdio.h>
// int main()
// {
    // int x=11;
    // int *p=&x;
    // int *q=p;
    // printf("The value of x is %d\n",x);
    // printf("The value of p is %d\n",*p);
    // printf("The value of q is %d\n",*q);
    // return 0;
// }


// #include<stdio.h>
// int main()
// {
    // int x=11;
    // int *p=&x;
    // int q=p;
    // printf("The value of x is %d\n",x);
    // printf("The value of p is %d\n",*p);
    // printf("The value of q is %d\n",q);
    // return 0;
// }


//RULE 1 : NEVER MAKE USE OF A DE-REFERENCE OPERATOR/INDIRECT OPERATION(*) ON AN UN-INITIALIZED POINTER 
// #include<stdio.h>
// int main()
// {
    // int *ptr=1;
    // printf("The value of ptr is %d\n",*ptr);
    // return 0;
// }


//RULE 2:NEVER ASSIGN ANY VALUES TO AN UN-INITIALIZED POINTER  
// #include<stdio.h>
// int main()
// {
    // int *ptr;
    // *ptr=100;
    // printf("the value of ptr is %d\n",*ptr);
    // return 0;
// }
//IT THROWS A SEGMENTATION ERROR( ILLEGAL READ/WRITE OF AN ELEMENT[AS THE POINTER DOES'NT POINT TO ANY VARIABLE]), PROVIDING NOTHING IN THE OUTPUT CONSOLE 



//To find out the maximum and the minimum elements in an array USING POINTERS 
// #include<stdio.h>
// void MinMax(int arr[],int size,int *max,int *min)
// {
    // *max=*min=arr[0]; // As we are dealing with pointers, we make sure that the varaibles are dereferenced to make use of pointers 
    // for(int i=0;i<size;i++)
    // {
        // if (arr[i]<*min)
        //  *min=arr[i];
        // if (arr[i]>*max)
        //  *max=arr[i];
    // }
// }
// 
// int main()
// {
    // int arr[10]={1,4,3,2,5,77,0,78};
    // int size=sizeof(arr)/sizeof(arr[0]);
    // int max,min;
    // MinMax(arr,size,&max,&min);
    // printf("The largest element in the array is %d\n",max);
    // printf("The smallest element in the array is %d\n",min);
    // return 0;
// }



//TO FIND THE MIDDLE ELEMENT OF AN ARRAY USING POINTERS  
// #include<stdio.h>
// int *MidElement(int a[],int size) 
// 
    // return &a[size/2]; //Returning an address corresponds to returning a pointer 
// 
// 
// int main()
// {
    // int arr[5]={1,2,3,4,5};
    // int size=sizeof(arr)/sizeof(arr[0]);
    // int *mid=MidElement(arr,size);
    // printf("The middle value in the array is %d\n",*mid);
    // return 0;
// }


//NEVER TRY TO RETURN THE VALUE OF AN AUTOMATIC VARIABLE/LOCAL VARIABLE IN A POINTER 
// #include<stdio.h>
// int *fun()
// {
    // int i=10;
    // return &i;
// }
// int main()
// {
    // int *p=fun();
    // printf("%d\n",p);
    // return 0;
// }
//REASON : IT CAUSES A SEGMENTATION ERROR AS THE VARIALBE PRESENT IN THE FUNCTIONS GOES OUT OF SCOPE AS SOON AS THE FUNCTION EXITS THE FUNCTION STACK


//SOLUTION : TO RESOLVE THE ABOVE ISSUE, WE MUST MAKE USE OF STATIC VARIABLES 
//#include<stdio.h>
// int *fun()
// {
    // static int i=10;
    // return &i;
// }
// int main()
// {
    // int *p=fun();
    // printf("%d\n",p);
    // return 0;
// }



// #include<stdio.h>
// int main()
// {
    // int x=10;
    // void *ptr=&x; //Declaration of a void pointer 
// 
    // printf("%d\n",*(int*)ptr); //Firstly, we deference the data type to which it has to be typecasted and then it will point to that variable 
    // return 0;
// }


//NULL POINTER 
// #include<stdio.h>
// int main()
// {
    // int *ptr=NULL;
    // printf("%d\n",ptr);
    // printf("%d\n",sizeof(ptr));
    // return 0;
// }


//TO CHECK WHETHER A POINTER IS NULL POINTER OR NOT 
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
    // int *ptr;
    // ptr=(int*)malloc(2*sizeof(int));
    // if(ptr==NULL)
    //  printf("No memory is alocated");
    // else 
    //  printf("Memory has been alllocated successfully");
    // return 0;
// }


//DANGLING POINTER 
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
    // int *ptr;
    // ptr=(int*)malloc(sizeof(int));
    // free(ptr);
    // if(ptr!=NULL)
    //  printf("ptr is a dangling pointer\n");
    // else 
    //  printf("ptr is not a dangling pointer\n");
    // return 0;
// }


// NON-DANGLING POINTER 
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
    // int *ptr;
    // ptr=(int*)malloc(sizeof(int));
    // free(ptr);
    // ptr=NULL; // THE DANGLING POINTER BECOMES A NON-DANGLING POINTER SINCE THE VALUE OF PTR IS ASSIGNED TO BE NULL (NULL IS EXACTLY NOT 0 IN THE CONTEXT OF POINTERS)
    // if(ptr!=NULL)
    //  printf("ptr is a dangling pointer\n");
    // else 
    //  printf("ptr is not a dangling pointer\n");
    // return 0;
// }


//EXAMPLE FOR A DANGLING POINTER
// #include<stdio.h>
// int fun()
// {
    // int x=10;
    // return &x;
// }
// int main()
// {
    // int *ptr=NULL;
    // ptr=fun();
    // printf("%d\n",*ptr);
    // return 0;
// }
//ANS: A SEGMENTATION ERROR OCCURES HERE AS A POINTER IS POINTING TOWARDS AN AUTOMATIC VARIABLE OR A LOCAL VARIABLE, WHOSE SCOPE IS ELIMINATED IMMEDIATELY AFTER THE EXECUTION OF FUNCTION STACK



//WILD POINTERS OR UN-INITIALIZED POINTERS
// #include<stdio.h>
// int main()
// {
    // int *p;
    // *p=10;
    // return 0;
// }


//POINTER ARITHMETIC ADDITION 
// #include<stdio.h>
// int main()
// {
    // int x=4; //INTEGER VARIABLE 
    // int *before=&x; // POINTERS TO INTEGERS TO DEMONSTRATE POINTER ARITHMETIC  
    // int *after=&x;// POINTERS TO INTEGERS TO DEMONSTRATE POINTER ARITHMETIC  
    // printf("The address of pointer before pointer arithmetic addition is %u\n",before);
    // after=before+3;// To show pointer arithmetic addition
    // printf("The adress of pointer after pointer arithmetic addition is %u\n ",after);
    // return 0;
// }


//POINTER ARITHMETIC SUBTRACTION 
// #include<stdio.h>
// int main()
// {
    // int x=4; //INTEGER VARIABLE 
    // int *before=&x; // POINTER TO INTEGER TO DEMONSTRATE POINTER ARITHMETIC  
    // int *after=&x;// POINTER TO INTEGER TO DEMONSTRATE POINTER ARITHMETIC  
    // printf("The address of pointer before pointer arithmetic subtraction is %u\n",before);
    // after=before-3;// To show pointer arithmetic addition
    // printf("The address of pointer after pointer arithmetic subtraction is %u\n ",after);
    // return 0;
// }



//POINTER SUBTRACTION BETWEEN TWO POINTERS OF THE SAME DATA TYPE 
// #include<stdio.h>
// int main()
// {
    // int a=7;
    // int b=8;
    // int *p1,*p2;
    // p1=&a;
    // p2=&b;
    // printf("The addresses of pointer 1 and pointer 2 are %u and %u\n",p1,p2);
    // int c=p1-p2;
    // int d=p2-p1;
    // printf("The distance between p1 and p2 is %d\n",c);
    // printf("The distance between p2 and p1 is %d\n",d);
    // return 0;
// }



//POINTER SUBTRACTION FOR TWO POINTERS BY USING ARRAYS 
// #include<stdio.h>
// int main()
// {
    // int a[10];
    // int *x,*y;
    // x=&a[2];
    // y=&a[5];
    // printf("The addresses of x and y are %u and %u\n",x,y);
    // int d1=x-y;
    // int d2=y-x;
    // printf("The distance between the two pointers x and y in an array is %d\n",d1);
    // printf("The distance between the two pointers y and x in an array is %d\n",d2);
    // return 0;
// }


//UNDEFINED BEHAVIOUR IN POINTER ARITHMETIC     
// #include<stdio.h>
// int main()
// {
    // int i=10;
    // int *x=&i;
    // printf("%d\n",*(x+3));
    // return 0;
// }



//POINTER COMPARISON
// #include<stdio.h>
// int main()
// {
    // int arr[5]={1,2,3,4,5};
    // int *p=&arr[1], *q=&arr[3];
    // printf("%d\n",p>=q); // IS THE LOCATION OF P BEFORE Q ? 
    // printf("%d\n",p<=q);// IS THE LOCATION OF P AFTER Q ?
    // printf("%d\n",p==q);// IS THE LOCATION OF P AND Q THE SAME ?
    // printf("%d\n",*(p)); //VALUE OF P
    // printf("%d\n",*(q));//VALUE OF Q 
    // printf("Distance between p and q is %d\n",p-q); //DISTANCE BETWEEN TWO POINTERS IN AN ARRAY
    // printf("Distance between q and p is %d\n",q-p);//DISTANCE BETWEEN TWO POINTERS IN AN ARRAY
    // printf("The value of p is %d\n",*(p+2));
    // printf("The value of q is %d\n",*(q+1));
    // return 0;
// 
// }



//SUM OF ARRAY OF ELEMENTS 
// #include<stdio.h>
// int main()
// {
    // int a[5]={1,2,3,4,5};
    // int sum=0;
    // int *p=&a[0];
    // for(;p<&a[5];p++)
    // {
        // sum+=*(p);
    // }
    // printf("Sum :%d\n",sum);
    // return 0;
// }



//PRINTING THE REVERSE OF AN ARRAY 
// #include<stdio.h>
// int main()
// {
    // int a[5]={1,2,3,4,5};
    // int *q=&a[4];
    // printf("The reversed array is : ");
    // for(;q>=&a[0];q--)
    // {
        // printf("%d\t",*q);
    // }
    // printf("\n");
    // printf("The original array is : ");
    // int *p=&a[0];
    // for(;p<&a[5];p++)
    // {
        // printf("%d\t",*p);
    // }
    // return 0;
// }



//PRINTING AN ARRAY BY USING AN ARRAY NAME TO THE POINTER 
// #include<stdio.h>
// int main()
// {
    // int a[5]={1,2,3,4,5};
    // int *p=a;
    // for (;p<=a+4;p++)
    //  printf("%d\t",*(p));
    // return 0;
// }



//SUM OF ARRAY OF ELEMENTS BY USING ARRAY NAME AS A POINTER 
// #include<stdio.h>
// int main()
// {
//     int a[5]={3,7,2,5,10};
//     int *p=a;
//     int sum=0;
//     for (;p<a+5;p++)
//      sum+=*p;
//     printf("Sum : %d",sum);
//     return 0;
// }




// REVERSAL OF AN ARRAY USING AN ARRAY NAME AS A POINTER
// #include<stdio.h>
// int main()
// {
    // int a[5]={1,2,3,4,5};
    // int *p=&a[4];
    // printf("The reversed array is : ");
    // for(;p>=a;p--)
    //  printf("%d\t",*p);
    // return 0;
// }



// #include<stdio.h>
// #define N 5
// int main()
// {
    // int a[N],*p,*q;
    // printf("Enter the array elements : ");
    // for(p=a;p<=a+N-1;p++)
    //  scanf("%d",p);
    // printf("The array is: ");
    // for(q=a+0;q<=a+N-1;q++)
    //  printf("%d\t",*q);
    // return 0;
// }/



//REVERSE OF AN ARRAY
// #include<stdio.h>
// int main()
// {
//     int a[]={1,2,3,4,5,6,7,8,9,10};
//     int size=sizeof(a)/sizeof(a[0]);
//     int *p=&a[size];
//     for(--p;p>a-1;p--)
//     {
//         printf("%d\t",*p);
//     }
//     return 0;
// }


//REVERSE OF AN ARRAY WHEN THE POINTER POINTS TO AN ENTIRE ARRAY
// #include<stdio.h>
// int main()
// {
//     int a[5]={1,2,3,4,5};
//     int (*p)[5]=&a;
//     int size=sizeof(a)/sizeof(a[0]);
//     for(int i=size-1;i>=0;i--)
//      printf("%d\t",**p+i);
//     return 0;
// }


//QUESTION ON POINTERS 
// #include<stdio.h>
// void fun(int *p, int *q)
// {
    // p=q;
    // *p=2;
// }
// int i=0,j=1;
// int main()
// {
    // fun(&i,&j);
    // printf("The values of i and j are %d and %d",i,j);
    // return 0;
// }



// #include<stdio.h>
// void swap(int *x, int *y)
// {
//     static int *temp;
//     temp=x;
//     x=y;
//     y=temp;
// }
// void printab()
// {
//     static int a=-3,b=-6;
//     static int i=0;
//     while(i<=4)
//     {
//         if((i++)%2==1)continue;
//         a=a+i;
//         b=b+i;
//     }
//     swap(&a,&b);
//     printf("a=%d\t b=%d\t",a,b);
// }
// int main()
// {
//     printab();
//     printab();
// }

// #include<stdio.h>
// int main()
// {
//     int m=-14;
//     int n=6;
//     int o;
    
//     o = m % ++n;
//     n += m++ - o;
//     m <<= (o ^ n) & 3;
//     printf("m value %d\n",m);
//     printf("n value %d\n",n);
//     printf("o value is %d\n",o);
//     return 0;
// }

// #include<stdio.h>
// void main()
// {
//     int a;
//     printf("%d\n",a^a);
//     return 0;
// }


// #include<stdio.h>
// void swap(int *x,int *y)
// {
    // int temp=*x;
    // *x=*y;
    // *y=temp;
// }
// void Reverse(int array[],int length)
// {
    // int *p1,*p2;
    // p1=array;
    // p2=array+length-1;
    // while(p1<p2)
    // {
        // swap(p1,p2);
        // p1++;
        // p2--;
    // }
// }
// void PrintArray(int *array, int length)
// {
    // int *array_length=array+length;
    // int *position=array;
    // for(;position<array_length;position++)
    //  printf("%d\t",*position);
    // printf("\n");
// }
// int main()
// {
    // int a[]={2, 4, -6, 5, 8, -1,10};
    // printf("Original array :\n");
    // PrintArray(a,7);
    //Reverse the array 
    // Reverse(a,7);
    // printf("The reverse of the array is :\n");
    // PrintArray(a,7);
    // return 0;
// }



// #include <stdio.h>
// int main() {
    // int arr[] = {5, 2, 9, 1, 7, 6};
    // int size = sizeof(arr) / sizeof(arr[0]);
// 
    // int *ptr = arr; // Initialize a pointer to the first element of the array
    // int *min_ptr = arr; // Initialize a pointer to the first element as the current minimum
    // int *max_ptr = arr; // Initialize a pointer to the first element as the current maximum
// 
    //Iterate through the array elements
    // for (int i = 1; i < size; i++) {
        // if (*ptr < *min_ptr) {
            // min_ptr = ptr; // Update the minimum pointer
        // }
        // if (*ptr > *max_ptr) {
            // max_ptr = ptr; // Update the maximum pointer
        // }
        // ptr++; // Move the pointer to the next element
    // }
// 
    // printf("Smallest element: %d\n", *min_ptr);
    // printf("Largest element: %d\n", *max_ptr);
// 
    // return 0;
// }



//A STRING LITERAL CAN NOT BE MODIFIED 
// #include<stdio.h>
// int main()
// {
    // char *ptr="Hello world";
    // char *ptr="X";
    // printf("%s\n",*ptr);
    // return 0;
// }


//Identifying the differences between a string literal and a character constant 
// #include<stdio.h>
// int main()
// {
    // char *ptr="Hello";
    // char p='H';
    // printf("%s\n",ptr);
    // printf("%s\n",p);
    // return 0;
// }


//TAKING VARIOUS LENGTHS OF A STRING WITH RESPECT TO THE INPUT AND OBSERVING ITS BEHAVIOUR ON THE OUTPUT SIDE (LESS , EQUAL, HIGHER LENGTH )
// #include<stdio.h>
// int main()
// {
    // char s[5]="Hi";
    // char t[2]="B";
    // char u[4]="Hello";
    // printf("%s\n",s);
    // printf("%s\n",t);
    // printf("%s\n",u);
    // return 0;
// }


//METHOD -2 OF THE ABOVE PROGRAM 
// #include<stdio.h>
// int main()
// {
    // char s[5]="FIVE",t[5];
    // for(int i=0;s[i]!='\0';i++)
    // {
        // t[i]=s[i];
    // }
    // printf("%s",t);
    // return 0;
// }


//puts() in a string 
// #include<stdio.h>
// int main()
// {
    // char *str="Hello World";
    // printf("%s\n",str);
    // printf("%.5s\n",str);
    // puts(str);
    // return 0;
// }


//Understanding the difference between gets() and the scanf() functions while reading the strings
// #include<stdio.h>
// int main()
// {
    // char str[10];
    // printf("Enter the string :\n");
    //scanf("%s",str);
    // gets(str);
    // puts(str);
    //printf("%s",str);
    // return 0;
// }


//fgets() method 
// #include<stdio.h>
// #define MAX 1024
// int main()
// {
    // char buffer[MAX];
    // printf("Enter the input string : \n");
    // fgets(buffer,20,stdin);
    // printf("The string is : %s\n",buffer);
    // return 0;
// }


//To take an input string and return the string and the number of characters 
// #include<stdio.h>
// int input(char str[], int size)
// {
    // char ch;int count=0;
    // printf("Enter the string:\n");
    // while((ch=getchar()) !='\n')
    // {
        // if(count<size)
        // {
            // str[count++]=ch;//Keeps taking in the characters
        // }
    // }
    // str[count]='\0';//Final character
    // return str,count;//Returns the number of characters printed 
// }
// int main()
// {
    // char str[1024];
    // int n=input(str,27);
    // printf("%s is the string and  the no of characters are %d\n",str,n);
    // return 0;
// }


//Printing alphabets by making use of the putchar function
// #include<stdio.h>
// int main()
// {
    // int ch='A';
    // for(;ch<='Z';ch++)
    //  putchar(ch);
    // return 0;
// }


//Printing numbers by making use of the putchar function
// #include<stdio.h>
// int main()
// {
    // int ch='1';
    // for(;ch<='9';ch++)
    //  putchar(ch);
    // return 0;
// }


//strcpy() function
// #include<stdio.h>
// #include<string.h>
// int main()
// {
    // char str[10]="Hello boys";
    // char s2[10];
    // char s3[10];
    // strcpy(s3,strcpy(s2,str));//We can chain the strcpy calls 
    // printf("s1=%s\n",str);
    // printf("s2=%s\n",s2);
    // printf("s3=%s\n",s3);
    // return 0;
// }


//UNDEFINED BEHAVIOUR WHILE USING strcpy() function
// #include<stdio.h>
// #include<string.h>
// int main()
// {
    // char str[10]="Hello boys";
    // char s2[20];
    // char s3[11];
    // strcpy(s3,strcpy(s2,str));//We can chain the strcpy calls 
    // printf("s1=%s\n",str);
    // printf("s2=%s\n",s2);
    // printf("s3=%s\n",s3);
    // return 0;
// }


//strncpy() function
// #include <stdio.h>
// #include <string.h>
// 
// int main(){
    // char str1[6] = "Hello ";
    // char str2[5];
    // strncpy(str2, str1, sizeof(str2)-1);//To terminate the string, we are writing sizeof((s2)-1)
    // printf("%s" , str2);
    // return 0;
// }


//strcat()=> string concatenation 
// #include<stdio.h>
// #include<string.h>
// int main()
// {
    // char s1[10],s2[10];
    // strcpy(s1,"Hello");
    // strcpy(s2," World!");
    // strcat(s1,s2);
    // printf("s1=%s\n",s1);
    // return 0;
// }


//Undefined behaviour of strcat()[When the size of s1 is LESSER THAN s2]
// #include<stdio.h>
// #include<string.h>
// int main()
// {
    // char s1[5],s2[10];
    // strcpy(s1,"Hello");
    // strcpy(s2," World!");
    // strcat(s1,s2);
    // printf("s1=%s\n",s1);
    // return 0;
// }


//strncat() function
// #include<stdio.h>
// #include<string.h>
// int main()
// {
    // char s1[6],s2[6];
    // strcpy(s1,"He");
    // strcpy(s2,"llo!");
    // strncat(s1,s2,sizeof(s1)-strlen(s1)-1);
    // printf("Final string is %s\n",s1);
    // return 0;
// }


//PRINTING A NAME AND ITS ASCII EQUIVALENT SUM 
// #include <stdio.h>  
// int main()  
// {  
    // int sum=0;  // variable initialization  
    // char name[20];  // variable initialization  
    // int i=0;  // variable initialization  
    // printf("Enter a name: ");  
    // fgets(name,20,stdin); 
    // while(name[i]!='\0')  // while loop  
    // {  
        // printf("\nThe ascii value of the character %c is %d", name[i],name[i]);  
        // sum=sum+name[i];  
        // i++;  
    // }  
    // printf("\nSum of the ascii value of the string %s is : %d", name,sum);  
    // return 0;  
// }  


//ACCESSING STRING ELEEMNTS USING POINTERS
// #include<stdio.h>
// int main()
// {
    // char str[]="Hello World!";
    // char *ptr="Hello World";
    // printf("%c\n",str[0]);
    // printf("%c\n",ptr[0]);
    // return 0;
// }

//ststr() function
// #include<string.h>
// #include<stdio.h>
// int main()
// {
    // char s1[]="Hello world";
    // char s2[]="Hello from the otherside of the world";
    // printf("%s\n",strstr(s1,s2));
    // return 0;
// }


//sprintf() or stringprintf function
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int a=1,b=2;
//     char str[256]={0};//Initialzies all the characters in the string to 0 FOR NOW 
//     sprintf(str,"There are no integers present between %d and %d\n",a,b);//Now, all the characters in the string are formatted to the char array str, which helps in modifyng the string 
//     printf("%s\n",str);//Now, the string is completely printed 
//     return 0;
// }
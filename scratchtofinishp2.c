/* ARRAY DECLARATION USING FOR LOOP 
#include<stdio.h>
int main()
{
    int a[10];
    printf("Enter the elements :\n");
    for (int i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are: \n");
    for(int i=1;i<=10;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}*/


/* REVERSAL OF AN ARRAY
#include<stdio.h>
#define max_size 100 // Defines the max size upto which the operation can be done 
int main()
{
    int a[max_size];
    int n;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The reversed array is : \n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}*/


/*LARGEST AND SMALLEST ELEMENT IN AN ARRAY 
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int a[MAX_SIZE];
    int size;
    int arr_max=0;
    int arr_min=a[0];
    printf("Size of the array : ");
    scanf("%d",&size);
    printf("Enter the elements :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(arr_max<a[i])
         arr_max=a[i];
        if(arr_min>a[i])
         arr_min=a[i];
    }
    printf("The largest element in an array is %d\n",arr_max);
    printf("The smallest element in an array is %d\n",arr_min);
    return 0;
}*/


/*
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int a[MAX_SIZE];
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int sum=0;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    printf("The sum of the array elements is %d",sum);
    return 0;
}*/


/*ARRAY DECLARATION AND INITIALIZATION USING FUNCTIONS 
#include<stdio.h>
int array(int a[],int size) //USED TO DEFINE AND INITIALIZE THE ELEMENTS OF AN ARRAY 
{
    int i,n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    return a; 
}
int main()
{
    int size;
    int arr[]={1,2,3,4,5};
    size=sizeof(arr)/sizeof(arr[0]);
    array(arr,size); //To scan the elements of the array 
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/

/* DYNAMIC ARRAY 
#include<stdio.h>
#define MAX_SIZE 100
int dynamic_array(int a[MAX_SIZE],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    return a[MAX_SIZE];
}
int main()
{
    int arr[MAX_SIZE];
    int size,i;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    dynamic_array(arr,size);
    printf("The elements of the array are : \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/

/* SUM OF ARRAY OF ELEMENTS USING FUNCTIONS 
#include<stdio.h>
#define MAX_SIZE 100
int SumOfNumbers(int a[MAX_SIZE],int size)
{
    int sum=0,i;
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int main()
{
    int arr[MAX_SIZE];
    int size;
    int FinalSum;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter the elements : \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    FinalSum=SumOfNumbers(arr,size);
    printf("The sum of the array of elements is : %d",FinalSum);
    return 0;
}*/



/* ARRAY REVERSAL USING FUNCTIONS 
#include<stdio.h>
#define  MAX_SIZE 100
void ArrayReversal(int arr[MAX_SIZE],int size )
{
    for(int i=size-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return; //to terminate a void function we make use of return
}
int Array(int arr[MAX_SIZE],int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr[MAX_SIZE];
}
int main()
{
    int a[MAX_SIZE],size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter the elements of the array : \n");
    Array(a,size);
    printf("The reversed array is : \n");
    ArrayReversal(a,size);
    return 0;
}
*/



/*LARGEST AND SMALLEST ELEMENT OF AN ARRAY USING FUNCTIONS 
#include<stdio.h>
#define MAX_SIZE 100
int Array(int arr[MAX_SIZE],int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr[MAX_SIZE];
}
int main()
{
    int a[MAX_SIZE],size;
    int a_max=0,a_min=a[0];
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter the elements : ");
    Array(a,size);
     for(int i=0;i<size;i++)
    {
        if(a_max<a[i])
         a_max=a[i];
        if(a_min>a[i])
         a_min=a[i];
    }
    printf("%d and %d are largest and the smallest element of the array  \n",a_max,a_min);
    return 0;
}*/


/*TO PRINT THE DUPLICATE ELEMENTS AND THE NO OF DUPLICATE ELEMENTS IN THE ARRAY
#include<stdio.h>
#define MAX_SIZE 100
void Duplicate(int arr[MAX_SIZE],int size)
{
    int i,j,count=0;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("duplicate elements : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d\n",arr[j]);
                count++;
                break;
            }
        }
    }
    printf("The no of duplicate elements are : %d\n",count);
    return;
}
int main()
{
    int a[MAX_SIZE],size;
    printf("Size of the array : \n");
    scanf("%d",&size);
    printf("Enter the array elements : \n");
    Duplicate(a,size);
    return 0;
}*/



/* FLOAT SIZED ARRAY
#include<stdio.h>
int main()
{
    float arr[5]={1.1,2.2,3.3,4.4,5.5};
    for(int i=0;i<5;i++)
    {
        printf("%.1f\t",arr[i]);
    }
    return 0;
}*/


/* PRINTING OF DISTINCT ELEMENTS FROM AN DUPLICATE ARRAY WITHOUT USING FUNCTIONS 
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int a[MAX_SIZE],size,i,j;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter the array elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                break;
            }
        }
        if(i==j)
         printf("%d\t",a[i]);
    }
    return 0;
}*/


/* PRINTING OF DISTINCT ELEMENTS IN AN ARRAY BY USING FUNCTIONS 
#include<stdio.h>
#define MAX_SIZE 100
void Distinct(int arr[MAX_SIZE],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //To check for distinct elements 
    for(i=0;i<size;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])//if duplicate elements are found 
             break;
        }
        if(i==j)
         printf("Distinct element :%d\n",arr[i]); //Printing the original array by removing the duplicate elements 
    }
    return;
}
int main()
{
    int a[MAX_SIZE],size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter the array elements : \n");
    Distinct(a,size);
    return 0;
}*/


/* LEFT CIRCULAR ROTATION OF AN ARRAY (NOT OF DYNAMIC ARRAY) BY USING FUNCTIONS 
#include<stdio.h>
void LeftCircularRotate(int arr[],int size, int positions) //Writing a function to perform left circular rotation 
{
    int first; //The 1st element is considered here since the 1st element always gets wrapped around in Circular left rotation
    for(int i=0;i<positions;i++) //To perform N number of [positions] of circular left rotations 
    {
        first=arr[0];
        for(int j=0;j<size-1;j++) //To perform the process of circular left shift rotation of an array 
        {
            arr[j]=arr[j+1]; //The elements gets shifted to the left, except for the 1ST ELEMENT in an iteration
        }
        arr[size-1]=first; //The 1st element in an iteration gets shifed to the index of the last element, making it WRAPPED AROUND IN A CIRCULARLY LEFT FASHION (WRT THE 1ST ELEMENT)
    }
}
void PrintArray(int arr[],int size )
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int Pos;
    printf("Enter the no of positions to the rotate the array circularly left : \n");
    scanf("%d",&Pos);
    printf("The array elements are:\n");
    PrintArray(a,size);
    //To perform the Left Circular Rotation of the printed array 
    LeftCircularRotate(a,size,Pos);
    printf("The array obtained after performing Circular left rotation is : \n");
    PrintArray(a,size);
    return 0;
}*/




/*
#include<stdio.h>
void RightCircularRotate(int arr[],int size, int positions)
{
    int last; //The last element is considered here since the last elements wraps around the array in a circularly right fashion
    for(int i=0;i<positions;i++) //To perform the Right Circular shifting by N no of positions 
    {
        last=arr[size-1];
        for(int j=size-1;j>0;j--) //To perform the process of Right Circular shifting 
        {
            arr[j]=arr[j-1]; // The elements present in an array gets shifted to the right wrt the source array, except for the LAST ELEMENT in an iteration 
        }
        arr[0]=last;//The last element gets wrapped around to the index of the 1st element in a circularly right fashion
    }
}
void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a[]={1,2,3,4,5};
    int pos,size;
    size=sizeof(a)/sizeof(a[0]);
    printf("Enter the no of positions to rotate the array in a right circular way : \n");
    scanf("%d",&pos);
    PrintArray(a,size);
    //To perform The Right Circular Rotation of the array 
    RightCircularRotate(a,size,pos);
    printf("The array formed by performing Right Circular Rotation : \n");
    PrintArray(a,size);
    return 0;
}*/



/* RIGHT ROTATION OF AN ARRAY OR REVERSAL ALGORITHM OF RIGHT ROTATION BY N NO OF POSITIONS      
#include<stdio.h>
void RotateRight(int a[], int size, int Rotations)
{
    Rotations=Rotations%size; //IF THE NO OF ROTATIONS MENTIONED ARE GREATER THAN THE SIZE OF THE ARRAY
    int last;
    for(int i=0;i<Rotations;i++) //WORKING OF RIGHT ROTATION 
    {
        last=a[size-1];
        for(int j=size-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=last;
    }
}
void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a[]={1,2,3,4,5};
    int size,Rotate;
    size=sizeof(a)/sizeof(a[0]);
    printf("Enter the rotate of positions to rotate an an array to the right: \n");
    scanf("%d",&Rotate);
    //To print the array 
    printf("The array elements are : \n");
    PrintArray(a,size);
    //To print the Right rotated array
    printf("The array obtained by Right Rotation of an array : \n");
    RotateRight(a,size,Rotate);
    PrintArray(a,size);
}*/




/*
#include<stdio.h>
void LeftRotate(int arr[],int size,int rotations)
{
    rotations=rotations%size; //If the no of rotations are greater than the size of the array 
    int temp[rotations]; //To store the no of elements eqivalent to the no of rotations
    for(int i=0;i<rotations;i++)
    {
        temp[i]=arr[i];
    }
    int shifting=rotations; //To store the remaining elements of an array after storing in the rotation elements 
    for(int i=0;shifting<size;i++)
    {
        arr[i]=arr[shifting++];
    }
    //The shifting variable is made to be 0 so that the rotations array can be added to the remaining elements array
    shifting=0;
    for(int i=size-rotations;i<size;i++)
    {
        arr[i]=temp[shifting++];
    } 
    for(int i=0;i<size;i++) //PRINTING THE FINAL ARRAY 
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int positions;
    printf("Enter the no of positions to rotate the array by : ");
    scanf("%d",&positions);
    printf("The array that is obtained by left rotation of an array is : \n");
    LeftRotate(a,size,positions);
    return 0;
}*/


/* SUM OF THE ROW AND COLUMN ELEMENTS IN A 2D ARRAY
#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    //to print the row sum 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum+=a[i][j];
        }
        printf("%d is the sum at row %d\n",sum,i);
        sum=0;// Sum is reverted back to zero to again calculate the su of the next iteration, i.e., next row 
    }
    //To print the column sum
    for(int j=0;j<3;j++) //As we are printing the sum of N columns, we write the j loop iteration firstly 
    {
        for(int i=0;i<3;i++)
        {
            sum+=a[i][j];
        }
        printf("%d is the sum at col %d\n",sum,j);
        sum=0;
    }
    return 0;
}*/



/*ADDITION OF 2 2D MATRICES 
#include <stdio.h>
int main()
{
    int rowCount, columnCount, i, j;
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];

    printf("Number of rows of matrices to be added : ");
    scanf("%d", &rowCount);

    printf("Number of columns matrices to be added : ");
    scanf("%d", &columnCount);

    printf("Elements of first matrix : \n");

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            scanf("%d", &firstMatrix[i][j]);
        printf("\n");

    printf("Elements of second matrix : \n");

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            scanf("%d", &secondMatrix[i][j]);
        printf("\n");

    printf("The first matrix is : \n");
    for (i = 0; i < rowCount; i++)
    {
        for (j = 0; j < columnCount; j++)
        {
            printf("%d\t",firstMatrix[i][j]);
        }
        printf("\n");
    }


    printf("The second matrix is : \n");
    for (i = 0; i < rowCount; i++)
    {
        for (j = 0; j < columnCount; j++)
        {
            printf("%d\t",secondMatrix[i][j]);
        }
        printf("\n");
    }
    
    printf("Sum of entered matrices : \n");

    for (i = 0; i < rowCount; i++)
    {
        for (j = 0; j < columnCount; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            printf("%d\t",resultMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/





/*MULTIPLICATION OF 2 2D MATRICES 
#include<stdio.h>    
int main()
{
    int r1,r2,c1,c2;
    printf("Enter number of rows for First Matrix:\n");    
    scanf("%d",&r1);    
    printf("Enter number of columns for First Matrix:\n");     
    scanf("%d",&c1); 
    printf("Enter number of rows for Second Matrix:\n");    
    scanf("%d",&r2);    
    printf("Enter number of columns for Second Matrix:\n");     
    scanf("%d",&c2);
    if(c1!=r2) //To check whether matrix multiplication is possible or not,we have to check whether c1=r2
    {
        printf("Matrices Can't be multiplied together");
    }
    else
    {
        int m1[r1][c1],m2[r2][c2];
        printf("Enter first matrix elements \n");    
        for(int i=0;i<r1;i++)    
        {    
            for(int j=0;j<c1;j++)    
            {    
                scanf("%d",&m1[i][j]);    
            }    
        }    
        printf("Enter Second matrix elements\n");    
        for(int i=0;i<r2;i++)    
        {    
            for(int j=0;j<c2;j++)    
            {    
                scanf("%d",&m2[i][j]);    
            }    
        }    
        int mul[r1][c2]; //To get the resultant matrix, we should consider (r1=c2)
        for(int i=0;i<r1;i++)    
        {    
            for(int j=0;j<c2;j++)    
            {    
                mul[i][j]=0; 
 
                // Multiplying i’th row with j’th column since the column of 1st matrix is multiplied with the row of the 2nd matrix and to keep track of the simultaenous traversals taking place in the rows and columns  
                for(int k=0;k<c1;k++)    
                {    
                    mul[i][j]+=m1[i][k]*m2[k][j];    
                } 
            }    
        }    
        //To get the resultant multiplied matrix, r1=c2
        printf("Multiplied matrix\n");     
        for(int i=0;i<r1;i++)    
        {    
            for(int j=0;j<c2;j++)    
            {    
                printf("%d\t",mul[i][j]);    
            }    
            printf("\n");    
        } 
    }
    return 0;  
}*/



/* TRANSPOSE OF A 2D MATRIX 
#include<stdio.h>
#define ROW 10
#define COL 10 
void transpose(int a[ROW][COL],int rows, int cols )
{
    int b[ROW][COL];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
          b[j][i]=a[i][j];
        }
        printf("\n");
    }
    printf("Transpose of the matrix is : \n");  
    for(int i=0;i<cols;i++)  //To obtain the transpose of the matrix here in the output, we first iteerate the cols and then the rows 
    {
        for(int j=0;j<rows;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return;
}
int main()
{
    int arr[ROW][COL],transpose_matrix[ROW][COL],rows,columns;
    printf("Enter the no of rows and columns of the matrix : \n");//order of the matrix 
    scanf("%d%d",&rows,&columns);
    printf("Enter the matrix elements : \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("The original matrix is :\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    transpose(arr,rows,columns);
    return 0;
}*/



/* UUPER AND LOWER TRIANGULAR MATRIX 
#include<stdio.h>
#define ROWS 5
#define COLS 5 
void MatrixScan(int a[ROWS][COLS],int rows, int columns )
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void UpperTriangular(int a[ROWS][COLS],int rows,int columns)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(i>j)//Row index is greater than the column index 
             printf("0");
            else 
             printf("%d",a[i][j]);
             printf(" ");
        }
        printf("\n");
    }
}
int LowerTriangular(int a[ROWS][COLS],int rows,int columns)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(i<j)//Column index is greater thn the row index 
             printf("0");
            else 
             printf("%d",a[i][j]);
             printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    int arr[ROWS][COLS],r,c;//r for rows//  //c for cols
    printf("Enter the order of the array : ");
    scanf("%d%d",&r,&c);
    printf("Enter the matrix elements : \n");
    MatrixScan(arr,r,c);
    printf("The Upper Triangular Matrix is : \n");
    UpperTriangular(arr,r,c);
    printf("The Lower Triangular Matrix is : \n");
    LowerTriangular(arr,r,c);
    return 0;
}*/


/*
#include<stdio.h>
#include<stdlib.h> //For defining the absolute function 
#include<limits.h> //For defining INT_MAX
#define MAX_SIZE 100 
int NearestElement(int arr[],int size,int key)
{
    int MinDifference=INT_MAX; //This makes sure that the maximum difference occuring will be within the limits of the max element present in an array
    int ClosestElement=arr[0];//Used for comparing the key value and the array elements value. Initially its considered to be the 1st element 
    for(int i=0;i<size;i++)
    {
        int Difference=abs(arr[i]-key); //Finding out the diffference between the key and the iterating array values present 
        if(Difference<MinDifference) //If the difference found is smaller than the mindifference present in the current iteration
        {
            MinDifference=Difference;
            ClosestElement=arr[i];
        }
    }
    return ClosestElement;
}
void ArrayScan(int arr[MAX_SIZE],int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a[MAX_SIZE],key_val,size;
    printf("Enter your key value : \n");
    scanf("%d",&key_val);
    printf("Enter the length of the array: ");
    scanf("%d",&size);
    printf("The array elements are : \n");
    ArrayScan(a,size);
    int val=NearestElement(a,size,key_val);
    printf("The closest element to the key in the array is %d\n",val);
    return 0;
}*/



/* LINEAR SEARCHING 
#include<stdio.h>
#define MAX_SIZE 100 
int LinearSearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
         return i+1;
        else 
         return 0;
    }
}
void ArrayScan(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int a[MAX_SIZE],key,size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the key value:\n");
    scanf("%d",&key);
    printf("Enter the array elements :\n");
    ArrayScan(a,size);
    int res=LinearSearch(a,key,size);
    printf("The element is found at %d position\n",res);
    return 0;
}*/


/* LINEAR SEARCH TO PRINT THE INDEX 
#include<stdio.h>
#define MAX_SIZE 100
int LinearSearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
         return i;
    }
    return -1;
}
int ArrayScan(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
         scanf("%d",&arr[i]);
    }
    return arr[MAX_SIZE];
}
int main()
{
    int a[MAX_SIZE],size,key;
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    printf("Enter the key value: \n");
    scanf("%d",&key);
    printf("Enter the array elements:\n");
    ArrayScan(a,size);
    //To perform linear search
    int res=LinearSearch(a,size,key);
    if(res>=0)
     printf("The key %d is found at index %d\n",key,res);
    else 
     printf("The key is not found at Linear Search\n");
    return 0;
}*/



/*BINARY SEARCH USING THE ITERATIVE METHOD   (METHOD -1)
#include<stdio.h>
int BinarySearch(int arr[],int left, int right, int key)
{
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]==key)     
         return mid;
        else if(arr[mid]<key)
         left=mid+1;
        else 
         right=mid-1;
    }
    return -1;
}
int main()
{
    int key;
    printf("Enter the key value :\n");
    scanf("%d",&key);
    int a[]={1,2,3,4,5,10,15};
    int size=sizeof(a)/sizeof(a[0]);
    //To perform binary search 
    int res=BinarySearch(a,0,size-1,key);
    (res==-1)?printf("The element is not present in the array while performing binary search\n") : printf("The element %d is found at index %d\n",key,res);
    return 0;
}*/


/* BINARY SEARCH USING RECURSIVE APPROACH       (METHOD -2)
#include<stdio.h>
int BinarySearchRecursion(int arr[],int left,int right,int key)
{
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]==key)
         return mid;
        if(arr[mid]>key)
         return BinarySearchRecursion(arr,left,mid-1,key);
        if(arr[mid]<key)
         return BinarySearchRecursion(arr,mid+1,right,key);
    }
    return -1;
}
int main()
{
    int key_val;
    printf("Enter the key value:\n");
    scanf("%d",&key_val);
    int a[]={1,2,3,4,5,6};
    int size=sizeof(a)/sizeof(a[0]);
    int res=BinarySearchRecursion(a,0,size-1,key_val);
    (res==-1)?printf("The key %d is not found in the array\n",key_val):printf("The key %d is found at %d index\n",key_val,res);
    return 0;
}
*/


/* BUBBLE SORT USING FUNCTIONS 
#include<stdio.h>
void ScanArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
}
void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void BubbleSort(int arr[],int size)
{
    int temp,i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int arr[100],size;
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    printf("Enter the array elements :\n");
    ScanArray(arr,size);
    printf("The unsorted array is :\n");
    PrintArray(arr,size);
    printf("The array obtained by bubble sorting is :\n");
    BubbleSort(arr,size);
    PrintArray(arr,size);
    return 0;
}*/


/*SELECTION SORT USING FUNCTIONS
#include<stdio.h>
void SelectionSort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int Temp_Min_element=i; //Consider the first element of the ith element as the temp(arr[0]=i(FOR THE FIRST ITERATION))
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                int Temp_Min_Element=j; //Compare the jth min element with the ith min element (arr[0+1]=j(FOR THE FIRST ITERATION))
                //IF THE CONDITION IS SATISFIED, SWAP THE ELEMENTS 
                Temp_Min_Element=arr[i];
                arr[i]=arr[j];
                arr[j]=Temp_Min_Element;
            }
        }
    }
}
void ScanArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
}
void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a[100],size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    printf("Enter the array elements:\n");
    ScanArray(a,size);
    printf("The unsorted arry is:\n");
    PrintArray(a,size);
    //To implement the selection sort 
    printf("The array obtained by using selection sort is :\n");
    SelectionSort(a,size);
    PrintArray(a,size);
    return 0;
}*/


/* INSERTION SORT 
#include<stdio.h>
void InsertionSort(int arr[],int size)
{
    int key,i,j;
    for(i=0;i<size-1;i++)
    {
        key=arr[i]; // We make use of a key to make subsequent comparisons wrt the kwy 
        j=i-1;//To set the index for the jth element for comparison 
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];//The element is swapped 
            j=j-1; //Now the index of the subsequent elements to be compared 
        }
        arr[j+1]=key;//After performing the insertion sort,the next element present in the sorted array is assigned as a key value 
    }
}
void ScanArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
}
void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a[100],size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the array elements:\n");
    ScanArray(a,size);
    printf("The unsorted array is:\n");
    PrintArray(a,size);
    printf("The array obtained after performing Insertion sort is :\n");
    InsertionSort(a,size);
    PrintArray(a,size);
    return 0;

}*/




/*QUICK SORT USING FUNCTIONS
#include<stdio.h>
int Partition(int arr[],int low,int high)
{
    int Pivot_Element=arr[high];
    int i=low-1; //This is to assign a empty array for the elements for the elements lesser than the Pivot
    for(int j=low;j<high;j++)
    {
        if(arr[j]<Pivot_Element)
        {
            i++;//The index gets incremented to alloate the space for the sub-array for elements lesser than the pivot 
            //Swapping is performed here whenever we obtain an element greater than the pivot 
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    //As the pivot elements are provided at the start 
    //To place the pivot in the correct position, we allocate an empty space for the pivot 
    i++;
    int temp=arr[i];
    arr[i]=Pivot_Element;
    arr[high]=temp;
    return i; //Index of the Pivot_Element is returned 
}
void QuickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int Pivot_Index=Partition(arr,low,high);
        //To implement the Quick Sort to the LHS and the RHS of the Pivot element or the index
        QuickSort(arr,low,Pivot_Index-1);//To implement the QuickSort to the LHS of the array 
        QuickSort(arr,Pivot_Index+1,high);
    }
}
void ScanArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
}
void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a[100],size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the array elements:\n");
    ScanArray(a,size);
    printf("The unsorted array is :\n");
    PrintArray(a,size);
    printf("The array that is obtained by Quick Sort is:\n");
    QuickSort(a,0,size-1);
    PrintArray(a,size);
    return 0;
}*/


//MERGE SORT 
// #include<stdio.h>
//To perform sorting through merge sort 
// void Merge(int a[], int low, int mid, int high)
// {
    //Creation of the temporary sub-arrays
    // int id1 = (mid - low) + 1;
    // int id2 = high - mid;
// 
    // int left[id1], right[id2];
    //Copying the data into the sub-arrays from the original array
    // for (int i = 0; i < id1; i++)
        // left[i] = a[low + i];
    // for (int j = 0; j < id2; j++)
        // right[j] = a[mid + 1 + j];
// 
    //maintaining the indexes of the sub-arrays
    // int i = 0;
    // int j = 0;
    // int k = low; //original array index reference 
// 
    //Sorting the elements by comparing both the sub-arrays
    // while (i < id1 && j < id2)
    // {
        // if (left[i] <= right[j])
        // {
            // a[k] = left[i];
            // i++;
        // }
        // else
        // {
            // a[k] = right[j];
            // j++;
        // }
        // k++; //Incrementing the index of the original array after every comparison 
    // }
// 
    //If there are any remaining elements of the left sub-array, then the elements of the left sub-array are copied off 
    // while (i < id1)
    // {
        // a[k] = left[i];
        // i++;
        // k++;
    // }
// 
    //If there are any remaining elements of the right sub-array, then the elements of the right sub-array are copied off 
    // while (j < id2)
    // {
        // a[k] = right[j];
        // j++;
        // k++;
    // }
// }
// 
// void MergeSort(int a[], int low, int high)
// {
    // if (low < high) //To prevent duplicate traversals 
    // {
        // int mid = low + (high - low) / 2;  //To avoid space complexity, we are calculating mid as low+(high-low)/2
        // MergeSort(a, low, mid);
        // MergeSort(a, mid + 1, high);
        //To merge the arrays after sorting 
        // Merge(a, low, mid, high);
    // }
// }
// 
// void ScanArray(int a[], int size)
// {
    // for (int i = 0; i < size; i++)
        // scanf("%d", &a[i]);
// 
// }
// 
// void PrintArray(int a[], int size)
// {
    // for (int i = 0; i < size; i++)
        // printf("%d\t", a[i]);
    // printf("\n");
// }
// 
// int main()
// {
    // int size, arr[100];
    // printf("Enter the size of the array : ");
    // scanf("%d", &size);
    // printf("Enter the elements of the array : \n");
    // ScanArray(arr, size);
    // printf("The elements of the array are : \n");
    // PrintArray(arr, size);
    //To perform merge sort 
    // MergeSort(arr, 0, size - 1);
    // printf("The array obtained through merge sort is :\n");
    // PrintArray(arr, size);
    // return 0;
// }


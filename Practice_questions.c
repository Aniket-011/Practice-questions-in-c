/* PRACTICE QUESTION USING FUNCTION.

//1. Prime number.
#include<stdio.h>
void odd(void);
int main(){
    int num;    
    odd();
    return 0;
}
void odd(void){
    int num,count=0;
    printf("Enter number here:");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            count++;
        }
    }
        if (count==2)
        {
            printf("%d is prime number",num);
        }
        else
            printf("%d is not prime number:",num);
    
}


//2. Find odd,even number using function.
#include<stdio.h>
int odd_even();
int main(){
    odd_even();
    
}
int odd_even(){
    int num;
    printf("Enter number here");
    scanf("%d",&num);
    if (num%2==0)
    
    printf("%d is even number",num);
    
    else
    printf("%d is odd number",num);
    return odd_even;
    
}


//3 . Find odd,even number using function.(With argument)
#include<stdio.h>
int odd_even(int);
int main(){
    int num;
    printf("Enter number here");
    scanf("%d",&num);
    odd_even(num);
    return 0;
    
}
int odd_even(int num){
    
    if (num%2==0)
    
    printf("%d is even number",num);
    
    else
    printf("%d is odd number",num);
}


//4. armstrong number using function
#include<stdio.h>
void armstrong();
int main(){
    int num;
    printf("Enter number here");
    scanf("%d",&num);
    armstrong(num);
    return 0;
}
void armstrong(int num){
    int sum=0;
    int x=num;
    while(num>0){
        sum = sum + (num%10)*(num%10)*(num%10);
        num = num/10;
    }
    if (x==sum)
    {
        printf("%d is armstrong number.",x);
    }
    else
        printf("%d is not armstrong number.",x);
}


//5. Fibonacci series (without argument).
#include<stdio.h>
int fibo();
int main(){
    fibo();

}
int fibo(){
    int num,x,y,z;
    printf("Enter number here");
    scanf("%d",&num);
    x=0;
    y=1;
    z=0;
    while (z<=num)
    {
        x=y;
        y=z;
        z=x+y;
        printf("%d\t",z);
    }
}


//6. print str5ing
#include<stdio.h>
void str(void);
int main(){
    str();
    return 0;
}
void str(){
    char a[30];
    printf("Enter string \n");
    gets(a);
    printf("Your input string is %s",a);
}


// 7. Find length of string
#include<stdio.h>
void strln(void);
int main(){
    strln();
    return 0;
}
void strln(){
    char a[50];
    int count=0,i;
    printf("Enter string \n");
    gets(a);
    while(a[i]!='\0')
        count++;
        i++;
    printf("%d",count);
}

 
 //8.concatente string.(with argument).
 #include<stdio.h>
 void strct(char a[],char b[]);
 int main(){
    char a[50]="Aniket ";
    char b[100]="Gupta";
    strct(a,b);
}
void strct(char a[],char b[]){
    int l1=strlen(a);
    int l2=strlen(b);
    for (int i = 0; i <= l2; i++)
    {
        a[l1+i]=b[i];
    }
    printf("After the concatenation of string, the string is: %s",a);
    
}

//9. Rverse of string
#include<stdio.h>
void strrev();
int main(){
    strrev();
    return 0;
}
void strrev(){
    char a[50];
    printf("Enter string\n");
    gets(a);
    int len=strlen(a);
    for (int i = 0; i <len/2; i++)
    {
        char ch=a[i];
        a[i]=a[len -1 -i];
        a[len-1-i]=ch;
    }
    printf("%s",a);
}

//10. Array  
#include<stdio.h>
int array(void);
int main (){
    array();
    
    return 0;    
}
int array(void){
    int arr[10];
    printf("Enter element for array\n");
    for (int i = 0; i <= 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your array is ");
    for (int i = 0; i <= 5; i++)
    printf("%d ",arr[i]);
}

//11. Inverse of array
#include<stdio.h>
void invarr();
int main(){
    invarr();
    return 0;
}
void invarr(){
    int n;
    int arr[30];
    printf("Enter element of array\n");
    for(int i=0; i<=5; i++)
        scanf("%d",&arr[i]);
    printf("Inverse of array is:\n");
    for(int i=5; i>=0; i--)
        printf("%d ",arr[i]);
}

// 12. Insert a element at a given index in array.
#include<stdio.h>
void insert(void);
int main(){
    insert();
    return 0;

}
void insert(void){
    int arr[6],pos,j,n;
    printf("Enter element of array\n");
    for(int i=0; i<5; i++)
        scanf("%d",&arr[i]);
    printf("Yor array is: \n");
    for(int i=0; i<5; i++)
    printf("%d ",arr[i]);
    printf("\n");
    printf("Enter number to insert\n");
    scanf("%d",&n);
    printf("Enter index number\n");
    scanf("%d",&pos);
    for (int i = 4; i>=pos; i--)
    {
        arr[i+1]=arr[i];
        arr[pos]=n;
    }
    printf("Reverse array is:\n");
    for(int j=0; j<6; j++)
    printf("%d ",arr[j]);
}

//13.Find maximum element of array.
#include<stdio.h>
void armax();
int main (){
    armax();
    return 0;    
}
void armax(){
    int ar[6];
    printf("Enter element for array:\n");
    for(int i=0; i<6; i++)
    scanf("%d",&ar[i]);
    int max =ar[0];
    for(int i=0; i<6; i++)
    if(ar[i]>max)
    max=ar[i];
    printf("Greatest number in array is:\n");
    printf("%d",max);
}

//13.Frequency of element in string.
#include<stdio.h>
#include<stdlib.h>
void fre(void);
int main(){
    fre();
    return 0;
}
void fre(){
    char a[100];
    int count=0,i,j;
    printf("Enter any string\n");
    gets(a);

    for(i='a'; i<='z';i++){
        count=0;
        for(j=0;a[j]!='\0';j++){
            if(i==a[j])
                count++;
        }
    
    if(count>0)
    printf("%c found %d times\n",i,count);
    }
}
*/



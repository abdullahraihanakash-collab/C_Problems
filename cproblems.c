#include <stdio.h>
#include <string.h>
#include <math.h>
#define message "Computer Science and Engineering (CSE)\n"
#define PI 3.1416
int main(){
    printf(message);
    printf("Hello World");
    //How to add two numbers in c
/* int x = 5;
    int y = 9;
    printf("sum of x and y is %d\n",x+y);98
    printf("sum of x and y is %d\n",x+y);
    
    float Fahrenhiet,Celsius;
    printf ("Enter temperature in Fahernhit:");
    scanf("%f",&Fahrenhiet);

    Celsius = (Fahrenhiet-32)*5/9;
    printf("Temperature in Celsius : %.2f\n",Celsius);

    char str[17]="New Market 11000";
    printf("%s\n",str);

    float R,area,circumferenc;
    
    printf("Enter value of radius in meter: ");
    scanf("%f",&R);
    
    area = 3.1416*(R*R);
    circumferenc = 2*3.1416*R;
    
    printf("Aera of circle is %.2f\n",area);
    printf("Circumferenc of circle is %.2f\n",circumferenc);
    

    int a,b;
    printf("Enter first and second number : ");
    scanf("%d %d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Now %d is first and %d is second",a,b);



    double radius,area,perimeter;
    printf("Enter value of radious : ");
    scanf("%lf",&radius);
    area = PI*(pow(radius,2));
    perimeter = 2*PI*radius;
    printf("Value of area is %.3lf and perimeter is %.3lf",area,perimeter);
    
    
    float area,perameter,a,b,c,s;
    printf("Enter the value of a,b and c which are three side of triangle : ");
    scanf("%f %f %f",&a,&b,&c);
    perameter = a+b+c;
    s = (a+b+c)/2;
    area = s*((s-a)*(s-b)*(s-c));
    printf("Area and perameter of this triangle are %.3f and %.3f",area,perameter);

    
   float lengeh,width,area,perimeter;
   printf("Enter the length and width of rectangle : ");
   scanf("%f %f",&lengeh,&width);
   area = lengeh*width;
   perimeter = 2*(lengeh+width);
   printf("Area = %.2f and Width = %.2f",area,perimeter);

    int a,b,c;
    printf("Enter value of a,b and c : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is largest number.",a);
    }
    else if(b>a && b>c){
        printf("%d is largest number.",b);
    }
    else{
        printf("%d is largest number.",c);
    }

//nested if-else
//Write a c program to check if a number is less then 100 or not.If number is less then 100 then check if it's odd or even.
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x<100){
        if(x%2==0){
            printf("%d is less then 100 & a even number.",x);
        }
        else{
            printf("%d is less then 100 & a odd number.",x);
        }
    }
    else{
        printf("%d is not less then 100.",x);
    }

//Write a c program to find the sum of all integer then 50 and less then 300 then are divisible by 9.
    int i,sum;
    printf("All numbers between 50 and 300 which is divisible by 9\n");
    for(i=50;i<300;i++){
        if(i%9==0){
            printf("%d",i);
            sum+=i;
        }
    }
    printf("\n\nsum = %d",sum);

//Write a c program to compute the gread of a subject 
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    if(num>=80){
        printf("You get A");
    }
    else if(num>=70 && num<80){
        printf("You get B");
    }
    else if(num>=60 && num<70){
        printf("You get C");
    }
    else if(num>=50 && num<60){
        printf("You get D");
    }
    else if(num==40 && num<50){
        printf("You get E");
    }
    else if(num<40){
        printf("You get F");
    }
    else{
        printf("Enter a valide number.");
    }

//Write a c programme to test the given year is a leap year or not
    int year;
    printf("Enter a year to check : ");
    scanf("%d",&year);
    if(year%400==0 || (year%400==0 && year%100!=0)){
        printf("%d is a leap year.",year);
    }
    else{
        printf("%d is not a leap year.",year);
    }

//Switch statement
    char grade;
    printf("Enter your grade : ");
    scanf(" %c",&grade);
    printf("Your grade is %c\n",grade);
    switch(grade){
        case'A':
        printf("Excellent!\n");
        break;
        case'B':
        printf("Well done\n");
        break;
        case'C':
        printf("Good\n");
        break;
        case'D':
        printf("You passed\n");
        break;
        case'E':
        printf("Better try again\n");
        break;
        case'F':
        printf("You are fail\n");
        break;
        default:
        printf("Invalid grade\n");

    }

//Conditional operator
    int code;
    printf("Enter a code : ");
    scanf("%d",&code);
    (code>1)?printf("\nDhaka"):((code<1)?printf("\nConmlla"):printf("\nGazipur"));


    int i=10;
    while(i<20){
        printf("i\n");
        i++;
    }
    
    

    int j;
    for(j=0;j<10;j++){
        printf("j");
    }

    int i=10;
    while(i<20){
        printf("%d\n",i);
        i++;
    }

//Determine Factorial
    int num,f=1;
    printf("Enter a number to find factorial : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        f=f*i;
    }
   printf("%d",f);
 
//sum of numbers  
    int sum=0,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    printf("%d",sum);
 
//Print numbers
    int num,numbers;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        printf("%d\n",i);
        numbers+=i;
    }
    
//Sum of all digit of a integer
    int sum=0,num,digit;
    printf("Enter a integer : ");
    scanf("%d",&num);
    while(num!=0){
        digit = num%10;
        sum = sum + digit;
        num = num/10;
    }
    printf("sum of digit : %d",sum);

//Write a program to calculate & print a multiplication table of a number
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }

//Write a program to calculate & print first 20 Fibonacci number
    int i,num,result;
    printf("Enter number : ");
    scanf("%d",&num);
    if(num<0){
        printf("Fibonacci of negative number is not possible.");
    }
    else{
        result = 1;
        int temp1 = 0, temp2 = 0;
        printf("1");
        for(i=1;i<num;i++){
            temp1 = temp2;
            temp2 = result;
            result = temp1 + temp2;
            printf("%d",result);
        }
        printf("\n The %d number in fibonacci series is %d \n",num,result);
    }
//Write a programme to sum all digit of a integer
    int num,sum=0,digit;
    printf("Enter a number : ");
    scanf("%d",&num);
    while (num!=0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("Sum of digits is %d",sum);

//Write a programme that takes an integer as inpute and display it in reverse order. (n-(n/10)*10)
    int num,revers=0;
    printf("Enter a integer to revers : ");
    scanf("%d",&num);
    while(num!=0){
        revers = num % 10; //last digit of num
        revers = revers * 10  + revers; //Generate a number with revers as last digit
        num = num / 10;
        printf("%d\n",revers);
        revers = num-(num/10)*10;
        
    }
    printf("%d",revers);

//Convert decimal to binary
    int n = 10,remd;
    int re
    while (condition)
    {
        remd = n%2;
        n = n/2;
    }
 
// *
// **
// ***
// ****
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    // Run this for loop n times
    for(int i=0;i<n;i++){
        // Print (i+1) stair
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
   
//GCD & LMC
    int num1,num2,i,gcd,lmc;
    printf("Enter two number : ");
    scanf("%d %d",&num1,&num2);
    
    //gcd
    for(i=1;i<=num1 && i<=num2;i++){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }
    lmc = (num1*num2)/gcd;
    printf("GCD is %d and LMC is %d.",gcd,lmc);

//Decimal to Binary
    int decimal,binary[32],i=0;
    printf("Enter a decimal number : ");
    scanf("%d",&decimal);
    printf("Decimal %d is ",decimal);
    while(decimal>0){
        binary[i] = decimal%2;
        decimal/=2;
        i++;
    }
    printf("Binary ");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }

//Binary to Dicimal
    int binary,decimal = 0,base = 0,rem;
    printf("Enter a Binary number : ");
    scanf("%d",&binary);
    printf("Binary %d is ",binary);
    while (binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * pow(2,base);
        binary /= 10;
        base++;
    }
    printf("Decimale = %d",decimal);

//Revers a number
    int num,remainder,reverse = 0;
    printf("Enter a integer to revers : ");
    scanf("%d",&num);
    while(num != 0){
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Revers of %d is %d ",num,reverse);

//Revers a string
    char str [100];
    int i,len;
    printf("Enter a string to revers : ");
    gets(str);
    len = strlen(str);
    printf("Revers string : ");
    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }

//Power of a number
    int num = 5;
    int po = 2;
    int result = 1;
    for(int i = 0;i < po;i++){
        result = result * num;
    }
    printf("%d",result);

//    *     
//   ***
//  *****
// *******
//*********     
    int n;
    printf("Enter value of n :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j = 0;j<2*n;j++){
            if(j>=n-1-i && j<=n-1+i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

// *****
// *****
// *****
// *****
// *****
    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }

//*****
//****
//***
//**
//*
    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("*");
        }
        printf("\n");
    }

//*****
// ****
//  ***
//   **
//    *
    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

//00000
// 1111
//  222
//   33
//    4

    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

//*****
//*   *
//*   *
//*   *
//*****
    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    int x = 124,count = 0;
    if(x==0){
        printf("There is only one digit.");
    }
    else{
        while(x !=0){
        x /= 10;
        count++;
    }
    printf("There are %d digits in your number.",count);
    }
*/    

// Sum of series
    int i,num,sum=0;
    printf("Enter last number of series : ");
    scanf("%d",&num);
    for(i=1;i<num+1;i++){
        sum+=i;
    }
    printf("%d",sum);












  
  











    return 0;
}
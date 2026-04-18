/*
//wap to read two numbers from user and print their sum on output screen
#include<stdio.h>
int main()
{
    int a,b;
    printf("\n enter two numbers ");
    scanf("%d%d",&a,&b);
    printf("\n the numbers you entered are %d and %d ",a,b);
    return 0;
}



//wap to read two numbers and perform their sum,difference,multiplication
#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("\n enter two different no ");
    scanf("%d%d",&a,&b);
    printf("\n numbers are %d and %d ",a,b);
    sum=a+b;
    printf("\n sum is %d",sum);
        return 0;
}
        
       
        //wap to read to declare variable at different locations and also 
        #include<stdio.h>
        int main()
        { 
            int a=4;
            printf("\n the value of a is %d",a);
            return 0;
        }
            

            //wap of C language to calculate area of a circle
            #include<stdio.h>
            int main()
            {
                    float area,radius,pie;
                    printf("\n we are going to calculate area of circle ");
                    pie=3.14;
                    printf("\n enter radius of circle ");
                    scanf("%f",&radius);
                    area=2*pie*radius;
                    printf("\n the area is %f",area);
                    return 0;
            }

            
           //wap of C programming to read a number and check whether it is two digit or not
           #include<stdio.h>
           int main()
           {
                int a;
                printf("\n enter a number that is to be checked ");
                scanf("%d",&a);
                if(a>9 && a<100)
                {
                        printf("\n it is a two digit no");
                }
                else
                {
                        printf("\n it is not a two digit number ");
                }
                        return 0;
            }
                 */
                
        /*
//wap to read a number from user and check it is two digit or not using nested if else
#include<stdio.h>
int main()
{
            int a;
            printf("\n enter a number if you want to check its two digitness ");
            scanf("%d",&a);
            if(a>9)
            {
                    printf("\n it is greater than nine ");

                    if(a<100)
                    {
                                printf("\n it is smaller than 100");
                                printf("\n\n it is a valid two digit number ");
                    }
               //     else if(a)
                 //   {
                   //             printf("\n it is greater than 9 but not a two digit number");
                  //  }

            }
            else
            {
                            printf("\n it is not a two digit number as it is smaller than 9");
            }

            return 0;
}
        */

        //wap 
        #include<stdio.h>

int main()
{
    int a;
    printf("\n enter a number if you want to check its two digitness ");
    scanf("%d",&a);

    if(a > 9)
    {
        printf("\n it is greater than nine ");

        if(a < 100)
        {
            printf("\n it is smaller than 100");
            printf("\n\n it is a valid two digit number ");
        }
        else
        {
            printf("\n it is greater than 9 but not a two digit number");
        }
    }
    else
    {
        printf("\n it is not a two digit number as it is smaller than 9");
    }

    return 0;
}
/*

NAME: SHAIKH RAHIB

ID: K12 - 2099

SECTION : A

ITC ASSIGNMENT: SIEVE OF ERATOSTHENES

*/
   
   
   #include <time.h>
   #include <stdio.h>

   int main(){
    
   clock_t start = clock();//TIME START

   int b,c,n=2,i,d=0,j,q[1];

   printf("Welcome to Rahib's Impementation of Sieve of Eratosthenes: ");

   printf("\n\nPlease Enter Your Limit: ");

   scanf("%d",&b);

   c=b-2;

   int a[c];

   printf("\n\n The Array for all elements before %d is: \n", b);

   printf("================ \n");



    for (i=0 ; i<c ; i++,n++)
    {a[i]=n;
    printf("%d  ",a[i]); }    
    printf("\n");


    while (d<(b/2))//SEIVE
    {
          for (j=d+1 ; j<c ; j++)
          {
          if ((a[j] % a[d])==0)
          a[j]=q[1]; 
          }//ENF FOR
      
    if (a[d]!=b)
    {
    printf("\n\n");
         for (j=0 ; j<c ; j++)
         {
             if (a[j]==b)
             printf("%d  ",0);
         else
             printf("%d  ",a[j]); 
             }//END IF
             }//END IF
         else;
                d=d+1;
                }//END IF
      
    d=0;
     
    printf("\n\n\nPrime Numbers are: ");//SEIVE
  
     while (d<c)
     {
        for (j=0 ; j<d ; j++)
        {
            if (a[j]==a[d])
            {
                           j--;
        break; 
        }//END IF 
        }//END FOR

    if (a[j]==a[d] && a[j]!=b)
    printf("%d  ",a[d]);//PRINTING ONLY PRIME NUMBERS
  
    d=d+1; 
    }//END WHILE
  
    printf("\n\n\n");
 

    clock_t stop = clock();
    double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f", elapsed);//TIME END

}

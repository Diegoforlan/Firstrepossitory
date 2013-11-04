                                                                     
                                                                     
                                                                     
                                             
#include<stdio.h>

void conway(int a[][],int row,int col){
int b[row][col];
int sum=0;

for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
sum=0;

if((i!=0)&&(i!=row-1)&&(j!=0)&&(j!=col-1)){

    sum+=a[i][j];
    sum+=a[i][j-1];
    sum+=a[i][j+1];
    sum+=a[i+1][j];
    sum+=a[i+1][j-1];
    sum+=a[i+1][j+1];
    sum+=a[i-1][j];
    sum+=a[i-1][j+1];
    sum+=a[i-1][j-1];
    }
else{
    if(i==0&&j==0){
        sum+=a[i][j];
        sum+=a[i+1][j];
        sum+=a[i+1][j+1];
        sum+=a[i][j+1];
    }


    else {  if(i==0&&j==col-1){
             sum+=a[i][j];
            sum+=a[i+1][j];
            sum+=a[i+1][j-1];
            sum+=a[i][j-1];}



        else{
                if(i==row-1&&j==0){
                         sum+=a[i][j];
        sum+=a[i-1][j];
        sum+=a[i-1][j+1];
        sum+=a[i][j+1]
                }

                else{

                    if(i==row-1&&j==col-1){
                             sum+=a[i][j];
        sum+=a[i-1][j];
        sum+=a[i-1][j-1];
        sum+=a[i][j-1]
                }
                    else{
                        if(i==0)
                        {

    sum+=a[i][j];
    sum+=a[i][j-1];
    sum+=a[i][j+1];
    sum+=a[i+1][j];
    sum+=a[i+1][j-1];
    sum+=a[i+1][j+1];
                        }
                        else{
                            if(i==row-1){
    sum+=a[i][j];
    sum+=a[i][j-1];
    sum+=a[i][j+1];
    sum+=a[i-1][j];
    sum+=a[i-1][j-1];
    sum+=a[i-1][j+1];}
                            else{
                                if(j==0){

    sum+=a[i][j];
    sum+=a[i][j+1];
    sum+=a[i-1][j+1];
    sum+=a[i+1][j];
    sum+=a[i-1][j];
    sum+=a[i+1][j+1];
                                    else{
                                        if(j==col-1)
                                        {


    sum+=a[i][j];
    sum+=a[i][j-1];
    sum+=a[i-1][j-1];
    sum+=a[i+1][j];
    sum+=a[i-1][j];
    sum+=a[i+1][j-1];
}}}}}}}}}}}}
if(sum>=3){b[i][j]=1;}
else{b[i][j]=0;}

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        a[i][j]=b[i][j];
        }}}

        void input(a[][],int row,int col){

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("Enter element at %d,%d location :: ",i,j);
        scanf("%d",&a[i][j]);
        }}
        }
void display(a[][],int row,int col){

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("%d ",a[i][j]);
        }
        printf("\n");}
        }

     int main(){
     int i,j;
     printf("Enter no.of rows u want");
     scanf("%d",&i);
     printf("Enter no.of columns u want");
     scanf("%d",&j);
     int a[i][j];
     input(a,i,j);
     conway(a,i,j);
     display((a,i,j);
     return 0;
     }


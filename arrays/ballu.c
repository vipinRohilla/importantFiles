/**********************************************
****Random Marks Frequency Distribution***
***********************************************/
#include<stdio.h>
#include<math.h>
/**Function that generates a random number.
Parameters: 
r0: initial (first) seed
a: scale factor , so that a*r0 give the first random number
m: gives the max. value of random numbers that can be generated (m-1)
c: additional displacement(offset) factor
**/
int rand(int r0, int a, int m, int c){
    int r1=(a*r0+c)%m;
    return r1;
}
/**Function that generates random numbers in a given range: [min,max], given a seed r0, and stores them in an array that is passed as an argument.
Parameters:
r0: initial (first) seed
a: scale factor , so that a*r0 give the first random number
m: gives the max. value of random numbers that can be generated (m-1)
c: additional displacement factor
n: no. of random numbers to be generated
x[n]: array that will store the random numbers
min: lower limit for random nos.
max: upper limit for random nos.
**/
void randomNos(int r0, int a, int m, int c, int n, int x[n], int min, int max){
    int r1=rand(r0,a,m,c);
    int r2=min+((max-min+1)*r1)/m;
    int i;
    for(i=0;i<n;i++){
        x[i]=r2;
        r1=rand(r1,a,m,c);
        r2=min+((max-min+1)*r1)/m;
    }
}
int main(){
    int min, max, n, a=1093, m=86436, c=18257, r0=43;
    printf("Enter the lower limit:\n");
    scanf("%d",&min);
    printf("Enter the higher limit:\n");
    scanf("%d",&max);
    printf("Enter the no. of random numbers required:\n");
    scanf("%d",&n);
    int random[n];
    randomNos(r0, a, m, c, n, random, min, max);
    FILE *fp=NULL;
    fp=fopen("marks.txt","w");
    int i,j;
    //printf("The random numbers between %d and %d are:\n",min, max);
    for(i=0;i<n;i++){
        fprintf(fp,"%d\n",random[i]);
    }
    //Begin distribution calculations within different intervals
    int h=10; //width of interval
    int count[10]; //10 intervals of width 10
    for(j=0;j<10;j++){
        count[j]=0;
        for(i=0;i<n;i++){
            if(j!=9){
                //find out the number of randomnumbers within an interval
                if((j*h<=random[i])&&(random[i]<(j+1)*h)){
                    count[j]++;  //find out the number of randomnumbers within an interval 
                }
            } else{
                //find out the number of randomnumbers within an interval
                if((j*h<=random[i])&&(random[i]<=(j+1)*h)){
                    count[j]++;  //find out the number of randomnumbers within an interval 
                }
            }
                 
             
        }
    }
    FILE *fp2=NULL;
    fp2=fopen("randMarksDistribution.txt","w");
    for(i=0;i<10;i++){
        fprintf(fp2,"%d\t%d\n",i*h,count[i]);
        //printf("%d\n",count[i]);
    }
     return 0;
     
     
}
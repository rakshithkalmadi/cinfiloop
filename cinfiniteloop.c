//Here is a simplt code to run out the for loop execution to workout the processor
//Here there are two types you can either manually enter or if you type 909 then it will execute the infinite loop

#include<stdio.h>
int i,n;
int main(){
printf("\n Enter the number of times to repeat: ");
scanf("%d",&n);
if(n==909)
{
for(i=0;i<9999999999;i++){
printf("\n This is a infi loop executed ");
}
}
else{
for(i=0;i<n;i++){
printf("\n This is a loop executed ");
}
}
}

#include<stdio.h>
#include<stdlib.h>

int main(){
int arr[20],l,h,i,j,k=0,sum=0;

printf("\n enter the lowest and highest number of he range\n");
scanf("%d%d",&l,&h);

for(i=l;i<=h;i++)
{int flag=0;

    for(j=2;j<i/2;j++)
    {
        if(i%j==0)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
    continue;

    arr[k++]=i;
}



for(i=0;i<k;i++)
{
printf("\nThe prime numbers are %d\n",arr[i]);
sum+=arr[i];
}
printf("\n Sum of prime numbers is %d",sum);
return 0;

}

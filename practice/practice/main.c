#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>

int main()
{
    int a[20],b,n,mid,max,*p;srand((unsigned)time(NULL));for(int i=0;i<20;i++) a[i]=rand()%100;for(p=a;p<a+20;p++) printf("%d ",*p);putchar('\n');scanf("%d",&n);putchar('\n');
    for(int i=0;i<19;i++)
        for(int j=0;j<19-i;j++)
            if(a[j]>a[j+1]){b=a[j+1];a[j+1]=a[j];a[j]=b; }

for(int i=0;i<20;i++) printf("%d ",a[i]);
int low=0,high=19;
while(low<=high){
    mid=(low+high)/2;
    if(n==a[mid])
        break;
    else if(n>a[mid]) low=mid+1;else high=mid-1;
    }
if(low>high) printf("未找到");
else printf("你要找的数%d在排序后的数列中的第%d位",n,mid);
}





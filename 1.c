#include<stdio.h>
void main()
{
        int a[5] = {7,2,5,4,1};

        for(int i=0;i<5;i++)
        {
                for(int j=0;j<5;j++)
                {
                        if(a[i]<a[j]){
                                int temp =a[i];
                                a[i]=a[j];
                                a[j]=temp;
                        }

                }
        }
        for(int k=0;k<5;k++)
        {
                printf("%d ",a[k]);
        }
}


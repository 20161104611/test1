//
//  main.c
//  test
//
//  Created by s20161104611 on 17/6/7.
//  Copyright © 2017年 s20161104611. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("今天高考\n");
    int a[20];
    int n,k,j,t,i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0; j<n-1; j++)
        {
            for(k=0; k<n-1-j; k++)
            {
                if(a[k]>a[k+1])
                {
                    t=a[k];
                    a[k]=a[k+1];
                    a[k+1]=t;
                }
            }
        }
        for(k=0; k<i; k++)
        {
            printf("%d ",a[k]);
        }
        printf("\n");
    }
    

    return 0;
}

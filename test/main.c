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
    //printf("Hello, World!\n");
    //printf("今天高考\n");
    int a[20];
    int n,k,j,t,i;
    FILE *fp1,*fp2;
    fp1=fopen("//Users//s20161104611//Desktop//test1//sortout.txt","w");
    fp2=fopen("//Users//s20161104611//Desktop//test1//sort.txt","r+");
    if(fp2==NULL)
    {
        printf("打开文件错误，要打开的文件可能不存在");
        
    }
    else
    {
        while(fscanf(fp2,"%d",&n)!=EOF)
        {
            for(i=0;i<n;i++)
            {
                fscanf(fp2,"%d",&a[i]);
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
                fprintf(fp1,"%d ",a[k]);
            }
            fprintf(fp1,"\n");
            printf("\n");
            
        }
        fclose(fp1);
        fclose(fp2);
    }

    return 0;
}

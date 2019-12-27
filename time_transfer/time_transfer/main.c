//
//  main.c
//  time_transfer
//
//  Created by Luo on 2019/12/27.
//  Copyright © 2019 Luo. All rights reserved.
//


//分列队
#include <stdio.h>
int main(){
    int n =0;
    int num =1;
    printf("请输入班级人数:");
    scanf("%d",&n);
    do {
        printf("%d",num);
        if (num<n){
            printf(" ");
        } else {
            printf("\n");
        }
        num +=2;
    } while (num <=n);
    return 0;
}

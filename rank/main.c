//
//  main.c
//  rank
//
//  Created by Luo on 2019/12/27.
//  Copyright © 2019 Luo. All rights reserved.
//


//逆序一个三位数
#include <stdio.h>
int main(){
    int i = 0;
    printf("请输入一个三位正整数:");
    scanf("%i",&i);
    while (i>0){
        int t = 0;
        t = i % 10;
        i /=10;
        printf("%d",t);
        if (i<=0){
            printf("\n");
        }
    }
    return 0;
}



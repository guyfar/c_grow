
//
//  caishugame.c
//  c_grow
//
//  Created by gaoxiaofei on 16/4/19.
//  Copyright © 2016年 gaoxiaofei. All rights reserved.
//  猜数游戏：电脑随机生成一个数，用户输入提示大小，直到猜对为止

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,j;
    srand((unsigned)time(NULL));
    i = rand()%100;
    while (1) {
        scanf("%d",&j);
        if(j>i){
            printf("大了，请重新输入!\n");
        }
        if(j<i){
            printf("小了，请重新输入\n");
        }
        if(j==i){
            printf("对了");
            break;
        }
        
    }
    return 0;
}
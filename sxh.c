//
//  sxh.c
//  c_grow
//
//  Created by gaoxiaofei on 16/4/19.
//  Copyright © 2016年 gaoxiaofei. All rights reserved.
//  功能：求100以内的水鲜花数


#include <stdio.h>

int main(){
    int i,j,k;
    for(i=1;i<=9;i++){
        for (j=0; j<=9; j++) {
            for (k=0; k<=9; k++) {
                if(i*100+j*10+k==i*i*i+j*j*j+k*k*k){
                    printf("%d\n",i*100+j*10+k);
                }
            }
        }
    }
    
    return 0;
}
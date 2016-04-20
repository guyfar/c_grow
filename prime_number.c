//
//  zhishu.c
//  c_grow
//
//  Created by gaoxiaofei on 16/4/17.
//  Copyright © 2016年 gaoxiaofei. All rights reserved.
//  功能：求十万以内的所有质数

#include <stdio.h>
int main(){
    long i = 100000;
    long j;
    
    for(j=1;j<=i;j++){
        if(j==1){
            printf("%ld\n",j);
            continue;
        }
        long k;
        for(k=2;k<=j;k++){
            if(k!=j){
                if(j%k==0){
                    break;
                }
            }else{
                printf("%ld\n",j);
                
            }
        }
    }
}

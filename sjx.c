//
//  sjx.c
//  c_grow
//
//  Created by gaoxiaofei on 16/4/19.
//  Copyright © 2016年 gaoxiaofei. All rights reserved.
//  用1～6这6个自然数组成一个三角形，并让这个三角形三条边的值之和相等，如：5+3+4、4+2+6、5+1+6，都等于12。那么现在请你输出所有的可能。

#include <stdio.h>

int main(){
    int a,b,c,d,e,f;
    for (a=1; a<=6; a++) {
        for (b=1; b<=6; b++) {
            for (c=1; c<=6; c++) {
                for (d=1; d<=6; d++) {
                    for (e=1; e<=6; e++) {
                        for (f=1; f<=6; f++) {
                            if (a!=b && a!=c && a!=d && a!=e && a!=f && b!=c && b!=d && b!=e && b!=f && c!=d && c!=e && c!=f && d!=e && d!=f && e!=f) {
                                //printf("gxf");
                                if(a+b+d==a+c+f && a+b+d==d+e+f){
                                    printf("  %d\n",a);
                                    printf(" %d %d\n",b,c);
                                    printf("%d %d %d\n\n\n",d,e,f);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}
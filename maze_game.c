//
//  game.c
//  c_grow
//
//  Created by gaoxiaofei on 16/4/20.
//  Copyright © 2016年 gaoxiaofei. All rights reserved.
// 走迷宫小游戏：利用键盘上的“W”“S”“A”“D”4个按键来控制这个“小球”进行上、下、左、右移动
// 说明：用变量x和y来存储小球的初始位置，用变量p和q来存储迷宫的出口

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "conio.h"



int main()
{
    char a[50][50]={"******************************",
                    "*O         *   **   * *** ****",
                    "* ****** * * *    * * *** ****",
                    "* *   ** *   * **** * ***   **",
                    "*   * **  ***    *  *  ** ****",
                    "***** *     * ***** **    ****",
                    "*   * ***** *   *   * * *    *",
                    "* * *    ** * **** ** * * ****",
                    "* * * **      **      * * ****",
                    "* * * ******* ** ****** *   **",
                    "* *   **   * ** ****** ***   *",
                    "* ****** * *****  *        * *",
                    "*        * *     ***** *** *  ",
                    "* ******** ***** * *** *** * *",
                    "*     * ** ***** ***       ***",
                    "***** * ** *      ******** * *",
                    "*     * ** ** ***        *   *",
                    "* * ***       ****** ******* *",
                    "* *    *** **      *         *",
                    "******************************"
    };
    
    
    int i,x,y,p,q;
    char ch;
    
    x=1; y=1; p=12; q=29;
    for(i=0;i<=29;i++)
        puts(a[i]);
    
    while(x!=p || y!=q)
    {
        ch = getch();
        if(ch=='s')
        {
            if(a[x+1][y]!='*')
            {
                a[x][y]=' ';
                x++;
                a[x][y]='O';
            }
        }
        
        if(ch=='w')
        {
            if(a[x-1][y]!='*')
            {
                a[x][y]=' ';
                x--;
                a[x][y]='O';
            }
        }
        
        if(ch=='a')
        {
            if(a[x][y-1]!='*')
            {
                a[x][y]=' ';
                y--;
                a[x][y]='O';
            }
        }
        
        if(ch=='d')
        {
            if(a[x][y+1]!='*')
            {
                a[x][y]=' ';
                y++;
                a[x][y]='O';
            }
        }
        
        system("clear");
        for(i=0;i<=29;i++)
            puts(a[i]);    }
    
    sleep(1);
    printf("You win!\n");
    return 0;
}
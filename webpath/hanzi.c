/*************************************************************************
    > File Name: hanzi.c
    > Author: YeKai
    > Company: 
    > Created Time: 2022年10月5日 星期三 23时23分49秒
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>



int main(int argc,char *argv[])
{

    union {
        char name[3];
        int xname;
    }un;
    strcpy(un.name,"苦");
    int i;
    for(i = 0; i < 3; i ++){
        printf("%x\n",un.name[i]);
    }
    printf("xname is %x\n",un.xname);
    return 0;
}


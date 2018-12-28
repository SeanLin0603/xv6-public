#include "types.h"
#include "user.h"
#include "stat.h"
#include "fcntl.h"
#include "date.h"
int
main(int argc, char *argv[])
{

        /*if(argc < 3){
                printf(2, "Usage: cp pid priority");
                exit();
        }*/
        printf(2,"this is in taskmgr.c\n");
	 //printf(0,"%c",*argv[0]);
	printf(2,"%d\n",argc);
	printf(2,"%d %d\n",argv[1],argv[2]);
       	//taskmgr();
	cps();
         

        exit();
}

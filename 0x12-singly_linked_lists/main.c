#include<stdlib.h>
#include <stdio.h>
#include "test.h"

int main()     
{
        int choice;
        while(1){
	       	printf("\nMENU\n");
                printf("\n1.Create\n");
                printf("\n2.Display\n");
                printf("\n3.Insert at the beginning\n");
                printf("\n4.Insert at the end\n");
                printf("\n5.Insert at specified position\n");
                printf("\n6.Delete from beginning\n");
                printf("\n7.Delete from the end\n");
                printf("\n8.Delete from specified position\n");
                printf("\n9.Exit\n");
                printf("\n--------------------------------------\n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        case 6:
                                        delete_begin();
                                        break;
                        case 7:
                                        delete_end();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;
                        case 9:
                                        exit(0);
                                        break;
                        default:
                                        printf("\nWrong Choice:\n");
                                        break;
                }
        }
        return 0;
}

#include "STD.h"
#include "SDBAPP.h"


void SDB_APP (){

    uint8 x1;

    while(1){


       printf("\n To add entry, enter 1 \n");
       printf("To get used size in database, enter 2 \n");
       printf("To read student data, enter 3 \n");
       printf("To get the list of all student IDs, enter 4 \n");
       printf("To check is ID is existed, enter 5 \n");
       printf("To delete student data, enter 6 \n");
       printf("To check is database is full, enter 7 \n");
       printf("To exit enter 0 \n");
       scanf("%d",&x1);

       SDB_action (x1);

       if(x1==0)
       {
           break;
       }


    }


    }

    void SDB_action(uint8 choice){

        uint32 x=0;
        uint32 list[10];
        int i=0;

        switch (choice) {

        case 1:

               if (SDB_AddEntry()){
                printf("\n Successfully Added!!! \n \n");
            //   printf("%d", DB[0].Student_year);
               }else{
                   printf("failed to add");
               }


            break;
        case 2:
                x= SDB_GetUsedSize();
                printf("\n the size is %d  \n \n \n",x);
        break;
        case 3:

                printf(" \n enter student id \n");
                scanf("%d",&x);
                   SDB_ReadEntry (x);
             break;
        case 4:

             SDB_GetList (&x, &list);
             printf("the number of IDs is %d \n",x);
             for(i=0;i<x;i++){
                printf("ID %d is %d  \n",i+1,list[i]);
             }


             break;
        case 5:
            printf("enter ID \n");
            scanf("%d",&x);
            if (SDB_IsIdExist (x)){
                printf("\n ID exist \n");

            }else{
            printf("\n ID doesn't exist \n");}

              break;
        case 6:
            printf("\n enter ID of student to delete \n");
            scanf("%d",&x);
            SDB_DeletEntry (x);


             break;
        case 7:

            if(SDB_IsFull ()){
                printf("\n database is full ");


            }else{
            printf("\n database is not full");
            }

              break;
        case 0:

            printf("singing you out....");






               break;
        default:
            printf("wrong entry");
               break;

        }







        }






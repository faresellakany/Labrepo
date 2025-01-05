#include "SDB.h"

#ifndef zl
#define zl

student* DB;

bool SDB_IsFull (){



    if(DB[9].Student_ID!=0){
            return true;
    }else{
        return false;}

}

uint8 SDB_GetUsedSize(){


    int i=0;
    uint8 sum=0;
    for(;i<9;i++){
     if(DB[i].Student_ID!=0){
            sum++;
    }}
    return sum;
}

 bool SDB_AddEntry(){




 int x; //uint8
 int sum = SDB_GetUsedSize();
 int y =sum-1;

 if(sum==10){
    return false;
 }

 if(sum!=10){
    printf("enter ID \n");
    scanf("%d",&x);
    DB[y].Student_ID=x;

    printf("Year \n");
    scanf("%d",&x);
    DB[y].Student_year=x;

    printf("Course1 ID \n");
    scanf("%d",&x);
    DB[y].Course1_ID=x;

    printf("Course1 Grade \n");
    scanf("%d",&x);
    DB[y].Course1_grade=x;
    printf("Course2 ID \n");
    scanf("%d",&x);
    DB[y].Course2_ID=x;
    printf("Course 2 Grade \n");
    scanf("%d",&x);
    DB[y].Course2_grade=x;
    printf("Course3 ID \n");
    scanf("%d",&x);
    DB[y].Course3_ID=x;
    printf("course3 Grade \n");
    scanf("%d",&x);
    DB[y].Course3_grade=x;


    if( DB[y].Student_ID == 0 || DB[y].Student_year==0 ||  DB[y].Course1_ID==0 || DB[y].Course1_grade==0 || DB[y].Course2_ID==0 || DB[y].Course2_grade==0 || DB[y].Course3_ID==0 || DB[y].Course3_grade==0 )
     {
         return false;
     }

     return true;

 }}

  void SDB_DeletEntry (uint32 id){

      int x=0;

      int sum = SDB_GetUsedSize();
      for(int i=0;i<sum;i++){
     if(DB[i].Student_ID==id){
            DB[i].Student_ID=0;
            DB[i].Student_year=0;
            DB[i].Course1_ID=0;
            DB[i].Course1_grade=0;
            DB[i].Course2_ID=0;
            DB[i].Course2_grade=0;
            DB[i].Course3_ID=0;
            DB[i].Course3_grade=0;
             x=1;
            printf("\n ID deleted \n");

                        }}
                        if(x==0){
                            printf("could not find the ID");
                        }

                        }

   bool SDB_ReadEntry (uint32 id){


       int sum = SDB_GetUsedSize();
      for(int i=0;i<sum;i++){
     if(DB[i].Student_ID==id){
            printf("Student ID is %d \n",DB[i].Student_ID);
            printf("Student Year is %d \n",DB[i].Student_year);
            printf("Course 1 ID is %d \n",DB[i].Course1_ID);
            printf("Course 1 Grade is %d \n",DB[i].Course1_grade);
            printf("Course 2 ID is %d \n",DB[i].Course2_ID);
            printf("Course 2 grade is %d \n",DB[i].Course2_grade);
            printf("Course 3 ID is %d \n",DB[i].Course3_ID);
            printf("Course 3 grade is %d \n",DB[i].Course3_grade);
     return true;

   }

      }
      return false;
   }



   void SDB_GetList (uint8 * count, uint32 * list){

        *(count) = SDB_GetUsedSize();
        uint32 x[10];
                for(int i=0;i<*(count);i++){
                        x[i]=DB[i].Student_ID;
         //   (*(list+i)) =DB[i].Student_ID;
   }
   list =x;
   }


   bool SDB_IsIdExist (uint32 id) {

        int sum = SDB_GetUsedSize();
        for(int i=0;i<sum;i++){

           if(DB[i].Student_ID == id){
            return true;
           }

   }
   return false;

   }


void dbfunction(student* db){
 DB =db;

}










#endif // z


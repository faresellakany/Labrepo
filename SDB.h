#include "STD.h"



typedef struct SimpleDb
{
 uint32 Student_ID;
 uint32 Student_year;
 uint32 Course1_ID;
 uint32 Course1_grade;
 uint32 Course2_ID;
 uint32 Course2_grade;
 uint32 Course3_ID;
 uint32 Course3_grade;

} student;





int xyz;


// DB[0]={1,1,1,1,1,1,1,1};

// printf(DB[0].Student_ID);


 bool SDB_IsFull ();
 uint8 SDB_GetUsedSize();
 bool SDB_AddEntry();
 void SDB_DeletEntry (uint32 id);
 bool SDB_ReadEntry (uint32 id);
 void SDB_GetList (uint8 * count, uint32 * list);
 bool SDB_IsIdExist (uint32 id);

    /*
    DB[0].Student_ID=1;
    DB[0].Student_year=2020;
    DB[0].Course1_ID=1;
    DB[0].Course1_grade=1;
    DB[0].Course2_ID=2;
    DB[0].Course2_grade=1;
    DB[0].Course3_ID=3;
    DB[0].Course3_grade=1;

    DB[1].Student_ID=2;
    DB[1].Student_year=2020;
    DB[1].Course1_ID=1;
    DB[1].Course1_grade=1;
    DB[1].Course2_ID=2;
    DB[1].Course2_grade=1;
    DB[1].Course3_ID=3;
    DB[1].Course3_grade=1;

    DB[2].Student_ID=1;
    DB[2].Student_year=2020;
    DB[2].Course1_ID=1;
    DB[2].Course1_grade=1;
    DB[2].Course2_ID=2;
    DB[2].Course2_grade=1;
    DB[2].Course3_ID=3;
    DB[2].Course3_grade=1;
    */



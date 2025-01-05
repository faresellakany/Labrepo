#include <stdio.h>
#include <stdlib.h>
#include "SDBAPP.h"
#include "SDB.h"




int main()
{

   student s1={1,2020,123,100,124,100,125,100};
   student s2={2,0,0,0,0,0,0,0};
   student s3={3,0,0,0,0,0,0,0};
   student s4={4,0,0,0,0,0,0,0};
   student s5={5,0,0,0,0,0,0,0};
   student s6={6,0,0,0,0,0,0,0};
   student s7={7,0,0,0,0,0,0,0};
   student s8={8,0,0,0,0,0,0,0};
   student s9={9,0,0,0,0,0,0,0};
   student s10={10,0,0,0,0,0,0,0};

   student ** database[10]={&s1,&s2,&s3,&s4,&s5,&s6,&s7,&s8,&s9,&s10};

    student** main = database[0];

    dbfunction(main);



 SDB_APP ();


    return 0;
}

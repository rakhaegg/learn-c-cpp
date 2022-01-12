
// Implemetation
#include <stdio.h>
enum week{Mon = 1000 , Tue = 0001 , Wed 
, Thur = 1001 , Fri = 10110 , Sat = 1002 , Sun  = 1111};
enum year {Jan , Feb , Mar , Apr , May , Jun , 
    Jul , Aug , Sept , Oct , Nov , Dec
    };
enum State {WORKING = 0 , FAILED, FREEZED};

enum State currstate= 2;

enum State findstate(){
    return currstate;

}

void another_enum(void);
int main(){

    if (findstate() == WORKING){
        printf("WORKING");
    }else{
        printf("NOT WORKING");
    }

    int i;
    for (i = Mon; i < Sun; i++)
    {
        printf("%d \n" , i);
    }
    printf("-------------------/n");
    another_enum();
    return 0;
}
void another_enum(void){
    int i;
    for(i = Jan ; i <= Dec ; i++ ){
        printf("%d\n " ,i);
    }


}
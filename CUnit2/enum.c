#include<stdio.h>
/*
enum weeks{
    sunday=5,monday,tuesday,wednesday,thursday,firday,sat //all other values get incerment to +1
    //if sunday=5 not mentioned but only sunday ---then by default sunday-=0
};

int main(){
    for (int i=sunday;i<=wednesday;i++){
        printf("the value=%d\n",i);
    }
    return 0;
}

enum weeks{
    sunday=5,monday=8,tuesday=16,wednesday,thursday,firday=3,sat 
    //now wednesday +1 of previous value--which is 17 as tuesday defined bfr =16

};

int main(){
    for (int i=sunday;i<=wednesday;i++){ // as wed=17 loop runs from 5 to 17
        printf("the value=%d\n",i);
    }
    return 0;
}
int main(){
    enum weeks w;
    w=sat;
    printf("w=%d\n",w);

}

enum one {
    red,blue,green
};
int main(){
    enum one{
        red,blue=4,green, // local variable has more power than global variable
    };
    printf("%d",blue);
    return 0;

}
//hw down
enum one {
    red,blue,green
};
enum two{
    green,blue=4,red
};
int main(){
    printf("%d",blue);
    return 0;

}
*/

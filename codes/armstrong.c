// to write all armstrong numbers from 0 to 999

#include<stdio.h>
#include<math.h>
int main(){
    for(int i=0;i<=999;i++){
        int p=0;
        int d=0,s=0;
        int n=i,num=i;
        while(num!=0){
            num/=10;
            p++;
        }
        while(n!=0){
            d=n%10;
            s+=pow(d,p);
            n/=10;
        }
        if (s==i)
            printf("Is Armstrong %d\n",i);
    }
}
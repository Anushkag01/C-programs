#include<stdio.h>

// 
//here on giving contrl c abrupt termination of program.
// int main(){
//        int i=1;
//        while(scanf("%d",&i))//doesnt read input so even if 0 passed scanf output is 1 as succesful execution
//        {
//         printf("i=%d\n",i);
//         i++;
//        }
//        printf("came out of while loop");
//        return 0;
// }

// int main(){
//        int i=0;
//        do{
//               printf("i=%d\n",i);
//               i++;
//        }while(i>0);
//        printf("next set of statements is executes");
//        return 0;
// }

//accept  input from user and generate till n
// int main(){
//        int n;
//        scanf("%d",&n);
//        for (int i=1;n;i++){
//               if (i%2==0){
//                      printf("%d\n",i);
//               }
//               else if (i>=n){
//                      break;
//               }
//               else{
//                      continue;
//               }
              
//        }
// }
//goto--
// int main(){
//        int i;
//        A:printf("came for got0\n");//after this it read next line as statemnet ...wont go back into a codes
//        for (i=0;i<5;i++){//i++ is not executed until whole loop executed
//               if(i==3)
//                      goto A;
//               else
//                      printf("%d\n",i);       
//        }
//        printf("next statement\n");
//        return 0;
// }
// sum of cube of number
int main(){
       int n,sum=0;
       scanf("%d",&n);
       for (int i=1;i<=n;i++){
              sum=sum+(i*i*i);
       }
       printf("Sum =%d",sum);
       return 0;
}
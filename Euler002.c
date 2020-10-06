#include<stdio.h>

int main(void){
        int a,b,sum,result,z;
        b = sum = 1;
        result = 0;
        z = 0;

        while(sum <= 89){
                a = b;
                b = sum;
                result = sum;
                if(sum % 2 ==0)
                        z += result;
                sum = a + b;
        }

        printf("%d\n",z);
        return 0;
}
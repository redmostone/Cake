#include <stdio.h>
int main(int argc,char* argv[]){
    char str[80];
    int len=0;
    scanf("%s",&str);
    asm volatile("cld\n"
                 "mov $0,%%al\n"
                 "lea %1,%%edi\n"
                 "mov $80,%%ecx\n"
                 "repne scasb \n"
                 "lea %1,%%eax\n"
                 "sub %%eax,%%edi\n"
                 "mov %%edi,%0"
                 : "=r" (len)
                 : "m" (str)
                 : "%eax","%edi","%ecx"
    );
    int i = 0;
    i = i + 10;
    int num = 4;
    i = i + num;
    float fo = 1.456;
    fo = fo * 4;
    printf("%d",len);
    getchar();
    getchar();
}





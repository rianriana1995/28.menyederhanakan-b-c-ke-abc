#include <stdio.h>

void pecahan();
void main (){
        pecahan();}
        void pecahan(){
        int a,b,l,t;
        printf("program menyederhanakan b/c ke ab/c\n\n");
        printf("masukan pembilangan ;\n");
        scanf("%d",&a);
        printf("masukan penyebut :\n");
        scanf("%d,&b");

        t=a/b;
        l=a%b;
        if(a%b==0)
            printf("bilangan (%d/%d)\ndisederhanakan menjadi %d",a,b,t);
        else if (a%b !=0)
            printf("bilangan (%d/%d)\ndisederhanakan menjadi (%d %d %d)",a,b,t,l,b);
}

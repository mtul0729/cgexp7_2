#include <stdio.h>
_Bool isSub(char *ps,char *pt,unsigned int len_t){
    for (int i = 0; i < len_t; ++i) {
        if(*pt--!=*ps--)return 0;
    }
    return 1;
}
int main() {
    char s[100],t[100];
    scanf("%s",s);
    scanf("%s",t);
    unsigned int len_s=0,len_t=0;
    while (s[len_s]!=0)len_s++;
    while (t[len_t]!=0)len_t++;
    char * ps=&s[len_s-1],* pt=&t[len_t-1];
    char * eop=ps;
    for(;ps>s-len_t;ps--){
        if(isSub(ps,pt,len_t))printf("%lu",len_s-(eop-ps)/sizeof(eop));
    }
    return 0;
}

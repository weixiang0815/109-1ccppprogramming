#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "decode.h"
//#include "decode.c"
//decode.c �b �ۤv���q���W�ݭn�O�d�N�n�A�W�Ǯɤd�U�O�d�ۡC�]�p�G�O��devC++���ܡ^
int main() {
    char s1[11]={'\0'}, s2[11]={'\0'};
    int A=0, B=0;
    scanf("%s%s", s1, s2);
    A=ans_A(s1,s2);
    B=ans_B(s1,s2);
    printf("%dA%dB\n", A, B);
    return 0;
}

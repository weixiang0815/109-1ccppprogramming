#include <stdio.h>
#include <stdlib.h>
 
#include "survey.h"
//#include "survey.c"
//survey.c �b �ۤv���q���W�ݭn�O�d�N�n�A�W�Ǯɤd�U�O�d�ۡC�]�p�G�O��devC++���ܡ^
int main() {
    char s[128]={0};
    scanf("%s", s);
    //��J�ɦW�Z�ǵ�survey.c
    print_avg(s);
    return 0;
}

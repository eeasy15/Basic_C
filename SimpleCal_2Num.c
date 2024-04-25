#include <stdio.h>

int main()
{
    int a=0,b=0;
    printf("Nhap so thu nhat:\n");
    scanf("%d",&a);
    printf("Nhap so thu hai:\n");
    scanf("%d",&b);
    printf("Tong hai so la: %d \n",a+b);
    if(a>b)
        printf("Hieu giua so lon va nho:\n %d - %d = %d",a,b,a-b);
    else if(a<b)
        printf("Hieu giua so lon va nho:\n %d - %d = %d",b,a,b-a);
        
    if(a>b)
        printf("\nChia lay nguyen giua so lon va nho:\n %d/%d = %d du %d",a,b,a/b,a%b);
    else if(a<b)
        printf("\nChia lay nguyen giua so lon va nho:\n %d/%d = %d du %d",b,a,b/a,b%a);
    return 0;
}

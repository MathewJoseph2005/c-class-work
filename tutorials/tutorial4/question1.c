// C Program to Add Two Complex Numbers
#include <stdio.h>

int get_number_real(){
    int real;
    printf("Enter the real part:");
    scanf("%d",&real);
    return real;
}
int get_number_img(){
    int img;
    printf("Enter the img part without i:");
    scanf("%d",&img);
    return img;
}
int main(){
    int real,img,real2,img2;
    real = get_number_real();
    img = get_number_img();
    real2 = get_number_real();
    img2 = get_number_img();
    printf("the answer is %d + %di\n",real+real2,img+img2);
}
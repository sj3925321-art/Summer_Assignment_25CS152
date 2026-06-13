# include<stdio.h>
int sum(int aditi,int palak);
int main() {
    int aditi,palak;
    printf("Enter the first number aditi:");
    scanf("%d", &aditi);
    printf("Enter the second number palak:");
    scanf("%d",&palak);
    int k = sum(aditi,palak);
    printf("%d\n",k);
    return 0;
}

int sum(int aditi,int palak) {
    return aditi+palak;
}

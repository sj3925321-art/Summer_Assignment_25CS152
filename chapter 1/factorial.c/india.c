# include<stdio.h>
// function declaration
void printnamaste();
void printbonjour();
int main() {
    // function call
    char a;
    printf("enter f for french & i for indian:");
    scanf("%c",&a);

    if(a=='f') {
        printbonjour();
    }
    else if(a=='i') {
        printnamaste();
    }
    return 0;
}
// function definition
void printnamaste() {
    printf("Namaste\n");
}
void printbonjour() {
    printf("Bonjour\n");
}
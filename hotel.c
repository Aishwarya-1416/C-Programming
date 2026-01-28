#include <stdio.h>
int main(){
    int room;
    char season;
    scanf("%d %c",&room,&season);

    switch(room){
        case 1:
            if(season=='A') printf("₹2500");
            else if(season=='B') printf("₹2000");
            else printf("Invalid Season");
            break;

        case 2:
            if(season=='C') printf("₹4000");
            else if(season=='D') printf("₹3000");
            else printf("Invalid Season");
            break;

        default:
            printf("Invalid Room Type");
    }
}
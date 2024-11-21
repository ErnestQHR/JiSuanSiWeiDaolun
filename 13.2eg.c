//
// Created by 仇皓然 on 24-11-19.
//

#include <stdio.h>
struct pocker {
       char value;
       char suit[7];
};

int main(){
    struct pocker card= {'k',"红桃"};
    printf("%c\n",card.value);
    printf("%s\n",card.suit);
    return 0;
    }
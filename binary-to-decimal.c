#include <stdio.h>

int numLength(int num){
    int count = 0;
    while(num != 0){
        num /= 10;
        count++;
    }
    return count;
}

int isBinary(int bin){
    while(bin != 0){
        if(bin % 10 > 1) return 0;
        bin = (int) bin / 10;
    }
    return 1;
}

int power(int x, int y){
    int pow = 1;
    for(int i = 0; i < y; i++){
        pow *= x;
    }
    return pow;
}

int binaryToDecimal(int bin){
    int binLength = numLength(bin);
    int decimal = 0;
    if(isBinary(bin)){
        for(int i = binLength - 1; i >= 0; i--){
            decimal += ((int) (bin % 10)) * power(2, binLength - 1 - i);
            bin /= 10;
        }
        return decimal;
    } else {
        return -1;
    }
}



int main(){
    int bin;
    printf("***Binary to Decimal Converter***\n\n");
    while(bin != -1){
        printf("Enter a binary number to convert it to decimal or type -1 to quit: ");
    scanf("%d", &bin);
    if(binaryToDecimal(bin) > -1){
       printf("%d in Decimal is: %d\n\n", bin, binaryToDecimal(bin));
    } else {
        printf("Please enter a valid binary number.\n\n");
    }
    }

    return 0;
}

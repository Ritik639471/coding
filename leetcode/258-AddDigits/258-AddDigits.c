// Last updated: 4/13/2026, 3:37:36 PM
int addDigits(int num) {
    while(num/10){
       num=num/10+num%10;
    }
    return num;
}
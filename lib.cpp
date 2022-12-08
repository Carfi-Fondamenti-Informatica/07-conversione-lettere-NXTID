bool conversione(char &a) {
    int b = 0;
    
    if (a >= 97 && a <= 122 or a >= 65 && a <= 90){
        if (a >= 97 && a <= 122) {
            b = a;
            b=b-97;
            a = 65 + b;
        } else if (a >= 65 && a <= 90) {
            b = a;
            b=b-65;
            a = 97 + b;
        }
    return true;
    }else
        return false;
}

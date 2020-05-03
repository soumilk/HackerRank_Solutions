int set_bits(long long int n){
    int i=0;
    while(n>0){
        i++;
        n=n& (n-1);
    }
    return i;
}
// Complete the counterGame function below.
string counterGame(long n) {

    int num_of_1= set_bits(n-1);
    if(num_of_1 & 1) return "Louise";
    return "Richard";
}

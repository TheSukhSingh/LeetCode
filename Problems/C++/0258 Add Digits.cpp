class Solution {
public:
    // int sum(int n){
    //     int temp = 0;
    //     while(n != 0){
    //         temp += n % 10;
    //         n/= 10;
    //     }
    //     return temp;
    // }
    // int addDigits(int num) {
    //     if(num < 1) return 0;
    //     while(num > 9){
    //         num = sum(num);
    //     }
    //     return num;
    // }

    int addDigits(int num) {
      int sum=0;
        while(num)
        {
            sum+=(num%10);
            num/=10;
        }
        if(sum<10)
            return sum;
        else
            return addDigits(sum);
    }
};
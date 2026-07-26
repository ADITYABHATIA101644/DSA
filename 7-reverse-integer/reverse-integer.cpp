class Solution {
public:
    int reverse(int x) {
        int n=x;
        int count=0;
        while(n!=0){
            n=n/10;
            count++;
        }
        int temp=count-1;
        long long rev_x=0;
        for(int i=0;i<count;i++){
            int dig=x%10;
            x=x/10;
            rev_x=rev_x+(dig*(pow(10,temp)));
            temp--;
        }
        if(rev_x<pow(-2,31) || rev_x>(pow(2,31)-1)){
            return 0;
        }
        else{
            return rev_x;
        }
    }
};
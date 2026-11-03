class Solution {
public:
    int tribonacci(int n) {
     if(n==0)
     {
        return 0;
     }   
     else if(n==1 || n==2)
     {
        return 1;
     }
     else
     {
       long  int ft=0;
        long int st=1;
       long int tt=1;
        for(int i=1; i<=n;i++){
long int fourthTerm=ft+st+tt;
ft=st;
st=tt;
tt=fourthTerm;
        }
         return ft;
     }

    }
};
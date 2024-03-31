public  class stair_case_problem{
    public int climb(int n){
        if(n<=1){
            return 1;
        }
    
    int prev1  = 1;
    int prev2 = 1;
    int current =0;
    for(int i=2;i<=n;i++){
        current = prev1+prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return current;
}


public static void main(String[] args){
    int n=10;
    stair_case_problem str = new stair_case_problem();
    str.climb(n);
    
}
}
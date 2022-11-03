char * getPermutation(int n, int k){
    int * fact = malloc(sizeof(int) * (n+1));
    bool * avail = malloc(sizeof(bool) * n);
    
    fact[0] = 1;
    for(int i = 1; i <= n; i++){
        fact[i] = i * fact[i-1];
        avail[i-1] = true; 
    }
    
    k--;
    int * xpos = malloc((sizeof(int)) * n);
    for(int i = n; i > 0; i--){
        xpos[n-i] = (k % fact[i]) / fact[i-1];
    }
    
    char * output = malloc(sizeof(char) * (n+1));
    output[n] = '\0';
    
    for(int i = 0; i < n; i++){
        int c = 0;
        while(!avail[c] || xpos[i]--){
            c++;
        }
        avail[c] = false;
        output[i] = c + 49;
    }
    return output;
}
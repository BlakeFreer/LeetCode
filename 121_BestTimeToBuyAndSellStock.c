// Author: Blake Freer
// Date Created: November 2, 2022

int maxProfit(int* prices, int pricesSize){
    int maxP = 0;
    int activeMin = prices[0];
    for(int i = 1; i < pricesSize; i++){
        if(prices[i] < activeMin) {
            activeMin = prices[i];
            continue;
        }
        if(prices[i] - activeMin > maxP){
            maxP = prices[i] - activeMin;
        }
    }
    return maxP;
}
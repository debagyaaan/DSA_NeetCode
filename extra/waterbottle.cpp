int numWaterBottles(int numBottles, int numExchange) {
    int drink = numBottles;
    while(numExchange <= numBottles) {
        int onemul = numBottles/numExchange;
        int onemod = numBottles%numExchange;
        drink = drink + onemul;
        numBottles = onemul+onemod;
    }
    return drink;
}
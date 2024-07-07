import pdb
class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        starting_allot = numBottles

        consumed = numBottles

        exchange = int(str(numBottles / numExchange).split('.')[0])

        consumed += exchange

        left_over = numExchange % consumed
        while left_over >= numExchange:
            consumed += int(str(left_over / numExchange).split('.')[0])
            left_over = numExchange % left_over

        print(consumed)



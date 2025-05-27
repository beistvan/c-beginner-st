#include <assert.h>

struct Card {
    char rank;
    char suit;
};

int check(struct Card *hand) {
    while (hand->rank != 0) {
        if (hand->rank == 'Q' && hand->suit == 's') {
            return 1;
        }
        hand++;
    }
    return 0;
}

int main()
{
    struct Card hand1 [] = {{'Q', 's'}, {'A','h'}, {'9', 'd'}, {0, 0}};
    struct Card hand2 [] = {{'2', 's'}, {'A','h'}, {0, 0}};
    assert(1 == check(hand1));
    assert(0 == check(hand2));

    return 0;
}

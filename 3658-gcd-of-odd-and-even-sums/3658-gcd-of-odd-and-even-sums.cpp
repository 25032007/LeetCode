class Solution {
public:
    int gcdOfOddEvenSums(int n) {
//         eg : n = 4
//         sumOdd = 1, 3, 5, 7 = 16 => 4 ^ 2
//         sumEven = 2, 4, 6, 8 = 20 => 4 * (4 + 1)

//         sumOdd = n ^ 2
//         sumEven = n * (n + 1)

//         gcd(n *n , n* (n + 1))
//         n * gcd(n, n + 1)
//         Ab koi bhi do lagatar numbers (consecutive integers) jaise 4 aur 5, ya 9 aur 10 lijiye,
    //    unka GCD hamesha 1 hota hai kyunki unke beech kuch bhi common nahi hota.
//         Toh GCD(n, n + 1) = 1 ho gaya.

// n * 1 = 1

    return n;

    }
};
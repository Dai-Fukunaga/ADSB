#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vll> mat;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<bool> vb;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;

template <class T1, class T2>
istream &operator>>(istream &is, pair<T1, T2> &p) {
    return is >> p.first >> p.second;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template <class T>
istream &operator>>(istream &is, vector<T> &v) {
    for (auto &i : v) {
        is >> i;
    }
    return is;
}

template <class T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    for (auto &i : v) {
        os << i << " ";
    }
    return os;
}

#define pb push_back
#define pob pop_back
#define emb emplace_back
#define mp make_pair
#define fi first
#define se second
#define endl '\n'
#define sz(c) int(c.size())

#define all(c) begin(c), end(c)
#define rall(c) rbegin(c), rend(c)
#define rep(i, s, e) for (int i = (s); i < (e); i++)
#define repd(i, s, e) for (int i = s - 1; i >= (e); i--)
#define fore(i, c) for (auto &i : (c))

#define umin(a, b) (a) = min((a), (b))
#define umax(a, b) (a) = max((a), (b))
#define chmin(a, b) (((a) = min((a), (b))) == b)
#define chmax(a, b) (((a) = max((a), (b))) == b)

const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int main(void) {
    string s =
        "0011100000001111010110100111011010000110010101001011111111111000110101"
        "0011001111100110110110111100100000100110101011111000110111000110010100"
        "1001101000011010011011010110100111000111111010110100100011011011110111"
        "0111101001110001111110000001001001001100010001000000101101100101000011"
        "0111111001001101100010101001110010001101010101101110010011011000010101"
        "1001001000001001011010100101110011110101001101001100110010000101000101"
        "0010111110011001101111101011011110111111010111111000000100111001111110"
        "0000101101011000110011000101011101111101110011010000111010110010111110"
        "1001011011001110000101011011111011110100010011000101110101111011000010"
        "0011101001001001011000011110111011101110110101111001011110000111111110"
        "0000111110000010011100110110010001111100101011011000110110101010001010"
        "0001110001010001001110111001111001011101000101000000011011001110011000"
        "1111111001101011100111101010100110001000011101111001101001100101011110"
        "0101000011010001000010001111110001001010110110101011011000001010010111"
        "1000111000111100100000101100000100101000101000001111101101111010100111"
        "0111000010111011001010111000011100110110001000100000110110001101111111"
        "0101000001111111110011010110010100010010101000111011010110001000010001"
        "1001011010101110000011110110110111111111110011011101110010001001010111"
        "0111001001001011010011110101010010101010100001100111000001101001000100"
        "1000001100001001100001101011101011111000111111000000001111000111011100"
        "1111011111010001101100011111111101000011000111000101010010101011101011"
        "0000110000001001000000010001110111000101011010100000110100000011111101"
        "1011000010101010000000100010010010111000001011011000001110001000111011"
        "1011011101010011101000010001100010011110111100001100001100100110000101"
        "0110100100100000101001001110010101011100010001111001111010110101010011"
        "1010110010111100010111010011011100000111010000010101111010100110001111"
        "0100000111100110000110010110100001010110100010100011011111111101011101"
        "1000110101010001101111100000101000000011110001110001100010101101101111"
        "0111111110101011111111011010011011101000011001010100101010000100011100"
        "1110011101011001100000000011011111000001100011100101001110100110010000"
        "1001110000010011100000011110001011010001011111000000001011010101000000"
        "0101100100000101001110001011110000110101110000101011111101101000101111"
        "0010010100110011111011101010010011111101100000001111111001011101011011"
        "1001100000110010101110010111001101110000011011011111011010010001100000"
        "1101001100100011000100000100001000101001100011111111100100100100101100"
        "0101001011010000100110001010111011011001111011100000010111011011000110"
        "1110010101001000100111011111000110011010101000100011001010101000011010"
        "0101100111010001110011001011100000110111101010110001010000000100000110"
        "0011000001011011101011001000001011011000100111001111101011100100010000"
        "0110011100001001000111111111101110000011001010111011100011111111110100"
        "1100101000000001000111011101101001110000100001110000100111110111010010"
        "0011010010011011010011101001001001011001110010101011000110100000100000"
        "0011111100011011101010110110101010001111111111101000100010000011010000"
        "0010111100000101111111101000000101001111100110101111000001111111011011"
        "1000011101011111111100010001100100110011101011101001010101001000000011"
        "0110010101001111100010010011000110100100110011010001111011000101011110"
        "0011100000111101111001000101100110111001010011001101010000101000111011"
        "1001110000011011100100100011001100100010100111011111111011110100010100"
        "0100101001110011001110101000110111100110111000111011011101001100111111"
        "0110101111000110100001110110001000111100000001001101000011000010111110"
        "1001110010111100111011101000111010100000001011100001000010111101010001"
        "1111110100000010100000100001111000110011010010100001101101001010101110"
        "1011110101001000000100100000010011101010101110001010010111011101100110"
        "1111001100100011111100100011101110100110100110101000001011100101111011"
        "0101100111101101001011110100000111010001001000000011001100011001011100"
        "0101110010010101110110111100010011000110100110101101111100001100001000"
        "0010010100110010111001110010101010011000111100111100101001101111001101"
        "0110001000101101011011110110011101110100110100010110101110001110111010"
        "1010011000100110110111111110110001000011000010110000101011110110000110"
        "1101011000010010110011001001010010100110100101000111011110000101101001"
        "1010001110111010011001111111001011000110111100111011010000011101110001"
        "1001101011111111110001000101001000011100000110011001001010110101111100"
        "0010000111100110100010100010010110100000010011001101011110001100111101"
        "0011111010001110101011100100010110101100010000001111101111100100001000"
        "0011000001100101111111101001110111011010001011110101011100011010010110"
        "0101110110111101110111110011100001001011111100110101001010101110010010"
        "1111011101101001111101100001100011100100001110010010011101011110010111"
        "1001110011001010010100101101111101010111001110111101000001100101111001"
        "1111110111110011011100101100010111011110001001011010011111010001011010"
        "1110100000011110001010010111111111100101000101011101000001110010010000"
        "0001001101000110101101011010110001111001010111011100100100110100001010"
        "0101101111101010010111111100101000000100011010100010101000010001001111"
        "1100000101110100010111000001101001010111110111100101001010111010110010"
        "1010111110001111000010101001101010001001010010101100111110111001101111"
        "1001010010001001011001001111001000001011001111101011000001001111101010"
        "0011000010000011110110101001010011001000001000110000101010011111110111"
        "1111010001110001000011100101011110111101001100110101000100101100001010"
        "1100101110101110001100110010011111001011011101000011000101011000111100"
        "0010010110011101100101101110011110000001101100010010001110000110011001"
        "0001011010111010010001111000110010110100110110101000010111010000100100"
        "0100100010001000110001111000001100100001111001111000111110110000100101"
        "0011000111011010110000100110110000101000101010100001101000011100010010"
        "0010111101010010011010000011110100100110001101001111001111010110010100"
        "0100100010111100000110110110111010111010100111111001111111110011101110"
        "0010011010010000101001101010001111010001011011001100000100101000101010"
        "0101110101000010001101010000111111111110111100010101111100110010100100"
        "1110100000111011011011110011110100101101000000111110011010001011001000"
        "0001101101101101111110100111100010111111101001010010101111001000111110"
        "0001000000011111111101011110100101111110001001010100001011010011100011"
        "0001100000001001001000011010110010100011000011011101001000000011110101"
        "1100110001010110001111011101111111110100010110100111110010110000100010"
        "0000101101011011111010010100110000110001111100011000010100111101110001"
        "0001101000010011101111010011100000011110101110110011100000111100010010"
        "0111001111111010000000010111111111101110010010100001010110101010001001"
        "0001100101101100001101100011101011101000100110101100010101101001001101"
        "0100100011111111010100100000010001011000000010110010000101111101100010"
        "1101011011111010100001010101110010110100001110011001011101101010110100"
        "1110101001110110000011101010011010010110000011010011001010100100001111"
        "1000011010101110000011001011010011111100101100101011111000001111110101"
        "0101110101111010101100001011001000101001100111010011001001000101011010"
        "0110100001000110011110000100001111000101011001000100100110111100000000"
        "1100101111101111011111000000000110100101101000100000010001011010100001"
        "1011011000011110111000000111011101110010000101100001010100011001101100"
        "0010111001111111011110100101010000100111111100010010011011000010100100"
        "1000011011010101011000001101101011111110100111010000100011110111001101"
        "1101110110010010111011101010110110101001001101010000000100010011101111"
        "0110100100110010011101001101110011000001011001010011110111111011101100"
        "0011010001110001111100001100110110011111010000101011000111100000101011"
        "0111000000100111100011110000010000110000001110010000111000101011110110"
        "1110100111101111111110001111011101100100100100101110001101010101010000"
        "0011010011101000101000101000110110101100010011101111111100110000111000"
        "0000111110011101101100110011001111000101111001011000110000010011100111"
        "1100110010000000111000000101010000000101011101000110011010011111000000"
        "1111100100000010001100011011110001101100001100010110101001100111010010"
        "0011110011110100000110000110111011100100010000000101101111011011100100"
        "0010110000001001000111101001000010001011100100111100101101101100000011"
        "0011100101001100100111011000010000110101001100000101000011110011001010"
        "1010100011100100000011011110011000000010011011110010000011000101100011"
        "0111011111000011011101111011111001001001100101101011101010100101011110"
        "0000010101111000100101100101110001101000101001101111100011000000000000"
        "0100011100111111110110101111100100110101011001010001001010000001010011"
        "1010111000010110110101100011100000010001111000010011001110001011101100"
        "0111010000001000111001010101110010000001111110101100010101011000100000"
        "0110000100111101000011110101000111011101011100110010000111111011010010"
        "0001101111001001101000001111100010001000110000110100001101100111101100"
        "0110111100111111000011100001000100100111100001101001110000011111010000"
        "1100101011100110001111001110110110111010111010101110101000101010111111"
        "1000100110000111110001100000111001011100010100110111110101010100001110"
        "0011111101110001110011101000000110010011111101101001000100000110010111"
        "0101001110100000000001011101101110110011101010101100101100111100001001"
        "1111110001000110111111111000010101100000001010110011100100101001101101"
        "0100010000110100111000110000000000100111011110100110111001111110010111"
        "0010000111000101010000100010100000101011011100011010101110001000101011"
        "0100010101101000101101101011111101100000011000100001110101101011101111"
        "1001011011111011011100100110111111100100111000100011011110110111111100"
        "1100011110111010100001010111011100111011100100010001001000111011101110"
        "1000111010100111000110101000110010001111000000011110001011000100001111"
        "0100010001101111000111101110011110111101001010000111010001001101010111"
        "0101111011100111010101000110110010001000010001010100110000001111010110"
        "0101011011010100001010100110001010001010000010101100011001011101100010"
        "1000011001100000011001100101111000011100110000100000111101101011011111"
        "0011100111010001100000101100001100100100101011110011000000010110100010"
        "111001101000111100101111101101010000000110101110011011111001";
    vi a, v;
    for (char c : s) {
        a.push_back(c - '0');
    }
    s = "0011100000001111010110100111011010000110011001001011111111111000110101"
        "0011001111100110110110111101100000100110101011111000110111000110010100"
        "1001101000011010011011010110100111000111111010110100100011011011110111"
        "0111101001110001111110000001001001001100010001000000101101100101000011"
        "0111111001001101100010101001110010001101010101101110010011011000010101"
        "1001001000001011011010100101110011110101000111001100110010000101000101"
        "0010111010011001101111101011011110111111010111111000000100111001111110"
        "0000101101011000110011000101011101111101110011010000111010110010111110"
        "1001011011001110000101011011111011110100010011000101110101111011000010"
        "0011101001001001011000001110111011101110110101111001011100000111111110"
        "0000111110000010011100110110010001111100101011011000110110101010001010"
        "0001110001010001001110111001111001011101000101000000011011001110011000"
        "1111111001101010100111101010100110001000011101111001101001100101011110"
        "0101000011010001000010001111110001001010110110101011011000001010010111"
        "1000111000111100100000101100000100101000101000001111101101111010100111"
        "0111000010011011001000111000011100110110001000100000110110001101111111"
        "0101000011111111110011010110010100010010101000111011010110001000010001"
        "1001011010101110000011110110110111111111111011111101110011001001010111"
        "0111001001001011010011110101010010101010100001100111001001101001000100"
        "1000001100001001100001101111101011111000111111000000001111000111011100"
        "1111011111010001101100011111111101000011000111000101010010101011101011"
        "0000110000001001000000010001110111000101011010100000110100000011111101"
        "1011000010101010000000100010010010111000001011011000001110001000111010"
        "1011011101010011101000010001100010011110111000001100001100100010001101"
        "0110100100100000101001001110010101011100010001111001111010110101010011"
        "1010110010111100010111010011011100000111010000010101111010100110000111"
        "0100000111100110000110010110100001010110100010100011011111111101011101"
        "1000110101010001101111100000101000000011110001110001100010101101101101"
        "0111111110101010111111011010011011101000011001010100101010000100011100"
        "1110011101011001100000000011011111000001100011100101001110100110010000"
        "1001110000010011100000011110001011010001011111000010001011010101000000"
        "0101100100000101001110001011110000110101110000101011111101101000101111"
        "0010010100110011111011101010010011111101100000001111111001011101011011"
        "1001100000110000101110010111001101110000011011011111011010010001100000"
        "1101001100100011000100000100101000101001100011111111100100100100101100"
        "0101001011010000100110001010111001011001111011100000010111011011000110"
        "1110010101001000100111011111000110011010101000100011001010101000011010"
        "0101100111010001110011001011100000110111101010110001011000000100000110"
        "0011000001011001101011001000001011011000100111001111101011100100010000"
        "0110011100001001000111110111101110000011001010111011100011111111110100"
        "1100101000000001000111011111101001110000100001110000100111110111010010"
        "0011010010011011010011101001001001011001110010101011000110100000100000"
        "0011111100011011101010110110101010001111111111101000100010000011010000"
        "0010111100000101111111101000000101001111100110101111000001111111011011"
        "1000011101011111111100010001100100110011101011101001010101001000000011"
        "0110010101001111100010010011000110100100110011010001111011000101011110"
        "0011100000111101111001000101100110111001010011001101010000101000111011"
        "1001110000011011111100100011001100100010100111011111111011110100010100"
        "0100101001110011001111101000110111100110111000111011011101001100111111"
        "0110101111000110100001110110001000101100000001001101000011000010111110"
        "1001110010111100111011101000111010100000001011100001000010111101010001"
        "1111110100000010100000100001111000110011010010100001101101001010101110"
        "1011110101001000000100100000010011101010001110001010010111001101100110"
        "1111001100100011111100100111101110100110100110101000001011100101111011"
        "0101100111101101001011110100000111010000001000000011001100011001011100"
        "0101110010010101110110111100010011000100100110101101111100001100001000"
        "0010010100110010111001110010101010011000111100111100101001101111001101"
        "0110001000101101011011110110011101110100110100010110001110001110110010"
        "1010011000100110110111111110110001000011000010110000100011110110000110"
        "1101011000010010110011001001010010100110100101000111011110000101101001"
        "1010001110111010011001111111001011000110111100111011110000011101110001"
        "1001101011111111110001000101001000011100000110011001001010110101111100"
        "0010000111100110100010100010010110100000010011001101011110001100111101"
        "0011111010001110101011100100000110101000010000001111101111100100001000"
        "0011000101100101111111101001110111011010001011110101011100011010010110"
        "0101110110111101110111110011100001001011111100110101001010101110010010"
        "1111011101101001111101100001100011100100001110010011011101011110000111"
        "1001110011001010010100101101111101010111001110111101000001101101111001"
        "1111110101110011011100101100010111011110001001011010011111010001011010"
        "0110100000011110001010010111111111100101000101011101000001110010010000"
        "0001001101001110101101011010110001111001010111011100101100110100001010"
        "0101101111101010010111111100101000000100011010110010101000010001001111"
        "1100000101110100010111000001101001010111110111100101001010111010110000"
        "0010111110001111000010101001100010001001010010101100111110111001101111"
        "1001010010001001010001001111001000001011001111101011000001001111101010"
        "0011000010000011110110101001010011001000001000110000101010011111110111"
        "1111010001110001000011100101011110111101001100110101000100101100001010"
        "1100101110101110001100110010011111001011011101000011000101011000111100"
        "0010010110011101100101101100011110000001101100010010001110000110011001"
        "0001011010011010010001101000110010110100110110101000010111010000100100"
        "0100100010001000110001111000001100100001111001111000111110110000100101"
        "0011000111011010110000100110110000101000101010100001101000011100010010"
        "0010111101010010011010000011110100100110001101001111001111010110010100"
        "0100100010111100000110110110111010111010100111111001111011110011101110"
        "0010011010010000101001101010001111010001011011001100000100101000101010"
        "0101110101000010001101010000111111011110111100010101111100110010110100"
        "1110100000111011011010110011110100101101000000111110011010001011001000"
        "0001101101101101111110100111100010111111101001010010101111001000111110"
        "0001000000011111111101011110100101111110001000010100001011010011100011"
        "0001100000001001001000011010110000100011000011011101001000000011110101"
        "1100110001010110001111011101111111110100010110100111110010110000100010"
        "0000101101011011111010010100110000110001111100011000110100111101110001"
        "0001101000010011101111010011100000011110101110110011100000111100010110"
        "0111001111111011000000010111110111101110010010100001010110101010001011"
        "0001100101101100001101100011101011101000100110101100010101101001001101"
        "0100100011111111010100100000010001011000000010111010000101111101100010"
        "1101011011111010100001010101110010110100001110011001011101111010110100"
        "1110101001110110000010101010011010010110000011010011001010100100001111"
        "1000011010101110000011001011010011111100101100101011111000001111110101"
        "0101110101111010101100001011001000101001100111010011001001000101011011"
        "0110100001000110011110000100001111000101011001000100100110111100000000"
        "0100101111101111011111000000000110100101101000100000010001011010100001"
        "1011011000011110111000001111001101110010000101100001010100011001101100"
        "0010111001111111011110100101010000100111111100010010011011000010100100"
        "1000011011010101011000001101101011111110100111010000100011110111001101"
        "1101110110010010111011101010110110101001001101010000000100010011101111"
        "0110100100110010011101001101110011000001011001010011110111111011101100"
        "0011010001110001111100001100110110011111010000101011000111100000101011"
        "0111000000100111100111111000010000110000011110010000111000101011110110"
        "1110110111101111111110001111011101100100100100101110001101010101010000"
        "0011010011101000101000101000110110101100010011001111111100110000111000"
        "0000111110011101101100110010001111000101111001011000110000010011100111"
        "1100110010000000111000000101010000000101011101000110011010011111000000"
        "1111100100000010001100011011110001101100001100010110101001100111010010"
        "0011110011110101000110000110111011100100010000010101101111011011100100"
        "0010110000001001000111101001000010001011100100111100101101101100000011"
        "0011100101001100100111011000010000110101001100000101000011110011001010"
        "1010100011100100000011011110011000000010011011110010000011001101100011"
        "0111011111000011011101111011111001001001100101101011101010100101011110"
        "0000010101111000100001100101110001101000101001101111100011000000000000"
        "0100011100111111110110101111100100110101011001010001001010000001010011"
        "1010111000010110110011100011100000010101111000010011001110001011101100"
        "0111010000001000111001010101110010000001111110101100010101011000100000"
        "0110000100111101000011110101000111011101011100110010000111111011010010"
        "0001101111001001101000101111100010001000110000110100000101100111101100"
        "0110111100111111000011100001000100100111100001101001110000011111010000"
        "1100101011100110001111001110110110111010111010101100001000101010111111"
        "1000100110000111110001100000111011011100010100110111110101010100001110"
        "1011111101110001110011101010000110010011111101101001000100000110010111"
        "0101001110100000000001011101101110110011101010101100101100111100001001"
        "1111110001000110111111011000010101100000001010110011100100101001101101"
        "0100010000110100111000110000000000100111011100100110111001111110010111"
        "0010000111000101010000100010100010101011011100011010101110001000101011"
        "0100010101101000101101101010111101100000011000100001110101101011101111"
        "1001011011111011011100100111111111100100111000100011011110110111111100"
        "1100001110111010100001010111011100111011100100011001001000111011101110"
        "1000111010100111000110101000110010001111000000011110101011000100001111"
        "0100010001101111000111101110011110111101001010000111010001001101010111"
        "0101111011100111010101000110110010001000010001010100110000001111010110"
        "0101011011010100001010100110001010001010000010101100011001011101100010"
        "1000011001100000011001100101111000011100110000100000111101101011011111"
        "0011100111010001100000101100001100100100101011110011000000010110100010"
        "111001101000111100101111101101010000000110101110011011111001";
    for (char c : s) {
        v.push_back(c - '0');
    }
    vi b(s.size() + 1);
    rep(i, 0, s.size()) {
        if (v[i] == a[i]) {
            b[i + 1] = b[i] + 1;
        } else {
            b[i + 1] = b[i];
        }
    }
    int left = 1, right = 300;
    int mid;
    while (left < right) {
        mid = (right - left) / 2 + left;
        if (mid > (b[mid] - b[0])) {
            right = mid - 1;
        } else {
            left = mid;
        }
    }
    cout << mid << endl;
    return 0;
}

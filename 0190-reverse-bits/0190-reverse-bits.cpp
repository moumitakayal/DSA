class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int reversed;
        for(int i=0; i< 32; i++)
        {
            reversed <<= 1;
            reversed += n & 1;
            n >>= 1;
        }
        return reversed;
    }
};
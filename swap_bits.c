if( ((num>>p1)&1) ^ ((num>>p2)&1) ) {
num ^= 1<<p1
num ^= 1<<p2
}

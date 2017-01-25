/SWAP ABCD as ADCB
int someInt = 0x12345678;
int newInt = (someInt & 0xFF00FF00) | ((someInt >> 16) & 0x000000FF) | ((someInt << 16) & 0x00FF0000)

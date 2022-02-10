/*
Problem Statement
Ninja is learning the binary representation of the numbers. He wanted to practice the topic, so he picked a question. The problem statement says, two numbers, ‘A’ and ‘B’ are given. Find the number of bits of ‘B’ that should be flipped to convert it into ‘A’.Can you help Ninja to solve this problem?
You are given two integers, ‘A’ and ‘B’.Find the number of bits of ‘B’ that should be flipped to convert it into ‘A’.
*/

int numberOfFlips(int a,int b)
{
    int n = a^b;
    int count = 0;
    while (n > 0)
    {
        count++;
        n &= (n-1);
    }
    return count;
}


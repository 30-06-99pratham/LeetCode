class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1);
        res[0]=0;
        for(int i=1;i<=n;++i){
            res[i]=res[i/2]+i%2;
        }
        return res;
    }
};
/*
ALgorithm-
  1. create a vector of size n+1 because the first element will always store 0
  2.make the first element as 0 because for every n the interval starts with 0 and binary representation of 0 is always 0
  3. run a loop from 0 to n
  4. since the number of ones in binary representation of a number is same as the number of ones in binary representaion of its double number and vice versa.
  5. and if a number is odd then we need to add an extra 1 
  6 so for every elemnt we store the number of ones we got in the binary representaion of its half + 1(if the element is odd) or 0(if the element is even).
  7. then we will return the vector.
  /*

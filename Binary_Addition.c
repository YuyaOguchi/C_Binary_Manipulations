//  Yuya oguchi
//  COEN20L Lab5
//  10/22/2015
//  Add Binary

void AddBinary(int a[8], int b[8], int c[8])
	{
    int i = 0;
    int carry = 0; //keeps track of carry
    for (i = 0; i < 8; i ++){
        if ((a[i] + b[i] + carry) <= 1){ // if there is no carry
            c[i] = a[i] + b[i] + carry;
            carry = 0;
        } else if ((a[i] + b[i] + carry) == 2){ // carry and sum is 0
            c[i] = 0;
            carry = 1;
        } else if ((a[i] + b[i] + carry) == 3){ // carry and sum is 1
            c[i] = 1;
            carry = 1;
        }
    }

	}

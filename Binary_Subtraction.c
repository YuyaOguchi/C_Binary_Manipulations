//  Yuya oguchi
//  COEN20L Lab5
//  10/22/2015
//  Substract Binaries

void SubBinary(int a[8], int b[8], int c[8])
	{
    int i = 0;
    int roll = 0; // rolls keeps track of if bits needs to be called over to another level of bits

    for (i = 0; i < 8; i++){
        if ((a[i] - b[i] - roll) >= 0){ // no roll called and bits substraction done
            c[i] = a[i] - b[i] - roll;
            roll = 0;
        } else if ((a[i] - b[i] - roll) == -1){ // roll called and bits substraction at the current level = 1
            c[i] = 1;
            roll = 1;
        } else if ((a[i] - b[i] - roll) == -2){ // roll called and bits substractioon at current level = 0
            c[i] = 0;
            roll = 1;
        }

    }
	}

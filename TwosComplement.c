//  Yuya oguchi
//  COEN20L Lab4
//  10/15/2015
//  Bin to 2's Complement converter

void TwosComp(int input[8], int output[8])
	{
	int i = 0;
	int invert = 0;
    for (i = 0; i < 8; i++){
        if (invert == 0 && input[i] == 0){
            output[i] = 0;
        } else if (invert == 0 && input[i] == 1){
            output[i] = 1;
            invert = 1;
        } else if (invert == 1 && input[i] == 1){
            output[i] = 0;
        } else if (invert == 1 && input[i] == 0){
            output[i] = 1;
        }
    }
	}

// for each of the following functions
// correct the prototype
// write function body
// replace return with the correct return statement
//
// you may write as many helper functions here as you wish

int algorithm_1() {
    int first = 8000;
    int second = 63;

    int sum = first + second;

    return sum;
}

int algorithm_2(int x, int y) {
    if(x < y){
	x = x + x + x + y;
    }
    else{
	x = (x / y);
    }

    return x;
}

int helper_3(int y);

int algorithm_3(int x, int y) {
    int z = 0;

    while(y > 0){
	z = z + x;
	y = helper_3(y);
    }

    return z;
}

int helper_3(int y){
    y = y - 1;

    return y;
}

void algorithm_4(int x, int *y) {
    *y = x + x + x;
    return;
}

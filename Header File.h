//
// Created by Mushtariy Zokirova on 04/11/24.
//
int floorFunction(double num) {
    return num >= 0 ? (int)num : (int)(num - 0.5);
}

int ceilingFunction(double num) {
    return num <= 0 ? (int)num : (int)(num + 0.5);
}

void swapValues(double &a, double &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int multiply(int x, int y) {
    if (y == 0) {
        return 0;
    }
    if (y < 0) {
        return -multiply(x, -y);
    }
    return x + multiply(x, y - 1);
}



int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}


int decimalToBinary(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 2) + 10 * decimalToBinary(n / 2);
}

template <typename T>
T midValue(T a, T b, T c) {
    if ((a >= b && a <= c)  (a <= b && a >= c)) {
        return a;
    } else if ((b >= a && b <= c)  (b <= a && b >= c)) {
        return b;
    } else {
        return c;
    }
}






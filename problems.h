//problem1
int floorFunction(double number) {
     return number/1;
}

int ceilingFunction(double number) {
      return (number+1)/1;


} else {
  return int(number) + 1;
}
}
void swap_values(double &a, double &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
int multiply(int digit1, int digit2) {
    if (digit2 == 0) {
        return 0;
    }
    if (digit2 < 0) {
        return -(multiply(digit1, -digit2));
    }
    return digit1 + multiply(digit1, digit2 - 1);
}
int digitSum(int constant) {
    if (constant/10 == 0) {
        return 0;
    }
    return (constant % 10) + sumOfDigits(constant/10);
}
int decimalToBinary(int guy) {
    if (guy == 0) {
        return 0;
    }
    return (guy%2)+10*decimalToBinary(guy/2);
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

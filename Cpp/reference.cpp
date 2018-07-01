#include <iostream>

using namespace std;

void print_square(int number);

int main() {
    print_square(3);
    return 0;
}

void print_square(int number) {
    cout << "square..: " << number * number << endl;
}

// #include <iostream>
// using namespace std;

// void print_square(int arg);
// int main()
// {
//     int i;

//     cout << "제곱할 수 ? : ";
//     cin >> i;

//     print_square(i);
    
//     return 0;
// }

// void print_square(int arg)
// {
//     cout << "전달된 인자 : " << arg*arg << endl;
// }
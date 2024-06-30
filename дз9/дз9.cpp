#include <iostream>
#include <cctype>
#include <string>

using namespace std;
//int*** reshape(int* arr, int size, int n) {
//    int* dim = new int[n];
//    int Size = size;
//    for (int i = n - 1; i >= 0; --i) {
//        dim[i] = Size;
//        Size /= arr[i];
//    }
//
//    int*** reshaped = new int** [dim[0]];
//    for (int i = 0; i < dim[0]; ++i) {
//        reshaped[i] = new int* [dim[1]];
//        for (int j = 0; j < dim[1]; ++j) {
//            reshaped[i][j] = new int[dim[2]];
//        }
//    }
//
//    int index = 0;
//    for (int i = 0; i < dim[0]; ++i) {
//        for (int j = 0; j < dim[1]; ++j) {
//            for (int k = 0; k < dim[2]; ++k) {
//                reshaped[i][j][k] = arr[index++];
//            }
//        }
//    }
//
//    delete[] dim;
//
//    return reshaped;
//}

//void deletee(int** arr, int Rows, int Cols, int Delete) {
//    if (Delete < 0 || Delete >= Cols) {
//        cout << "Неприпустимий номер стовпця." << endl;
//        return;
//    }
//
//    int** newarr = new int* [Rows];
//    for (int i = 0; i < Rows; ++i) {
//        newarr[i] = new int[Cols - 1];
//    }
//
//    for (int i = 0; i < Rows; ++i) {
//        int newColIndex = 0;
//        for (int j = 0; j < Cols; ++j) {
//            if (j != Delete) {
//                newarr[i][newColIndex++] = arr[i][j];
//            }
//        }
//    }
//
//    for (int i = 0; i < Rows; ++i) {
//        delete[] arr[i];
//    }
//    delete[] arr;
//
//    for (int i = 0; i < Rows; ++i) {
//        delete[] newarr[i];
//    }
//    delete[] newarr;
//}
//
//void print(int** arr, int Rows, int Cols) {
//    for (int i = 0; i < Rows; ++i) {
//        for (int j = 0; j < Cols; ++j) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}

//void rep(string& str) {
//    for (size_t i = 0; i < str.length(); ++i) {
//        if (str[i] == ' ') {
//            str[i] = '\t';
//        }
//    }
//}

//void Сount(const string& str, int& let, int& dig, int& oth) {
//    let = 0;
//    dig = 0;
//    oth = 0;
//
//    for (char ch : str) {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//            let++;
//        }
//        else if (ch >= '0' && ch <= '9') {
//            dig++;
//        }
//        else {
//            oth++;
//        }
//    }
//}

//int count(const string& sentence) {
//    int word = 0;
//    bool inWord = false;
//
//    for (char i : sentence) {
//        if (isspace(i)) {
//            if (inWord) {
//                word++;
//                inWord = false;
//            }
//        }
//        else {
//            if (!inWord) {
//                inWord = true;
//            }
//        }
//    }
//    if (inWord) {
//        word++;
//    }
//
//    return word;
//}

bool Palin(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {

    //1
    /*int Arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(Arr) / sizeof(Arr[0]);
    int dim;

    cout << "Введіть кількість вимірів (наприклад, 2 або 3): ";
    cin >> dim;

    int*** res = reshape(Arr, size, dim);

    cout << "Перетворений масив:" << endl;
    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < dim; ++j) {
            for (int k = 0; k < dim; ++k) {
                cout << res[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < dim; ++j) {
            delete[] res[i][j];
        }
        delete[] res[i];
    }
    delete[] res;*/


    //2

    /*int Rows = 3;
    int Cols = 3;
    int** matrix = new int* [Rows];
    for (int i = 0; i < Rows; ++i) {
        matrix[i] = new int[Cols];
        for (int j = 0; j < Cols; ++j) {
            matrix[i][j] = i * Cols + j + 1;
        }
    }

    int Delete;
    cout << "Введіть номер стовпця для видалення: ";
    cin >> Delete;

    deletee(matrix, Rows, Cols, Delete);

    cout << "Масив після видалення стовпця: " << endl;;
    print(matrix, Rows, Cols - 1);

    for (int i = 0; i < Rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;*/

    //3

    /*string input;
    cout << "Введіть рядок символів: ";
    getline(cin, input);

    rep(input);

    cout << "Рядок після заміни пробілів на табуляції:" << endl;
    cout << input << endl;*/

    //4

    /*string input;
    cout << "Введіть рядок символів: ";
    getline(cin, input);

    int countLet, countDig, countOth;
    Сount(input, countLet, countDig, countOth);

    cout << "Кількість літер: " << countLet << endl;
    cout << "Кількість цифр: " << countDig << endl;
    cout << "Кількість інших символів: " << countOth << endl;*/

    //5

    /*string input;
    cout << "Введіть речення: ";
    getline(cin, input);

    int words = count(input);

    cout << "Кількість слів у введеному реченні: " << words << endl;*/

    //6

    string input;
    cout << "Введіть рядок символів: ";
    getline(cin, input);

    if (Palin(input)) {
        cout << "Рядок є паліндромом." << endl;
    }
    else {
        cout << "Рядок не є паліндромом." << endl;
    }

    return 0;
}


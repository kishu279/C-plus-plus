#include<bits/stdc++.h>
using namespace std;

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
void pattern6(int n);
void pattern7(int n);
void pattern8(int n);
void pattern9(int n);
void pattern10(int n);
void pattern11(int n);
void pattern12(int n);
void pattern13(int n);
void pattern14(int n);
void pattern15(int n);
void pattern16(int n);
void pattern17(int n);
void pattern18(int n);
void pattern19(int n);
void pattern20(int n);
void pattern21(int n);
void pattern22(int n);

int main() {
    // pattern1(5);
    // pattern2(5);
    // pattern3(5);
    // pattern4(5);
    // pattern5(5);
    // pattern6(5);
    // pattern7(5);
    // pattern8(5);
    // pattern9(5);
    // pattern10(5);
    // pattern11(5);
    // pattern12(5);
    // pattern13(5);
    // pattern14(5);
    // pattern15(5);
    // pattern16(5);
    // pattern17(5);
    // pattern18(5);
    // pattern19(5);
    // pattern20(5);
    // pattern21(5);
    pattern22(5);

    return 0;
}

void pattern1(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern4(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << i + 1;
        }
        cout << endl;
    }
}

void pattern5(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i; j < 5; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5 - i; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern7(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5 - i - 1; j++) {
            cout << " ";
        }

        for(int k = 0; k <= i; k++) {
            cout << "*";
        }

        for(int l = 0; l < i; l++) {
            cout << "*";
        }

        cout<< endl ;
    }
}

void pattern8(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << " ";
        }

        for(int k = 0; k < 5 - i; k++) {
            cout << "*";
        }
        
        for(int l = 0; l < 5 - i - 1; l++) {
            cout << "*";
        }

        cout<< endl ;
    }
}

void pattern9(int n) {
    for(int i = 0; i < 2 * n; i++) {
        if(i < n) {
            for(int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }

            for(int k = 0; k <= i; k++) {
                cout << "*";
            }

            for(int l = 0; l < i; l++) {
                cout << "*";
            }
        } else {
            for( int j = 0; j < i - n; j++) {
                cout << " ";
            }

            for(int k = 0; k < 2 * n - i; k++) {
                cout << "*";
            }

            for(int l = 0; l < 2 * n - i - 1; l++) {
                cout<< "*";
            }
        }
        cout << endl;
    }
}

void pattern10(int n) {
    for(int i = 0; i < 2 * n; i++) {
        if(i < n) {
            for(int k = 0; k <= i; k++) {
                cout << "*";
            }
        } else {
            for(int k = 0; k < 2 * n - i - 1; k++) {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void pattern11(int n) {
    int val = 0;
    for(int i = 0; i < n; i++) {

        if(i % 2 != 0) val = 0;
        else val = 1;
        
        for(int j = 0; j <= i; j++) {
            cout << val;
            val = 1 - val;
        }
        cout << endl;
    }
}

void pattern12(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << j + 1;
        }

        for(int k = 0; k < n - i - 1; k++) {
            cout << "  ";

        }
        
        for(int l = 0; l <= i; l++) {
            cout <<  i + 1 - l;
        }
        cout << endl;
    }
}

void pattern13(int n) {
    int num = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << num << " ";
            num += 1;
        }        
        cout << endl;
    }
}

void pattern14(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << (char)( 'A' + j);
        }

        cout << endl;
    }
}

void pattern15(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= n - i - 1; j++) {
            cout << (char)( 'A' + j);
        }

        cout << endl;
    }
}

void pattern16(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << (char)( 'A' + i);
        }

        cout << endl;
    }
}

void pattern17(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        for(int k = 0; k <= i; k++) {
            cout << (char) ('A' + k);
        }   

        // for(int l = 0; l < i; l++) {
        //     cout << (char) ('A' + i - l - 1);
        // }

        for(int l = i - 1; l >= 0; l--) {
            cout << (char) ('A' + l);
        }

        cout << endl;
    }
}

void pattern18(int n) {
    for(int i = 0; i < n; i++) {
        for(char j = ('A' + n - i - 1); j < ('A' + n); j++) {
            cout << j;
        }

        cout << endl;
    }
}

void pattern19(int n) {
    for(int i = 0; i < 2 * n; i++) {
        if(i < n) {
            for(int j = n - i - 1; j >= 0; j--) {
                cout << "*";
            }

            for(int k = 0; k < i; k++) {
                cout<< "  ";
            }
            
            for(int l = 0; l < n - i; l++) {
                cout << "*";
            }
        } else {
            for(int j = 0; j < i - n + 1; j++) { 
                cout << "*";
            }

            for(int k = 0; k < 2 * n - i - 1; k++) {
                cout << "  ";
            }

            for(int l = 0; l < i - n + 1; l++) {
                cout << "*";
            }
        }

        cout << endl;
    }
}

void pattern20(int n) {
    for(int i = 0; i < 2 * n; i++) {
        if(i < n) {
            for(int j = 0; j <= i; j++) {
                cout << "*";
            }

            for(int k = 0; k < n - i - 1; k++) {
                cout << "  ";
            }

            for(int l = 0; l <= i; l++) {
                cout << "*";
            }
        } else {
            for(int j = 0; j < 2 * n - i - 1; j++) {
                cout  << "*";
            }

            for(int k = 0; k <= i - n; k++) {
                cout << "  ";
            }
            
            for(int l = 0; l < 2 * n - i - 1; l++) {
                cout << "*";   
            }
        }

        
        cout << endl;
    }
}

void pattern21(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }

        }
        
        cout << endl;
    }
}

void pattern22(int n) {
    for(int i = 0; i < 2 * n - 1; i++) {
        for(int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int bottom = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;

            cout << (n - min(min(top, left), min(bottom, right))) << " ";
            
        }
        cout << endl;
    }
}
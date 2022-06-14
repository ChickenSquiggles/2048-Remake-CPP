#include <iostream>
#include <algorithm>
#include <string>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <dos.h>
#include <fstream>
#include <mmsystem.h>
#include <direct.h>
#include <conio.h>
#include <process.h>
#include <wincon.h>
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <mmdeviceapi.h>
#include <endpointvolume.h>

#include "C://ChickenLib/ChickenLib.h"
using namespace std;

class HANDLENUM {
public:
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0, b1 = 0, b2 = 0, b3 = 0, b4 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0;
};

class HANDLE2048 {
public:
    HANDLENUM hn;
    void update(int square, int num) {
        switch (square) {
        case 1:
            hn.a1 = num;
            break;
        case 2:
            hn.a2 = num;
            break;
        case 3:
            hn.a3 = num;
            break;
        case 4:
            hn.a4 = num;
            break;
        case 5:
            hn.b1 = num;
            break;
        case 6:
            hn.b2 = num;
            break;
        case 7:
            hn.b3 = num;
            break;
        case 8:
            hn.b4 = num;
            break;
        case 9:
            hn.c1 = num;
            break;
        case 10:
            hn.c2 = num;
            break;
        case 11:
            hn.c3 = num;
            break;
        case 12:
            hn.c4 = num;
            break;
        case 13:
            hn.d1 = num;
            break;
        case 14:
            hn.d2 = num;
            break;
        case 15:
            hn.d3 = num;
            break;
        case 16:
            hn.d4 = num;
            break;
        }
    }

    int score = 0;
    void resetscreen2048() {
        system("CLS");
        string title = "2048 Remake by ChickenSquiggles";
        ConsoleTitle(title);
        cout << "Welcome to 2048 Remake by ChickenSquiggles! Use arrow keys or WASD do move the tiles around.\n";
        switch (hn.a1) {
        case 0:
            cout << "#    ";
            break;
        case 2:
            coutwithcolor("2    ", "Lblue");
            break;
        case 4:
            coutwithcolor("4    ", "Yellow");
            break;
        case 8:
            coutwithcolor("8    ", "Green");
            break;
        case 16:
            coutwithcolor("16   ", "Blue");
            break;
        case 32:
            coutwithcolor("32   ", "Red");
            break;
        case 64:
            coutwithcolor("64   ", "Purple");
            break;
        case 128:
            coutwithcolor("128  ", "Lblue");
            break;
        case 256:
            coutwithcolor("256  ", "Green");
            break;
        case 512:
            coutwithcolor("512  ", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 ", "Red");
            break;
        case 2048:
            coutwithcolor("2048 ", "Purple");
            break;
        }
        switch (hn.a2) {
        case 0:
            cout << "#    ";
            break;
        case 2:
            coutwithcolor("2    ", "Lblue");
            break;
        case 4:
            coutwithcolor("4    ", "Yellow");
            break;
        case 8:
            coutwithcolor("8    ", "Green");
            break;
        case 16:
            coutwithcolor("16   ", "Blue");
            break;
        case 32:
            coutwithcolor("32   ", "Red");
            break;
        case 64:
            coutwithcolor("64   ", "Purple");
            break;
        case 128:
            coutwithcolor("128  ", "Lblue");
            break;
        case 256:
            coutwithcolor("256  ", "Green");
            break;
        case 512:
            coutwithcolor("512  ", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 ", "Red");
            break;
        case 2048:
            coutwithcolor("2048 ", "Purple");
            break;
        }
        switch (hn.a3) {
        case 0:
            cout << "#    ";
            break;
        case 2:
            coutwithcolor("2    ", "Lblue");
            break;
        case 4:
            coutwithcolor("4    ", "Yellow");
            break;
        case 8:
            coutwithcolor("8    ", "Green");
            break;
        case 16:
            coutwithcolor("16   ", "Blue");
            break;
        case 32:
            coutwithcolor("32   ", "Red");
            break;
        case 64:
            coutwithcolor("64   ", "Purple");
            break;
        case 128:
            coutwithcolor("128  ", "Lblue");
            break;
        case 256:
            coutwithcolor("256  ", "Green");
            break;
        case 512:
            coutwithcolor("512  ", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 ", "Red");
            break;
        case 2048:
            coutwithcolor("2048 ", "Purple");
            break;
        }
        // EOL
        switch (hn.a4) {
        case 0:
            cout << "#    \n";
            break;
        case 2:
            coutwithcolor("2    \n", "Lblue");
            break;
        case 4:
            coutwithcolor("4    \n", "Yellow");
            break;
        case 8:
            coutwithcolor("8    \n", "Green");
            break;
        case 16:
            coutwithcolor("16   \n", "Blue");
            break;
        case 32:
            coutwithcolor("32   \n", "Red");
            break;
        case 64:
            coutwithcolor("64   \n", "Purple");
            break;
        case 128:
            coutwithcolor("128  \n", "Lblue");
            break;
        case 256:
            coutwithcolor("256  \n", "Green");
            break;
        case 512:
            coutwithcolor("512  \n", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 \n", "White");
            break;
        case 2048:
            coutwithcolor("2048 \n", "Purple");
            break;
        }

        switch (hn.b1) {
        case 0:
            cout << "#    ";
            break;
        case 2:
            coutwithcolor("2    ", "Lblue");
            break;
        case 4:
            coutwithcolor("4    ", "Yellow");
            break;
        case 8:
            coutwithcolor("8    ", "Green");
            break;
        case 16:
            coutwithcolor("16   ", "Blue");
            break;
        case 32:
            coutwithcolor("32   ", "Red");
            break;
        case 64:
            coutwithcolor("64   ", "Purple");
            break;
        case 128:
            coutwithcolor("128  ", "Lblue");
            break;
        case 256:
            coutwithcolor("256  ", "Green");
            break;
        case 512:
            coutwithcolor("512  ", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 ", "Red");
            break;
        case 2048:
            coutwithcolor("2048 ", "Purple");
            break;
        }
        switch (hn.b2) {
        case 0:
            cout << "#    ";
            break;
        case 2:
            coutwithcolor("2    ", "Lblue");
            break;
        case 4:
            coutwithcolor("4    ", "Yellow");
            break;
        case 8:
            coutwithcolor("8    ", "Green");
            break;
        case 16:
            coutwithcolor("16   ", "Blue");
            break;
        case 32:
            coutwithcolor("32   ", "Red");
            break;
        case 64:
            coutwithcolor("64   ", "Purple");
            break;
        case 128:
            coutwithcolor("128  ", "Lblue");
            break;
        case 256:
            coutwithcolor("256  ", "Green");
            break;
        case 512:
            coutwithcolor("512  ", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 ", "Red");
            break;
        case 2048:
            coutwithcolor("2048 ", "Purple");
            break;
        }
        switch (hn.b3) {
        case 0:
            cout << "#    ";
            break;
        case 2:
            coutwithcolor("2    ", "Lblue");
            break;
        case 4:
            coutwithcolor("4    ", "Yellow");
            break;
        case 8:
            coutwithcolor("8    ", "Green");
            break;
        case 16:
            coutwithcolor("16   ", "Blue");
            break;
        case 32:
            coutwithcolor("32   ", "Red");
            break;
        case 64:
            coutwithcolor("64   ", "Purple");
            break;
        case 128:
            coutwithcolor("128  ", "Lblue");
            break;
        case 256:
            coutwithcolor("256  ", "Green");
            break;
        case 512:
            coutwithcolor("512  ", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 ", "Red");
            break;
        case 2048:
            coutwithcolor("2048 ", "Purple");
            break;
        }
        // EOL
        switch (hn.b4) {
        case 0:
            cout << "#    \n";
            break;
        case 2:
            coutwithcolor("2    \n", "Lblue");
            break;
        case 4:
            coutwithcolor("4    \n", "Yellow");
            break;
        case 8:
            coutwithcolor("8    \n", "Green");
            break;
        case 16:
            coutwithcolor("16   \n", "Blue");
            break;
        case 32:
            coutwithcolor("32   \n", "Red");
            break;
        case 64:
            coutwithcolor("64   \n", "Purple");
            break;
        case 128:
            coutwithcolor("128  \n", "Lblue");
            break;
        case 256:
            coutwithcolor("256  \n", "Green");
            break;
        case 512:
            coutwithcolor("512  \n", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 \n", "White");
            break;
        case 2048:
            coutwithcolor("2048 \n", "Purple");
            break;
        }

        switch (hn.c1) {
        case 0:
            cout << "#    ";
            break;
        case 2:
            coutwithcolor("2    ", "Lblue");
            break;
        case 4:
            coutwithcolor("4    ", "Yellow");
            break;
        case 8:
            coutwithcolor("8    ", "Green");
            break;
        case 16:
            coutwithcolor("16   ", "Blue");
            break;
        case 32:
            coutwithcolor("32   ", "Red");
            break;
        case 64:
            coutwithcolor("64   ", "Purple");
            break;
        case 128:
            coutwithcolor("128  ", "Lblue");
            break;
        case 256:
            coutwithcolor("256  ", "Green");
            break;
        case 512:
            coutwithcolor("512  ", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 ", "Red");
            break;
        case 2048:
            coutwithcolor("2048 ", "Purple");
            break;
        }
        switch (hn.c2) {
        case 0:
            cout << "#    ";
            break;
        case 2:
            coutwithcolor("2    ", "Lblue");
            break;
        case 4:
            coutwithcolor("4    ", "Yellow");
            break;
        case 8:
            coutwithcolor("8    ", "Green");
            break;
        case 16:
            coutwithcolor("16   ", "Blue");
            break;
        case 32:
            coutwithcolor("32   ", "Red");
            break;
        case 64:
            coutwithcolor("64   ", "Purple");
            break;
        case 128:
            coutwithcolor("128  ", "Lblue");
            break;
        case 256:
            coutwithcolor("256  ", "Green");
            break;
        case 512:
            coutwithcolor("512  ", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 ", "Red");
            break;
        case 2048:
            coutwithcolor("2048 ", "Purple");
            break;
        }
        switch (hn.c3) {
        case 0:
            cout << "#    ";
            break;
        case 2:
            coutwithcolor("2    ", "Lblue");
            break;
        case 4:
            coutwithcolor("4    ", "Yellow");
            break;
        case 8:
            coutwithcolor("8    ", "Green");
            break;
        case 16:
            coutwithcolor("16   ", "Blue");
            break;
        case 32:
            coutwithcolor("32   ", "Red");
            break;
        case 64:
            coutwithcolor("64   ", "Purple");
            break;
        case 128:
            coutwithcolor("128  ", "Lblue");
            break;
        case 256:
            coutwithcolor("256  ", "Green");
            break;
        case 512:
            coutwithcolor("512  ", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 ", "Red");
            break;
        case 2048:
            coutwithcolor("2048 ", "Purple");
            break;
        }
        // EOL
        switch (hn.c4) {
        case 0:
            cout << "#    \n";
            break;
        case 2:
            coutwithcolor("2    \n", "Lblue");
            break;
        case 4:
            coutwithcolor("4    \n", "Yellow");
            break;
        case 8:
            coutwithcolor("8    \n", "Green");
            break;
        case 16:
            coutwithcolor("16   \n", "Blue");
            break;
        case 32:
            coutwithcolor("32   \n", "Red");
            break;
        case 64:
            coutwithcolor("64   \n", "Purple");
            break;
        case 128:
            coutwithcolor("128  \n", "Lblue");
            break;
        case 256:
            coutwithcolor("256  \n", "Green");
            break;
        case 512:
            coutwithcolor("512  \n", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 \n", "White");
            break;
        case 2048:
            coutwithcolor("2048 \n", "Purple");
            break;
        }

        switch (hn.d1) {
        case 0:
            cout << "#    ";
            break;
        case 2:
            coutwithcolor("2    ", "Lblue");
            break;
        case 4:
            coutwithcolor("4    ", "Yellow");
            break;
        case 8:
            coutwithcolor("8    ", "Green");
            break;
        case 16:
            coutwithcolor("16   ", "Blue");
            break;
        case 32:
            coutwithcolor("32   ", "Red");
            break;
        case 64:
            coutwithcolor("64   ", "Purple");
            break;
        case 128:
            coutwithcolor("128  ", "Lblue");
            break;
        case 256:
            coutwithcolor("256  ", "Green");
            break;
        case 512:
            coutwithcolor("512  ", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 ", "Red");
            break;
        case 2048:
            coutwithcolor("2048 ", "Purple");
            break;
        }
        switch (hn.d2) {
        case 0:
            cout << "#    ";
            break;
        case 2:
            coutwithcolor("2    ", "Lblue");
            break;
        case 4:
            coutwithcolor("4    ", "Yellow");
            break;
        case 8:
            coutwithcolor("8    ", "Green");
            break;
        case 16:
            coutwithcolor("16   ", "Blue");
            break;
        case 32:
            coutwithcolor("32   ", "Red");
            break;
        case 64:
            coutwithcolor("64   ", "Purple");
            break;
        case 128:
            coutwithcolor("128  ", "Lblue");
            break;
        case 256:
            coutwithcolor("256  ", "Green");
            break;
        case 512:
            coutwithcolor("512  ", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 ", "Red");
            break;
        case 2048:
            coutwithcolor("2048 ", "Purple");
            break;
        }
        switch (hn.d3) {
        case 0:
            cout << "#    ";
            break;
        case 2:
            coutwithcolor("2    ", "Lblue");
            break;
        case 4:
            coutwithcolor("4    ", "Yellow");
            break;
        case 8:
            coutwithcolor("8    ", "Green");
            break;
        case 16:
            coutwithcolor("16   ", "Blue");
            break;
        case 32:
            coutwithcolor("32   ", "Red");
            break;
        case 64:
            coutwithcolor("64   ", "Purple");
            break;
        case 128:
            coutwithcolor("128  ", "Lblue");
            break;
        case 256:
            coutwithcolor("256  ", "Green");
            break;
        case 512:
            coutwithcolor("512  ", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 ", "Red");
            break;
        case 2048:
            coutwithcolor("2048 ", "Purple");
            break;
        }
        // EOL
        switch (hn.d4) {
        case 0:
            cout << "#    \n";
            break;
        case 2:
            coutwithcolor("2    \n", "Lblue");
            break;
        case 4:
            coutwithcolor("4    \n", "Yellow");
            break;
        case 8:
            coutwithcolor("8    \n", "Green");
            break;
        case 16:
            coutwithcolor("16   \n", "Blue");
            break;
        case 32:
            coutwithcolor("32   \n", "Red");
            break;
        case 64:
            coutwithcolor("64   \n", "Purple");
            break;
        case 128:
            coutwithcolor("128  \n", "Lblue");
            break;
        case 256:
            coutwithcolor("256  \n", "Green");
            break;
        case 512:
            coutwithcolor("512  \n", "Yellow");
            break;
        case 1024:
            coutwithcolor("1024 \n", "White");
            break;
        case 2048:
            coutwithcolor("2048 \n", "Purple");
            break;
        }
    }
    void updatevar204() {

    }
    // UP
    bool shiftup2048() {
        bool moved = false;


        // Row 1
        int a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (d1 != 0) {
            if (c1 == 0) {
                if (b1 == 0) {
                    if (a1 == 0) {
                        hn.a1 = d1;
                        hn.d1 = 0;
                    }
                    else {
                        if (a1 == d1) {
                            hn.a1 = d1 * 2;
                            hn.d1 = 0;
                        }
                        else if (a1 > d1 || a1 < d1) {
                            hn.a1 = a1;
                            hn.b1 = d1;
                            hn.d1 = 0;
                        }
                    }
                }
                else {
                    if (b1 == d1) {
                        hn.b1 = d1 * 2;
                        hn.d1 = 0;
                    }
                    else if (b1 > d1 || b1 < d1) {
                        hn.b1 = b1;
                        hn.c1 = d1;
                        hn.d1 = 0;
                    }
                }
            }
            else {
                if (c1 == d1) {
                    hn.c1 = c1 * 2;
                    hn.d1 = 0;
                }
                else if (c1 > d1 || c1 < d1) {
                    hn.c1 = c1;
                    hn.d1 = d1;
                }
            }
        }
        if (hn.a1 != a1 || hn.b1 != b1 || hn.c1 != c1 || hn.d1 != d1) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c1 != 0) {
            if (b1 == 0) {
                if (a1 == 0) {
                    hn.a1 = c1;
                    hn.c1 = 0;
                }
                else {
                    if (a1 == c1) {
                        hn.a1 = c1 * 2;
                        hn.c1 = 0;
                    }
                    else if (a1 > c1 || a1 < c1) {
                        hn.b1 = c1;
                        hn.a1 = a1;
                    }
                }
            }
            else {
                if (b1 == c1) {
                    hn.b1 = c1 * 2;
                    hn.c1 = 0;
                }
                else if (b1 > c1 || b1 < c1) {
                    hn.c1 = c1;
                    hn.b1 = b1;
                }
            }
        }  
        if (hn.a1 != a1 || hn.b1 != b1 || hn.c1 != c1 || hn.d1 != d1) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b1 != 0) {
            if (a1 == 0) {
                hn.a1 = b1;
                hn.b1 = 0;
            }
            else {
                if (a1 == b1) {
                    hn.a1 = a1 * 2;
                    hn.b1 = 0;
                }
                else if (a1 > b1 || a1 < b1) {
                    hn.b1 = b1;
                    hn.a1 = a1;
                }
            }
        }


        // Row 2
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (hn.a1 != a1 || hn.b1 != b1 || hn.c1 != c1 || hn.d1 != d1) {
            moved = true;
        }
        if (d2 != 0) {
            if (c2 == 0) {
                if (b2 == 0) {
                    if (a2 == 0) {
                        hn.a2 = d2;
                        hn.d2 = 0;
                    }
                    else {
                        if (a2 == d2) {
                            hn.a2 = d2 * 2;
                            hn.d2 = 0;
                        }
                        else if (a2 > d2 || a2 < d2) {
                            hn.a2 = a2;
                            hn.b2 = d2;
                        }
                    }
                }
                else {
                    if (b2 == d2) {
                        hn.b2 = d2 * 2;
                        hn.d2 = 0;
                    }
                    else if (b2 > d2 || b2 < d2) {
                        hn.b2 = b2;
                        hn.c2 = d2;
                    }
                }
            }
            else {
                if (c2 == d2) {
                    hn.c2 = c2 * 2;
                    hn.d2 = 0;
                }
                else if (c2 > d2 || c2 < d2) {
                    hn.c2 = c2;
                    hn.d2 = d2;
                }
            }
        }
        if (hn.a2 != a2 || hn.b2 != b2 || hn.c2 != c2 || hn.d2 != d2) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c2 != 0) {
            if (b2 == 0) {
                if (a2 == 0) {
                    hn.a2 = c2;
                    hn.c2 = 0;
                }
                else {
                    if (a2 == c2) {
                        hn.a2 = c2 * 2;
                        hn.c2 = 0;
                    }
                    else if (a2 > c2 || a2 < c2) {
                        hn.b2 = c2;
                        hn.a2 = a2;
                    }
                }
            }
            else {
                if (b2 == c2) {
                    hn.b2 = c2 * 2;
                    hn.c2 = 0;
                }
                else if (b2 > c2 || b2 < c2) {
                    hn.c2 = c2;
                    hn.b2 = b2;
                }
            }
        }
        if (hn.a2 != a2 || hn.b2 != b2 || hn.c2 != c2 || hn.d2 != d2) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b2 != 0) {
            if (a2 == 0) {
                hn.a2 = b2;
                hn.b2 = 0;
            }
            else {
                if (a2 == b2) {
                    hn.a2 = a2 * 2;
                    hn.b2 = 0;
                }
                else if (a2 > b2 || a2 < b2) {
                    hn.b2 = b2;
                    hn.a2 = a2;
                }
            }
        }
        if (hn.a2 != a2 || hn.b2 != b2 || hn.c2 != c2 || hn.d2 != d2) {
            moved = true;
        }


        // Row 3
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (hn.a3 != a3 || hn.b3 != b3 || hn.c3 != c3 || hn.d3 != d3) {
            moved = true;
        }
        if (d3 != 0) {
            if (c3 == 0) {
                if (b3 == 0) {
                    if (a3 == 0) {
                        hn.a3 = d3;
                        hn.d3 = 0;
                    }
                    else {
                        if (a3 == d3) {
                            hn.a3 = d3 * 2;
                            hn.d3 = 0;
                        }
                        else if (a3 > d3 || a3 < d3) {
                            hn.a3 = a3;
                            hn.b3 = d3;
                        }
                    }
                }
                else {
                    if (b3 == d3) {
                        hn.b3 = d3 * 2;
                        hn.d3 = 0;
                    }
                    else if (b3 > d3 || b3 < d3) {
                        hn.b3 = b3;
                        hn.c3 = d3;
                    }
                }
            }
            else {
                if (c3 == d3) {
                    hn.c3 = c3 * 2;
                    hn.d3 = 0;
                }
                else if (c3 > d3 || c3 < d3) {
                    hn.c3 = c3;
                    hn.d3 = d3;
                }
            }
        } 
        if (hn.a3 != a3 || hn.b3 != b3 || hn.c3 != c3 || hn.d3 != d3) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c3 != 0) {
            if (b3 == 0) {
                if (a3 == 0) {
                    hn.a3 = c3;
                    hn.c3 = 0;
                }
                else {
                    if (a3 == c3) {
                        hn.a3 = c3 * 2;
                        hn.c3 = 0;
                    }
                    else if (a3 > c3 || a3 < c3) {
                        hn.a3 = a3;
                        hn.b3 = c3;
                        
                    }
                }
            }
            else {
                if (b3 == c3) {
                    hn.b3 = c3 * 2;
                    hn.c3 = 0;
                }
                else if (b3 > c3 || b3 < c3) {
                    hn.c3 = c3;
                    hn.b3 = b3;
                }
            }
        }
        if (hn.a3 != a3 || hn.b3 != b3 || hn.c3 != c3 || hn.d3 != d3) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b3 != 0) {
            if (a3 == 0) {
                hn.a3 = b3;
                hn.b3 = 0;
            }
            else {
                if (a3 == b3) {
                    hn.a3 = a3 * 2;
                    hn.b3 = 0;
                }
                else if (a3 > b3 || a3 < b3) {
                    hn.b3 = b3;
                    hn.b4 = b4;
                }
            }
        }
        if (hn.a3 != a3 || hn.b3 != b3 || hn.c3 != c3 || hn.d3 != d3) {
            moved = true;
        }
        // Row 4


        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (hn.a3 != a3 || hn.b3 != b3 || hn.c3 != c3 || hn.d3 != d3) {
            moved = true;
        }
        if (d4 != 0) {
            if (c4 == 0) {
                if (b4 == 0) {
                    if (a4 == 0) {
                        hn.a4 = d4;
                        hn.d4 = 0;
                    }
                    else {
                        if (a4 == d4) {
                            hn.a4 = d4 * 2;
                            hn.d4 = 0;
                        }
                        else if (a4 > d4 || a4 < d4) {
                            hn.a4 = a4;
                            hn.b4 = d4;
                        }
                    }
                }
                else {
                    if (b4 == d4) {
                        hn.b4 = d4 * 2;
                        hn.d4 = 0;
                    }
                    else if (b4 > d4 || b4 < d4) {
                        hn.b4 = b4;
                        hn.c4 = d4;
                    }
                }
            }
            else {
                if (c4 == d4) {
                    hn.c4 = c4 * 2;
                    hn.d4 = 0;
                }
                else if (c4 > d4 || c4 < d4) {
                    hn.c4 = c4;
                    hn.d4 = d4;
                }
            }
        }
        if (hn.a4 != a4 || hn.b4 != b4 || hn.c4 != c4 || hn.d4 != d4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c4 != 0) {
            if (b4 == 0) {
                if (a4 == 0) {
                    hn.a4 = c4;
                    hn.c4 = 0;
                }
                else {
                    if (a4 == c4) {
                        hn.a4 = c4 * 2;
                        hn.c4 = 0;
                    }
                    else if (a4 > c4 || a4 < c4) {
                        hn.b4 = c4;
                        hn.c4 = 0;
                    }
                }
            }
            else {
                if (b4 == c4) {
                    hn.b4 = c4 * 2;
                    hn.c4 = 0;
                }
                else if (b4 > c4 || b4 < c4) {
                    hn.c4 = c4;
                }
            }
        }
        if (hn.a4 != a4 || hn.b4 != b4 || hn.c4 != c4 || hn.d4 != d4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b4 != 0) {
            if (a4 == 0) {
                hn.a4 = b4;
                hn.b4 = 0;
            }
            else {
                if (a4 == b4) {
                    hn.a4 = a4 * 2;
                    hn.b4 = 0;
                }
                else if (a4 > b4 || a4 < b4) {
                    hn.b4 = b4;
                    hn.a4 = a4;
                }
            }
        }
        if (hn.a4 != a4 || hn.b4 != b4 || hn.c4 != c4 || hn.d4 != d4) {
            moved = true;
        }
        return(moved);
        resetscreen2048();
    }
    // DOWN
    bool shiftdown2048() {
        bool moved = false;
        int a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;


        // Row 1
        if (a1 != 0) {
            if (b1 == 0) {
                if (c1 == 0) {
                    if (d1 == 0) {
                        hn.d1 = a1;
                        hn.a1 = 0;
                    }
                    else {
                        if (d1 == a1) {
                            hn.d1 = a1 * 2;
                            hn.a1 = 0;
                        }
                        else if (d1 > a1 || d1 < a1) {
                            hn.c1 = a1;
                            hn.d1 = d1;
                            hn.a1 = 0;
                        }
                    }
                }
                else {
                    if (a1 == c1) {
                        hn.c1 = c1 * 2;
                        hn.a1 = 0;
                    }
                    else if (b1 > a1 || b1 < a1) {
                        hn.b1 = b1;
                        hn.a1 = a1;
                    }
                }
            }
            else {
                if (b1 == a1) {
                    hn.b1 = a1 * 2;
                    hn.a1 = 0;
                }
                else if (b1 > a1 || b1 < a1) {
                    hn.b1 = b1;
                    hn.a1 = a1;
                }
            }
        }
        if (hn.a1 != a1 || hn.b1 != b1 || hn.c1 != c1 || hn.d1 != d1) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b1 != 0) {
            if (c1 == 0) {
                if (d1 == 0) {
                    hn.d1 = b1;
                    hn.b1 = 0;
                }
                else {
                    if (d1 == b1) {
                        hn.d1 = d1 * 2;
                        hn.b1 = 0;
                    }
                    else if (d1 > b1 || d1 < b1) {
                        hn.d1 = d1;
                        hn.c1 = b1;
                        hn.b1 = 0;
                    }
                }
            }
            else {
                if (c1 == b1) {
                    hn.c1 = c1 * 2;
                    hn.b1 = 0;
                }
                else if (c1 > b1 || c1 < b1) {
                    hn.c1 = c1;
                    hn.b1 = b1;
                }
            }
        }
        if (hn.a1 != a1 || hn.b1 != b1 || hn.c1 != c1 || hn.d1 != d1) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c1 != 0) {
            if (d1 == 0) {
                hn.d1 = c1;
                hn.c1 = 0;
            }
            else {
                if (c1 == d1) {
                    hn.d1 = d1 * 2;
                    hn.c1 = 0;
                }
                else if (d1 > c1 || d1 < c1) {
                    hn.c1 = c1;
                    hn.d1 = d1;
                }
            }
        }
        if (hn.a1 != a1 || hn.b1 != b1 || hn.c1 != c1 || hn.d1 != d1) {
            moved = true;
        }


        // Row 2
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (a2 != 0) {
            if (b2 == 0) {
                if (c2 == 0) {
                    if (d2 == 0) {
                        hn.d2 = a2;
                        hn.a2 = 0;
                    }
                    else {
                        if (d2 == a2) {
                            hn.d2 = a2 * 2;
                            hn.a2 = 0;
                        }
                        else if (d2 > a2 || d2 < a2) {
                            hn.c2 = a2;
                            hn.d2 = d2;
                            hn.a2 = 0;
                        }
                    }
                }
                else {
                    if (a2 == c2) {
                        hn.c2 = c2 * 2;
                        hn.a2 = 0;
                    }
                    else if (b2 > a2 || b2 < a2) {
                        hn.b2 = b2;
                        hn.a2 = a2;
                    }
                }
            }
            else {
                if (b2 == a2) {
                    hn.b2 = a2 * 2;
                    hn.a2 = 0;
                }
                else if (b2 > a2 || b2 < a2) {
                    hn.b2 = b2;
                    hn.a2 = a2;
                }
            }
        }
        if (hn.a2 != a2 || hn.b2 != b2 || hn.c2 != c2 || hn.d2 != d2) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b2 != 0) {
            if (c2 == 0) {
                if (d2 == 0) {
                    hn.d2 = b2;
                    hn.b2 = 0;
                }
                else {
                    if (d2 == b2) {
                        hn.d2 = d2 * 2;
                        hn.b2 = 0;
                    }
                    else if (d2 > b2 || d2 < b2) {
                        hn.d2 = d2;
                        hn.c2 = b2;
                        hn.b2 = 0;
                    }
                }
            }
            else {
                if (c2 == b2) {
                    hn.c2 = c2 * 2;
                    hn.b2 = 0;
                }
                else if (c2 > b2 || c2 < b2) {
                    hn.c2 = c2;
                    hn.b2 = b2;
                }
            }
        }
        if (hn.a2 != a2 || hn.b2 != b2 || hn.c2 != c2 || hn.d2 != d2) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c2 != 0) {
            if (d2 == 0) {
                hn.d2 = c2;
                hn.c2 = 0;
            }
            else {
                if (c2 == d2) {
                    hn.d2 = d2 * 2;
                    hn.c2 = 0;
                }
                else if (d2 > c2 || d2 < c2) {
                    hn.c2 = c2;
                    hn.d2 = d2;
                }
            }
        }
        if (hn.a2 != a2 || hn.b2 != b2 || hn.c2 != c2 || hn.d2 != d2) {
            moved = true;
        }


        // Row 3
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (a3 != 0) {
            if (b3 == 0) {
                if (c3 == 0) {
                    if (d3 == 0) {
                        hn.d3 = a3;
                        hn.a3 = 0;
                    }
                    else {
                        if (d3 == a3) {
                            hn.d3 = a3 * 2;
                            hn.a3 = 0;
                        }
                        else if (d3 > a3 || d3 < a3) {
                            hn.c3 = a3;
                            hn.d3 = d3;
                            hn.a3 = 0;
                        }
                    }
                }
                else {
                    if (a3 == c3) {
                        hn.c3 = c3 * 2;
                        hn.a3 = 0;
                    }
                    else if (b3 > a3 || b3 < a3) {
                        hn.b3 = b3;
                        hn.a3 = a3;
                    }
                }
            }
            else {
                if (b3 == a3) {
                    hn.b3 = a3 * 2;
                    hn.a3 = 0;
                }
                else if (b3 > a3 || b3 < a3) {
                    hn.b3 = b3;
                    hn.a3 = a3;
                }
            }
        }
        if (hn.a3 != a3 || hn.b3 != b3 || hn.c3 != c3 || hn.d3 != d3) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b3 != 0) {
            if (c3 == 0) {
                if (d3 == 0) {
                    hn.d3 = b3;
                    hn.b3 = 0;
                }
                else {
                    if (d3 == b3) {
                        hn.d3 = d3 * 2;
                        hn.b3 = 0;
                    }
                    else if (d3 > b3 || d3 < b3) {
                        hn.d3 = d3;
                        hn.c3 = b3;
                        hn.b3 = 0;
                    }
                }
            }
            else {
                if (c3 == b3) {
                    hn.c3 = c3 * 2;
                    hn.b3 = 0;
                }
                else if (c3 > b3 || c3 < b3) {
                    hn.c3 = c3;
                    hn.b3 = b3;
                }
            }
        }
        if (hn.a3 != a3 || hn.b3 != b3 || hn.c3 != c3 || hn.d3 != d3) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c3 != 0) {
            if (d3 == 0) {
                hn.d3 = c3;
                hn.c3 = 0;
            }
            else {
                if (c3 == d3) {
                    hn.d3 = d3 * 2;
                    hn.c3 = 0;
                }
                else if (d3 > c3 || d3 < c3) {
                    hn.c3 = c3;
                    hn.d3 = d3;
                }
            }
        }
        if (hn.a3 != a3 || hn.b3 != b3 || hn.c3 != c3 || hn.d3 != d3) {
            moved = true;
        }


        // Row 4
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (a4 != 0) {
            if (b4 == 0) {
                if (c4 == 0) {
                    if (d4 == 0) {
                        hn.d4 = a4;
                        hn.a4 = 0;
                    }
                    else {
                        if (d4 == a4) {
                            hn.d4 = a4 * 2;
                            hn.a4 = 0;
                        }
                        else if (d4 > a4 || d4 < a4) {
                            hn.c4 = a4;
                            hn.d4 = d4;
                            hn.a4 = 0;
                        }
                    }
                }
                else {
                    if (a4 == c4) {
                        hn.c4 = c4 * 2;
                        hn.a4 = 0;
                    }
                    else if (b4 > a4 || b4 < a4) {
                        hn.b4 = b4;
                        hn.a4 = a4;
                    }
                }
            }
            else {
                if (b4 == a4) {
                    hn.b4 = a4 * 2;
                    hn.a4 = 0;
                }
                else if (b4 > a4 || b4 < a4) {
                    hn.b4 = b4;
                    hn.a4 = a4;
                }
            }
        }
        if (hn.a4 != a4 || hn.b4 != b4 || hn.c4 != c4 || hn.d4 != d4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b4 != 0) {
            if (c4 == 0) {
                if (d4 == 0) {
                    hn.d4 = b4;
                    hn.b4 = 0;
                }
                else {
                    if (d4 == b4) {
                        hn.d4 = d4 * 2;
                        hn.b4 = 0;
                    }
                    else if (d4 > b4 || d4 < b4) {
                        hn.d4 = d4;
                        hn.c4 = b4;
                        hn.b4 = 0;
                    }
                }
            }
            else {
                if (c4 == b4) {
                    hn.c4 = c4 * 2;
                    hn.b4 = 0;
                }
                else if (c4 > b4 || c4 < b4) {
                    hn.c4 = c4;
                    hn.b4 = b4;
                }
            }
        }
        if (hn.a4 != a4 || hn.b4 != b4 || hn.c4 != c4 || hn.d4 != d4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c4 != 0) {
            if (d4 == 0) {
                hn.d4 = c4;
                hn.c4 = 0;
            }
            else {
                if (c4 == d4) {
                    hn.d4 = d4 * 2;
                    hn.c4 = 0;
                }
                else if (d4 > c4 || d4 < c4) {
                    hn.c4 = c4;
                    hn.d4 = d4;
                }
            }
        }
        if (hn.a4 != a4 || hn.b4 != b4 || hn.c4 != c4 || hn.d4 != d4) {
            moved = true;
        }

        resetscreen2048();
        return(moved);
    }
    // RIGHT
    bool shiftright2048() {
        bool moved = false;


        // Row 1
        int a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (a1 != 0) {
            if (a2 == 0) {
                if (a3 == 0) {
                    if (a4 == 0) {
                        hn.a4 = a1;
                        hn.a1 = 0;
                    }
                    else {
                        if (a4 > a1 || a4 < a1) {
                            hn.a4 = a4;
                            hn.a3 = a1;
                            hn.a1 = 0;
                        }
                        else if (a4 == a1) {
                            hn.a4 = a4 * 2;
                            hn.a1 = 0;
                        }
                    }
                }
                else {
                    if (a3 > a1 || a3 < a1) {
                        hn.a2 = a1;
                        hn.a3 = a3;
                        hn.a1 = 0;
                    }
                    else if (a3 == a1) {
                        hn.a3 = a3 * 2;
                        hn.a1 = 0;
                    }
                }
            }
            else {
                if (a2 > a1 || a2 < a1) {
                    hn.a1 = a1;
                    hn.a2 = a2;
                }
                else if (a2 == a1) {
                    hn.a2 = a2 * 2;
                    hn.a1 = 0;
                }
            }
        }
        if (hn.a1 != a1 || hn.a2 != a2 || hn.a3 != a3 || hn.a4 != a4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (a2 != 0) {
            if (a3 == 0) {
                if (a4 == 0) {
                    hn.a4 = a2;
                    hn.a2 = 0;
                }
                else {
                    if (a4 > a2 || a4 < a2) {
                        hn.a4 = a4;
                        hn.a3 = a2;
                        hn.a2 = 0;
                    }
                    else if (a4 == a2) {
                        hn.a4 = a4 * 2;
                        hn.a2 = 0;
                    }
                }
            }
            else {
                if (a3 > a2 || a3 < a2) {
                    hn.a3 = a3;
                    hn.a2 = a2;
                }
                else if (a3 == a2) {
                    hn.a3 = a3 * 2;
                    hn.a2 = 0;
                }
            }
        }
          ;
        if (hn.a1 != a1 || hn.a2 != a2 || hn.a3 != a3 || hn.a4 != a4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (a3 != 0) {
            if (a4 == 0) {
                hn.a4 = a3;
                hn.a3 = 0;
            }
            else {
                if (a4 == a3) {
                    hn.a4 = a4 * 2;
                    hn.a3 = 0;
                }
            }
        }
        if (hn.a1 != a1 || hn.a2 != a2 || hn.a3 != a3 || hn.a4 != a4) {
            moved = true;
        }


        // Row 2
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b1 != 0) {
            if (b2 == 0) {
                if (b3 == 0) {
                    if (b4 == 0) {
                        hn.b4 = b1;
                        hn.b1 = 0;
                    }
                    else {
                        if (b4 > b1 || b4 < b1) {
                            hn.b4 = b4;
                            hn.b3 = b1;
                            hn.b1 = 0;
                        }
                        else if (b4 == b1) {
                            hn.b4 = b4 * 2;
                            hn.b1 = 0;
                        }
                    }
                }
                else {
                    if (b3 > b1 || b3 < b1) {
                        hn.b2 = b1;
                        hn.b3 = b3;
                        hn.b1 = 0;
                    }
                    else if (b3 == b1) {
                        hn.b3 = b3 * 2;
                        hn.b1 = 0;
                    }
                }
            }
            else {
                if (b2 > b1 || b2 < b1) {
                    hn.b1 = b1;
                    hn.b2 = b2;
                }
                else if (b2 == b1) {
                    hn.b2 = b2 * 2;
                    hn.b1 = 0;
                }
            }
        }
        if (hn.b1 != b1 || hn.b2 != b2 || hn.b3 != b3 || hn.b4 != b4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b2 != 0) {
            if (b3 == 0) {
                if (b4 == 0) {
                    hn.b4 = b2;
                    hn.b2 = 0;
                }
                else {
                    if (b4 > b2 || b4 < b2) {
                        hn.b4 = b4;
                        hn.b3 = b2;
                        hn.b2 = 0;
                    }
                    else if (b4 == b2) {
                        hn.b4 = b4 * 2;
                        hn.b2 = 0;
                    }
                }
            }
            else {
                if (b3 > b2 || b3 < b2) {
                    hn.b3 = b3;
                    hn.b2 = b2;
                }
                else if (b3 == b2) {
                    hn.b3 = b3 * 2;
                    hn.b2 = 0;
                }
            }
        }
        if (hn.b1 != b1 || hn.b2 != b2 || hn.b3 != b3 || hn.b4 != b4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b3 != 0) {
            if (b4 == 0) {
                hn.b4 = b3;
                hn.b3 = 0;
            }
            else {
                if (b4 == b3) {
                    hn.b4 = b4 * 2;
                    hn.b3 = 0;
                }
            }
        }
        if (hn.b1 != b1 || hn.b2 != b2 || hn.b3 != b3 || hn.b4 != b4) {
            moved = true;
        }


        // Row 3
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c1 != 0) {
            if (c2 == 0) {
                if (c3 == 0) {
                    if (c4 == 0) {
                        hn.c4 = c1;
                        hn.c1 = 0;
                    }
                    else {
                        if (c4 > c1 || c4 < c1) {
                            hn.c4 = c4;
                            hn.c3 = c1;
                            hn.c1 = 0;
                        }
                        else if (c4 == c1) {
                            hn.c4 = c4 * 2;
                            hn.c1 = 0;
                        }
                    }
                }
                else {
                    if (c3 > c1 || c3 < c1) {
                        hn.c2 = c1;
                        hn.c3 = c3;
                        hn.c1 = 0;
                    }
                    else if (c3 == c1) {
                        hn.c3 = c3 * 2;
                        hn.c1 = 0;
                    }
                }
            }
            else {
                if (c2 > c1 || c2 < c1) {
                    hn.c1 = c1;
                    hn.c2 = c2;
                }
                else if (c2 == c1) {
                    hn.c2 = c2 * 2;
                    hn.c1 = 0;
                }
            }
        }
        if (hn.c1 != c1 || hn.c2 != c2 || hn.c3 != c3 || hn.c4 != c4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c2 != 0) {
            if (c3 == 0) {
                if (c4 == 0) {
                    hn.c4 = c2;
                    hn.c2 = 0;
                }
                else {
                    if (c4 > c2 || c4 < c2) {
                        hn.c4 = c4;
                        hn.c3 = c2;
                        hn.c2 = 0;
                    }
                    else if (c4 == c2) {
                        hn.c4 = c4 * 2;
                        hn.c2 = 0;
                    }
                }
            }
            else {
                if (c3 > c2 || c3 < c2) {
                    hn.c3 = c3;
                    hn.c2 = c2;
                }
                else if (c3 == c2) {
                    hn.c3 = c3 * 2;
                    hn.c2 = 0;
                }
            }
        }
        if (hn.c1 != c1 || hn.c2 != c2 || hn.c3 != c3 || hn.c4 != c4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c3 != 0) {
            if (c4 == 0) {
                hn.c4 = c3;
                hn.c3 = 0;
            }
            else {
                if (c4 == c3) {
                    hn.c4 = c4 * 2;
                    hn.c3 = 0;
                }
            }
        }
        if (hn.c1 != c1 || hn.c2 != c2 || hn.c3 != c3 || hn.c4 != c4) {
            moved = true;
        }


        // Row 4
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (d1 != 0) {
            if (d2 == 0) {
                if (d3 == 0) {
                    if (d4 == 0) {
                        hn.d4 = d1;
                        hn.d1 = 0;
                    }
                    else {
                        if (d4 > d1 || d4 < d1) {
                            hn.d4 = d4;
                            hn.d3 = d1;
                            hn.d1 = 0;
                        }
                        else if (d4 == d1) {
                            hn.d4 = d4 * 2;
                            hn.d1 = 0;
                        }
                    }
                }
                else {
                    if (d3 > d1 || d3 < d1) {
                        hn.d2 = d1;
                        hn.d3 = d3;
                        hn.d1 = 0;
                    }
                    else if (d3 == d1) {
                        hn.d3 = d3 * 2;
                        hn.d1 = 0;
                    }
                }
            }
            else {
                if (d2 > d1 || d2 < d1) {
                    hn.d1 = d1;
                    hn.d2 = d2;
                }
                else if (d2 == d1) {
                    hn.d2 = d2 * 2;
                    hn.d1 = 0;
                }
            }
        }
        if (hn.d1 != d1 || hn.d2 != d2 || hn.d3 != d3 || hn.d4 != d4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (d2 != 0) {
            if (d3 == 0) {
                if (d4 == 0) {
                    hn.d4 = d2;
                    hn.d2 = 0;
                }
                else {
                    if (d4 > d2 || d4 < d2) {
                        hn.d4 = d4;
                        hn.d3 = d2;
                        hn.d2 = 0;
                    }
                    else if (d4 == d2) {
                        hn.d4 = d4 * 2;
                        hn.d2 = 0;
                    }
                }
            }
            else {
                if (d3 > d2 || d3 < d2) {
                    hn.d3 = d3;
                    hn.d2 = d2;
                }
                else if (d3 == d2) {
                    hn.d3 = d3 * 2;
                    hn.d2 = 0;
                }
            }
        }
        if (hn.d1 != d1 || hn.d2 != d2 || hn.d3 != d3 || hn.d4 != d4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (d3 != 0) {
            if (d4 == 0) {
                hn.d4 = d3;
                hn.d3 = 0;
            }
            else {
                if (d4 == d3) {
                    hn.d4 = d4 * 2;
                    hn.d3 = 0;
                }
            }
        }
        if (hn.d1 != d1 || hn.d2 != d2 || hn.d3 != d3 || hn.d4 != d4) {
            moved = true;
        }
        resetscreen2048();
        return(moved);
    }
    // LEFT
    bool shiftleft2048() {
        bool moved = false;
        int a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;


        // Row 1
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (a4 != 0) {
            if (a3 == 0) {
                if (a2 == 0) {
                    if (a1 == 0) {
                        hn.a1 = a4;
                        hn.a4 = 0;
                    }
                    else {
                        if (a1 == a4) {
                            hn.a1 = a1 * 2;
                            hn.a4 = 0;
                        }
                        else if (a1 > a4 || a1 < a4) {
                            hn.a1 = a1;
                            hn.a2 = a4;
                            hn.a4 = 0;
                        }
                    }
                }
                else {
                    if (a2 == a4) {
                        hn.a2 = a2 * 2;
                        hn.a4 = 0;
                    }
                    else if (a2 > a4 || a2 < a4) {
                        hn.a2 = a2;
                        hn.a3 = a4;
                        hn.a4 = 0;
                    }
                }
            }
            else {
                if (a3 == a4) {
                    hn.a3 = a3 * 2;
                    hn.a4 = 0;
                }
                else if (a3 > a4 || a3 < a4) {
                    hn.a3 = a3;
                    hn.a4 = a4;
                }
            }
        }
        if (hn.a1 != a1 || hn.a2 != a2 || hn.a3 != a3 || hn.a4 != a4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (a3 != 0) {
            if (a2 == 0) {
                if (a1 == 0) {
                    hn.a1 = a3;
                    hn.a3 = 0;
                }
                else {
                    if (a1 == a3) {
                        hn.a1 = a1 * 2;
                        hn.a3 = 0;
                    }
                    else if (a1 > a3 || a1 < a3) {
                        hn.a1 = a1;
                        hn.a2 = a3;
                        hn.a3 = 0;
                    }
                }
            }
            else {
                if (a2 == a3) {
                    hn.a2 = a2 * 2;
                    hn.a3 = 0;
                }
                else if (a2 > a3 || a2 < a3)  {
                    hn.a2 = a2;
                    hn.a3 = a3;
                }
            }
        }
        if (hn.a1 != a1 || hn.a2 != a2 || hn.a3 != a3 || hn.a4 != a4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (a2 != 0) {
            if (a1 == 0) {
                hn.a1 = a2;
                hn.a2 = 0;
            }
            else {
                if (a1 == a2) {
                    hn.a1 = a1 * 2;
                    hn.a2 = 0;
                }
                else if (a1 > a2 || a1 < a2) {
                    hn.a1 = a1;
                    hn.a2 = a2;
                }
            }
        }
        if (hn.a1 != a1 || hn.a2 != a2 || hn.a3 != a3 || hn.a4 != a4) {
            moved = true;
        }


        // Row 2
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b4 != 0) {
            if (b3 == 0) {
                if (b2 == 0) {
                    if (b1 == 0) {
                        hn.b1 = b4;
                        hn.b4 = 0;
                    }
                    else {
                        if (b1 == b4) {
                            hn.b1 = b1 * 2;
                            hn.b4 = 0;
                        }
                        else if (b1 > b4 || b1 < b4) {
                            hn.b1 = b1;
                            hn.b2 = b4;
                            hn.b4 = 0;
                        }
                    }
                }
                else {
                    if (b2 == b4) {
                        hn.b2 = b2 * 2;
                        hn.b4 = 0;
                    }
                    else if (b2 > b4 || b2 < b4) {
                        hn.b2 = b2;
                        hn.b3 = b4;
                        hn.b4 = 0;
                    }
                }
            }
            else {
                if (b3 == b4) {
                    hn.b3 = b3 * 2;
                    hn.b4 = 0;
                }
                else if (b3 > b4 || b3 < b4) {
                    hn.b3 = b3;
                    hn.b4 = b4;
                }
            }
        }
        if (hn.b1 != b1 || hn.b2 != b2 || hn.b3 != b3 || hn.b4 != b4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b3 != 0) {
            if (b2 == 0) {
                if (b1 == 0) {
                    hn.b1 = b3;
                    hn.b3 = 0;
                }
                else {
                    if (b1 == b3) {
                        hn.b1 = b1 * 2;
                        hn.b3 = 0;
                    }
                    else if (b1 > b3 || b1 < b3) {
                        hn.b1 = b1;
                        hn.b2 = b3;
                        hn.b3 = 0;
                    }
                }
            }
            else {
                if (b2 == b3) {
                    hn.b2 = b2 * 2;
                    hn.b3 = 0;
                }
                else if (b2 > b3 || b2 < b3) {
                    hn.b2 = b2;
                    hn.b3 = b3;
                }
            }
        }
        if (hn.b1 != b1 || hn.b2 != b2 || hn.b3 != b3 || hn.b4 != b4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (b2 != 0) {
            if (b1 == 0) {
                hn.b1 = b2;
                hn.b2 = 0;
            }
            else {
                if (b1 == b2) {
                    hn.b1 = b1 * 2;
                    hn.b2 = 0;
                }
                else if (b1 > b2 || b1 < b2) {
                    hn.b1 = b1;
                    hn.b2 = b2;
                }
            }
        }
        if (hn.b1 != b1 || hn.b2 != b2 || hn.b3 != b3 || hn.b4 != b4) {
            moved = true;
        }


        // Row 3
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c4 != 0) {
            if (c3 == 0) {
                if (c2 == 0) {
                    if (c1 == 0) {
                        hn.c1 = c4;
                        hn.c4 = 0;
                    }
                    else {
                        if (c1 == c4) {
                            hn.c1 = c1 * 2;
                            hn.c4 = 0;
                        }
                        else if (c1 > c4 || c1 < c4) {
                            hn.c1 = c1;
                            hn.c2 = c4;
                            hn.c4 = 0;
                        }
                    }
                }
                else {
                    if (c2 == c4) {
                        hn.c2 = c2 * 2;
                        hn.c4 = 0;
                    }
                    else if (c2 > c4 || c2 < c4) {
                        hn.c2 = c2;
                        hn.c3 = c4;
                        hn.c4 = 0;
                    }
                }
            }
            else {
                if (c3 == c4) {
                    hn.c3 = c3 * 2;
                    hn.c4 = 0;
                }
                else if (c3 > c4 || c3 < c4) {
                    hn.c3 = c3;
                    hn.c4 = c4;
                }
            }
        }
        if (hn.c1 != c1 || hn.c2 != c2 || hn.c3 != c3 || hn.c4 != c4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c3 != 0) {
            if (c2 == 0) {
                if (c1 == 0) {
                    hn.c1 = c3;
                    hn.c3 = 0;
                }
                else {
                    if (c1 == c3) {
                        hn.c1 = c1 * 2;
                        hn.c3 = 0;
                    }
                    else if (c1 > c3 || c1 < c3) {
                        hn.c1 = c1;
                        hn.c2 = c3;
                        hn.c3 = 0;
                    }
                }
            }
            else {
                if (c2 == c3) {
                    hn.c2 = c2 * 2;
                    hn.c3 = 0;
                }
                else if (c2 > c3 || c2 < c3) {
                    hn.c2 = c2;
                    hn.c3 = c3;
                }
            }
        }
        if (hn.c1 != c1 || hn.c2 != c2 || hn.c3 != c3 || hn.c4 != c4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (c2 != 0) {
            if (c1 == 0) {
                hn.c1 = c2;
                hn.c2 = 0;
            }
            else {
                if (c1 == c2) {
                    hn.c1 = c1 * 2;
                    hn.c2 = 0;
                }
                else if (c1 > c2 || c1 < c2) {
                    hn.c1 = c1;
                    hn.c2 = c2;
                }
            }
        }
        if (hn.c1 != c1 || hn.c2 != c2 || hn.c3 != c3 || hn.c4 != c4) {
            moved = true;
        }


        // Row 4
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (d4 != 0) {
            if (d3 == 0) {
                if (d2 == 0) {
                    if (d1 == 0) {
                        hn.d1 = d4;
                        hn.d4 = 0;
                    }
                    else {
                        if (d1 == d4) {
                            hn.d1 = d1 * 2;
                            hn.d4 = 0;
                        }
                        else if (d1 > d4 || d1 < d4) {
                            hn.d1 = d1;
                            hn.d2 = d4;
                            hn.d4 = 0;
                        }
                    }
                }
                else {
                    if (d2 == d4) {
                        hn.d2 = d2 * 2;
                        hn.d4 = 0;
                    }
                    else if (d2 > d4 || d2 < d4) {
                        hn.d2 = d2;
                        hn.d3 = d4;
                        hn.d4 = 0;
                    }
                }
            }
            else {
                if (d3 == d4) {
                    hn.d3 = d3 * 2;
                    hn.d4 = 0;
                }
                else if (d3 > d4 || d3 < d4) {
                    hn.d3 = d3;
                    hn.d4 = d4;
                }
            }
        }
        if (hn.d1 != d1 || hn.d2 != d2 || hn.d3 != d3 || hn.d4 != d4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (d3 != 0) {
            if (d2 == 0) {
                if (d1 == 0) {
                    hn.d1 = d3;
                    hn.d3 = 0;
                }
                else {
                    if (d1 == d3) {
                        hn.d1 = d1 * 2;
                        hn.d3 = 0;
                    }
                    else if (d1 > d3 || d1 < d3) {
                        hn.d1 = d1;
                        hn.d2 = d3;
                        hn.d3 = 0;
                    }
                }
            }
            else {
                if (d2 == d3) {
                    hn.d2 = d2 * 2;
                    hn.d3 = 0;
                }
                else if (d2 > d3 || d2 < d3) {
                    hn.d2 = d2;
                    hn.d3 = d3;
                }
            }
        }
        if (hn.d1 != d1 || hn.d2 != d2 || hn.d3 != d3 || hn.d4 != d4) {
            moved = true;
        }
        a1 = hn.a1, a2 = hn.a2, a3 = hn.a3, a4 = hn.a4, b1 = hn.b1, b2 = hn.b2, b3 = hn.b3, b4 = hn.b4, c1 = hn.c1, c2 = hn.c2, c3 = hn.c3, c4 = hn.c4, d1 = hn.d1, d2 = hn.d2, d3 = hn.d3, d4 = hn.d4;
        if (d2 != 0) {
            if (d1 == 0) {
                hn.d1 = d2;
                hn.d2 = 0;
            }
            else {
                if (d1 == d2) {
                    hn.d1 = d1 * 2;
                    hn.d2 = 0;
                }
                else if (d1 > d2 || d1 < d2) {
                    hn.d1 = d1;
                    hn.d2 = d2;
                }
            }
        }
        if (hn.d1 != d1 || hn.d2 != d2 || hn.d3 != d3 || hn.d4 != d4) {
            moved = true;
        }

        resetscreen2048();
        return(moved);
    }


    // SPAWN
    void spawn2048() {
        bool went = false;
        srand(time(NULL));
        do {
            int ranspawn = rand() % 16 + 1;
            switch (ranspawn) {
            case 1:
                if (hn.a1 == 0) {
                    hn.a1 = 2;
                    went = true;
                }
                break;
            case 2:
                if (hn.a2 == 0) {
                    hn.a2 = 2;
                    went = true;
                }
                break;
            case 3:
                if (hn.a3 == 0) {
                    hn.a3 = 2;
                    went = true;
                }
                break;
            case 4:
                if (hn.a4 == 0) {
                    hn.a4 = 2;
                    went = true;
                }
                break;
            case 5:
                if (hn.b1 == 0) {
                    went = true;
                    hn.b1 = 2;
                }
                break;
            case 6:
                if (hn.b2 == 0) {
                    hn.b2 = 2;
                    went = true;
                }
                break;
            case 7:
                if (hn.b3 == 0) {
                    hn.b3 = 2;
                    went = true;
                }
                break;
            case 8:
                if (hn.b4 == 0) {
                    hn.b4 = 2;
                    went = true;
                }
                break;
            case 9:
                if (hn.c1 == 0) {
                    hn.c1 = 2;
                    went = true;
                }
                break;
            case 10:
                if (hn.c2 == 0) {
                    hn.c2 = 2;
                    went = true;
                }
                break;
            case 11:
                if (hn.c3 == 0) {
                    hn.c3 = 2;
                    went = true;
                }
                break;
            case 12:
                if (hn.c4 == 0) {
                    hn.c4 = 2;
                    went = true;
                }
                break;
            case 13:
                if (hn.d1 == 0) {
                    hn.d1 = 2;
                    went = true;
                }
                break;
            case 14:
                if (hn.d2 == 0) {
                    went = true;
                    hn.d2 = 2;
                }
                break;
            case 15:
                if (hn.d3 == 0) {
                    hn.d3 = 2;
                    went = true;
                }
                break;
            case 16:
                if (hn.d4 == 0) {
                    hn.d4 = 2;
                    went = true;
                }
                break;
            }
        } while (went == false);
        went = false;
        resetscreen2048();
    }
};
int main()
{
    ConsoleTextSize(40);
    ConsoleTitle("2048 Remake by ChickenSquiggles");
    cout << "Welcome to 2048 Remake by ChickenSquiggles! Use arrow keys or WASD do move the tiles around.\n";
    HANDLE2048 h;
    h.resetscreen2048();
    h.spawn2048();
    h.spawn2048();
    do {
        if (GetKeyState(VK_UP) & 0x8000)
        {
            if (h.shiftup2048()) {
                h.spawn2048();
            }
            Sleep(100);
    
        }
        else if (GetKeyState(VK_RIGHT) & 0x8000)
        {
            if (h.shiftright2048()) {
                h.spawn2048();
            }
            Sleep(100);
        }
        else if (GetKeyState(VK_DOWN) & 0x8000)
        {
            if (h.shiftdown2048()) {
                h.spawn2048();
            }
            Sleep(100);
        }
        else if (GetKeyState(VK_LEFT) & 0x8000)
        {
            if (h.shiftleft2048()) {
                h.spawn2048();
            }
            Sleep(100);
        }
        if (GetKeyState(VK_SHIFT) & 0x8000)
        {
            h.resetscreen2048();
            Sleep(100);
        }
    } while (1 + 1 == 2);
}
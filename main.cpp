#include <iostream>


int main(int argc, char *argv[]) {
    int count = 0;
    int count2 = 0;
    while (count < (int)*argv[1]-46) {
        if (count == count2) {
            count=count+1;
            count2 = 0;
            std::cout << "\n";
        }
        else if (count2 > 0) {
            std::cout << "#";
        }
        count2++;
    }
    count = count - 2;
    count2 = 0;
    int count3 = count + 1;
    while (count3 != 0) {
        std::cout << "#";
        count3--;
    }
    std::cout << "\n";
    while (count != 0) {
        if (count2 == count) {
            count = count - 1;
            count2 = 0;
            std::cout<<"\n";
        }
        else if (count != count2) {
            std::cout<<"#";
            count2++;
        }
    }
}
